#include "netreader.h"
#include "ui_netreader.h"
#include <QMessageBox>
#include <QDebug>
#include <iostream>

//NetReader* NetReader::m_pInstance=nullptr;
//NetReader::CGarHuishou NetReader::cl2; //用这种方法无法回收netreader,原因还没查到
//NetReader *NetReader::getInstance()
//{
//    if(m_pInstance==nullptr)
//    {
//        m_pInstance=new NetReader();
//    }
//    return m_pInstance;
//}

NetReader::NetReader(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NetReader)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

    m_nEvent = 1;
    m_nScale = 1;
    m_nDuration = 2;
    m_bRunning = false;
    m_serialPort = 0;

    m_pRawData = 0;
    m_nEpochLen = 151;

    clearMessages();
    clearGyroscopeMessages();

    //m_pEEGGraph = new EEGGraph(this);   //pps

    ui->editMarker->setText(QString::number(m_nEvent));
    ui->spinScale->setMaximum(10000);
    ui->spinScale->setSingleStep(10);
    ui->spinScale->setValue(m_nScale);
    ui->spinDuration->setValue(m_nDuration);
    ui->editInstruction->setEnabled(false);

    //showInstructions();
    m_serialPort = new QSerialPort(this);
    m_serialPort->setBaudRate(115200);
    m_serialPort->setDataBits(QSerialPort::Data8);
    connect(m_serialPort,SIGNAL(readyRead()),this,SLOT(m_readread()));
    connect(m_serialPort,&QSerialPort::errorOccurred,this,&NetReader::onErrorOccurred);

    //ps20200111
    m_timerCheckSerial=new QTimer(this);
    connect(m_timerCheckSerial,&QTimer::timeout,this,&NetReader::onCheckPortTimeOut);

    m_timerFirstCheck=new QTimer(this);
    connect(m_timerFirstCheck,&QTimer::timeout,this,&NetReader::onCheckPortTimeOut);
    //m_checkSerialTimer->setSingleShot(true);
    //onCheckPortTimeOut(); //一开始自动连接
    firstCheckPort();

    //ps
    m_pEdfWriter=new EdfWriter(this);
}


NetReader::~NetReader()
{
    qDebug()<<QString::fromLocal8Bit("NetReader");
    //delete m_pEdfWriter;
    if(m_serialPort->isOpen())
        closeSerial();
    stopAcquisition();
    delete ui;
}

void NetReader::on_btnMarker_clicked()   //pps不修改，实际上有新的测试打标窗口
{
    int event = ui->editMarker->text().toInt();
    outputEvent(event);
}

void NetReader::on_btnConnect_clicked()
{
    m_BufferRead.clear();
    QString strPortName = ui->comboDevice->currentText();
    m_serialPort->setPortName(strPortName);
    if (!m_serialPort->isOpen())
    {
        closeSerial();
        stopAcquisition();
        dataSignal.clear();
        dataEvent.clear();
        if(m_serialPort->open(QIODevice::ReadWrite))
        {
           qDebug()<<"open serial success";
           startAcquisition();
           bReconnect=true;  //置重新连接标志为真，以辅助后面数据有效与否的判断
           qDebug()<<"netreader connected successfully";
           emit connectSuccess();
        }
        else
        {
           qDebug()<<"open serial failure";

        }
    }
    else
    {
        closeSerial();
        stopAcquisition();
    }
    enableControls(isConnected());
}

void NetReader::m_readread()
{
    QByteArray arr= m_serialPort->readAll();
    //qDebug()<<"NetReader::m_readread arr="<<arr;
    //测试证明，第一次连接或重新连接后会出现第一个字节不满足有效的条件，此时不应该写入m_BufferRead，
    //这会导致后面的判断都无效，因为此时实际上已经整体错位了，所以要先判断前面的两个字节是否满足要求，
    //满足就写入m_BufferRead，不满足就不写入直到读到满足条件的数据，显然这中间会有些数据被忽略了，
    //但不会有影响
   int arrSize=arr.size();
   if(bReconnect)
   {
       if(arrSize>2)
       {
           char tmp1=arr.at(0);
           char tmp2=arr.at(1);
           if(tmp1==0x0a&&tmp2==0x0d)    //重新连接之后第一个字节容易出错（漏了或者不正确）
           {
                 //qDebug()<<"匹配";
               //事实证明，bReconnect变量有可能更新没那么快，此时要
               //清空一次m_BufferRead,否则它还是会把不符合数据头
               //要求的数据写进m_BufferRead;
               m_BufferRead.clear();
               bReconnect=false;
           }
       }
       else
           return;
   }

   //判断第一个字节有效后才进行写入
    m_BufferRead.write(arr);
    while (m_BufferRead.length() >= 20)
    {
       //AmpMessage* pMsg = new AmpMessage();
        AmpMsgPtr msgPtr(new AmpMessage());
        //注意msgPtr.data() 和下面 msgPtr->data[i] 的区别
       m_BufferRead.read((char*)(msgPtr.data()), 20);
       if (msgPtr->isValid())
       {
           //qDebug()<<"data valid";
           addMessage(msgPtr);
           addGyroscopeMessage(msgPtr);
           if (m_queueMsg.size() > m_nMaxMsg)
           {
               removeMessage();
           }
           if (m_queueGyroscopeMsg.size() > 20)
           {
               removeGyroscopeMessage();
           }

           //以下跟绘制跟保存波形有关

           unsigned char* dataArray = (unsigned char*)(msgPtr->data);
           //电池电量
           m_nEnergy = dataArray[4];

           int event1 = 0;
           int event2 = 0;

           //检测有无打标
           if(dataArray[2] != 0)
           {
               event1 = dataArray[2];
               emit getEventNumber(event1);

           }
           if(dataArray[10] != 0) //
           {
                event2 = dataArray[10];
                emit getEventNumber(event2);
           }

           double data1 = dataArray[1]*256 + dataArray[0];
           double data2 = dataArray[9]*256 + dataArray[8];
           //tcp数据传输
           if (dataBuffer.size()==4)//两个两个加进去，判断的时候4个说明加完两个就6个了
           {
               dataBuffer.append(data1);
               dataBuffer.append(data2);
               eventBuffer.append(event1);
               eventBuffer.append(event2);
               emit sendEEGDataNetReader(dataBuffer[0], eventBuffer[0], dataBuffer[1], eventBuffer[1], dataBuffer[2], eventBuffer[2], dataBuffer[3], eventBuffer[3], dataBuffer[4], eventBuffer[4], dataBuffer[5], eventBuffer[5]);
               dataBuffer.clear();
               eventBuffer.clear();
           }
           else {
               dataBuffer.append(data1);
               dataBuffer.append(data2);
               eventBuffer.append(event1);
               eventBuffer.append(event2);
           }
           m_nPlotData = (data1 + data2)/2;   //这里是取一次数据中两个眼电数据的平均值绘图，但保存的还是原始值
          //如果已经开启了保存
          if(m_bWriting == true)
          {
              //一次性添加两个数据
              EOGPointPtr eogPtr1(new EOGPoint(data1, event1));
              EOGPointPtr eogPtr2(new EOGPoint(data2, event2));
              addMessageEDF(eogPtr1);
              addMessageEDF(eogPtr2);
              //如果已经超过缓冲长度
              if (m_queueEOGPoint.size() > 1000)   //设定为1000
              {
                  removeMessageEDF();
                  removeMessageEDF();
              }
          }
       }
    }
}

void NetReader::on_btnHide_clicked()
{
    hide();
}

void NetReader::on_spinDuration_valueChanged(int arg1)
{
    m_nDuration = arg1;
    //m_pEEGGraph->setPoints(m_nDuration*250);  //pps
}

void NetReader::on_spinScale_valueChanged(int arg1)
{
    m_nScale = arg1;
    m_fScaleCoef = m_nScale;
    //m_pEEGGraph->setScale(m_fScaleCoef);   //pps
}

bool NetReader::startAcquisition()
{
    m_nAllChannels = 2;
    m_nBlockPoints = 4;
    m_nTotalPoints = 250*m_nDuration;
    m_fScaleCoef = m_nScale;

    m_EpochManager.setChannelInfo(1, 1, m_nEpochLen);
    clearEpochs();
    clearMessages();
    clearGyroscopeMessages();

    m_pRawData = new int[m_nTotalPoints*m_nAllChannels];
    //EEGGraph类用于旧版本的绘图
    //m_pEEGGraph->init(m_nAllChannels, m_nTotalPoints, m_fScaleCoef);   //pps
    //m_pEEGGraph->setDataSource(m_pRawData);
    //m_pEEGGraph->startUpdate();
    //m_pEEGGraph->show();
    //m_pEEGGraph->setGeometry(ui->editInstruction->geometry());

    m_WorkThread = QtConcurrent::run(this, &NetReader::worker);
    qDebug()<<"startAcquisition m_WorkThread start :";

    return true;
}

bool NetReader::stopAcquisition()
{
    m_bRunning = false;
    m_WorkThread.waitForFinished();

    clearEpochs();
    clearMessages();
    clearGyroscopeMessages();

    delete m_pRawData;
    m_pRawData = 0;

    return true;
}

void NetReader::worker()
{
    static int count=0;
    qDebug("NetReader::worker: thread started: 0x%x", (uint)QThread::currentThreadId());
    int sample = 0;
    bool b32bit = (sizeof(short) == sizeof(int));
    int blocksize = m_nAllChannels*m_nBlockPoints*sizeof(short);
    char* data = new char[blocksize];  // blocksize = 16
    m_bRunning = true;
    while (m_bRunning)
    {
        if (!getData(data, blocksize))
        {
            count++;
            if(count==100)   //如果累加到一定程度都没有数据的话证明蓝牙未连接
            {
                m_bBTConnected = false;
                count=0;
                //qDebug()<<"m_bBTConnected=false";
            }
            QThread::msleep(10);            
        }
        else
        {            
            m_bBTConnected = true;
            count=0;
            //qDebug()<<"m_bBTConnected=true";
            m_EpochManager.insertData(data, 4, b32bit);

            //m_pRawData是旧版本EEGGraph绘制波形的数据源，这里不需要再使用
            /*if (m_pRawData != 0)
            {
                for (int i = 0; i<m_nBlockPoints/2; i++)
                {
                    for (int j = 0; j < m_nAllChannels; j++)
                    {
                        if (b32bit)
                        {
                            int* pData32 = (int*)data;
                            int aa = pData32[2*i*m_nAllChannels+j];
                            m_pRawData[(i+sample)*m_nAllChannels+j] = aa;
                        }
                        else
                        {
                            short* pData16 = (short*)data;
                            m_pRawData[(i+sample)*m_nAllChannels+j] = pData16[2*i*m_nAllChannels+j];
                        }
                    }
                }
                sample = (sample+m_nBlockPoints/2)%m_nTotalPoints;
            }*/
        }

        //ps如果需要保存数据
        if(m_bWriting == true)
        {
            if(m_queueEOGPoint.size() > m_nEdfWritingSampleFre)
            {
                writeBlockEDFData();
                //qDebug()<<"NetReader::worker:write in data";
            }

        }
    }
    delete [] data;
    qDebug("NetReader::worker: thread stopped: 0x%x", (uint)QThread::currentThreadId());
}

void NetReader::outputEvent(int event)
{
    //qDebug()<<"mark point:"<<event;
    if (isConnected())
    {
        char chEvent = 0xFF & event;
        QByteArray sendData;
        sendData.append(0xfb).append(0xfb).append(chEvent).append((char)0x00).append((char)0x00);
        write_data(sendData);
    }
}

bool NetReader::isConnected()
{
    return (m_serialPort && m_serialPort->isOpen());
}


void NetReader::write_data(QByteArray data)
{
    m_serialPort->write(data);
}

void NetReader::write_data(char *data)
{
   m_serialPort->write(data);
}

void NetReader::onConnected()
{
}

void NetReader::onDisconnected()
{
    m_BufferRead.clear();
    enableControls(isConnected());
}

void NetReader::onReceived(QByteArray redata)
{
}

void NetReader::enableControls(bool bConnected)
{
    ui->comboDevice->setEnabled(!bConnected);
    ui->spinDuration->setEnabled(!bConnected);
    ui->btnConnect->setText(bConnected?"Disconnect":"Connect");
}

void NetReader::showInstructions()
{
    QString strInstructions =
        (
        "\r\n"
        "\tDESCRIPTION:\r\n\r\n"
        "\tThis sample application (with source code) is provided to illustrate a client\\server concept under SCAN 4.3\r\n"
        "\tincluding: 1) transfer the basic setup information, EEG data, and impedance values through TCP sockets;\r\n"
        "\t2) display of the incoming EEG data signals and events; 3) storing the raw EEG data/events in binary format.\r\n\r\n"
        "\tINSTRUCTIONS:\r\n\r\n"
        "\t1. \tStart ACQUIRE.EXE as a server on local or remote computer.\r\n"
        "\t2. \tIf you use remote computer, enter it's server name, e.g. '12.34.56.78'.\r\n"
        "\t   \tIf you use local computer, leave default 'localhost' name.\r\n"
        "\t3. \tSpecify port, duration, and initial scale.\r\n"
        "\t4. \tClick on 'Connect' button. This program will connect as a client to ACQUIRE server.\r\n"
        "\t5. \tStart acquisition on server side, the signal will appear on both screens.\r\n"
        "\t   \tStatus box will show total bytes transferred and current transfer rate.\r\n"
        "\t6. \tAdjust vertical scale, if necessary.\r\n"
        "\t7. \tEnter events and perform DC corrections on server side, observe they appear on client side.\r\n"
        "\t8. \tClick on 'Save' button to store incoming data in raw binary format.\r\n"
        "\t   \tFile name is 'DATA.BIN' and it is created in working directory of client program.\r\n"
        "\t9. \tStart impedance measurement on server side and see impedance values on client side.\r\n"
        "\t10.\tClick on 'Disconnect' button to stop client operation.\r\n"
        "\t11.\tExit ACQUIRE and this program.\r\n\r\n"
        "\tDISCLAIMER:\r\n"
        "\tThis sample application is provided for informational purposes only and Neuroscan makes no warranties,\r\n"
        "\teither express or implied, in this application. The entire risk of the use of this sample remains with the user.\r\n"
        "\tTechnical support is not available for this sample application and for the provided source code.\r\n"
        "\r\n\r\n\r\n\r\n\r\n\r\n\t?986-2003 Neuroscan. All rights reserved."
        );
    ui->editInstruction->setText(strInstructions);
    //m_pEEGGraph->hide();
    ui->editInstruction->show();
}

void NetReader::addMessage(AmpMsgPtr& msgPtr)
{
    m_mutexMsg.lock();
    m_queueMsg.append(msgPtr);
    //writeDate(pMsg->data);
    m_mutexMsg.unlock();
}

void NetReader::addGyroscopeMessage(AmpMsgPtr& msgPtr)
{
    m_mutexGyroscopeMsg.lock();
    m_queueGyroscopeMsg.append(msgPtr);
    m_mutexGyroscopeMsg.unlock();
}

void NetReader::closeSerial()
{
    m_serialPort->close();
    enableControls(isConnected());
}

bool NetReader::writeDate(char* data)
{
    QString number,event;
    for(int i=0;i<4;i+=2)
    {
        number = QString::number((data[i*4]&0xff)|((data[i*4+1]&0xff)<<8));
        event= QString::number((data[i*4+2]&0xff));
        dataSignal.append(number);
        dataEvent.append(event);
    }
    return true;
}

NetReader::AmpMsgPtr NetReader::removeMessage()
{
    AmpMsgPtr pMsg = 0;
    m_mutexMsg.lock();
    if (m_queueMsg.size() > 0) pMsg = m_queueMsg.takeFirst();
    m_mutexMsg.unlock();
    return pMsg;
}

NetReader::AmpMsgPtr NetReader::removeGyroscopeMessage()
{
    m_mutexGyroscopeMsg.lock();
    AmpMsgPtr msgPtr = 0;
    if (m_queueGyroscopeMsg.size() > 0) msgPtr = m_queueGyroscopeMsg.takeFirst();
    m_mutexGyroscopeMsg.unlock();
    return msgPtr;
}

void NetReader::clearMessages()
{
    m_mutexMsg.lock();
    //改用智能指针，直接clear()
    m_queueMsg.clear();
    m_mutexMsg.unlock();
}

void NetReader::clearGyroscopeMessages()
{
    m_mutexGyroscopeMsg.lock();
    //改用智能指针，直接clear()
    m_queueGyroscopeMsg.clear();
    m_mutexGyroscopeMsg.unlock();
}

bool NetReader::getData(char* data, int size)
{
    if (m_queueMsg.size() == 0) return false;
    //改用智能指针
    AmpMsgPtr msgPtr = removeMessage();
    memcpy(data, msgPtr->data, size);
    return true;
}

bool NetReader::getGyroscopeData(char* data, int size)
{
    if (m_queueGyroscopeMsg.size() == 0) return false;
    //改用智能指针
    AmpMsgPtr msgPtr = removeGyroscopeMessage();
    memcpy(data, msgPtr->data, size);
    return true;
}

void NetReader::setEpochLen(int epochlen)
{
    m_nEpochLen = epochlen;
}

Epoch* NetReader::getEpoch()
{
    return m_EpochManager.getEpoch(true);
}

void NetReader::clearEpochs()
{
    m_EpochManager.clearEpochs();
}

void NetReader::checkPorts()
{
    ui->comboDevice->clear();
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())   //修改
    {

        //
        //qDebug()<<"info.portName:"<<info.portName();
        //qDebug()<<info.systemLocation()<<endl;
        //qDebug()<<"info.description:"<<info.description()<<endl;
        if(info.description()=="USB-SERIAL CH340"||info.description()=="Silicon Labs CP210x USB to UART Bridge")
        {
            ui->comboDevice->addItem(info.portName());
             //qDebug()<<"已添加串口"<<endl;
        }
    }

    //ps20200111
    m_nPortCount=ui->comboDevice->count();
//    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
//    {
//        ui->comboDevice->addItem(info.portName());
//    }

}

void NetReader::initEdfWriter(const QString& wavepath)
{
    //清除原来保留的
    clearMessagesEDF();

    if (m_pEdfWriter->initWriting(wavepath, m_nEdfWritingSampleFre))
    {
        m_bWriting = true;
    }
}

void NetReader::closeEdfWriter()   //关了文件
{
    m_bWriting = false;
    //采集写入完成后一定要关掉文件，不然保存下来的.edf文件用EDFBrowser打开会出错
    m_pEdfWriter->closeFileHdl();//ps新加的
    clearMessagesEDF();

}

void NetReader::onErrorOccurred(QSerialPort::SerialPortError error)
{
    qDebug()<<"NetReader errorOcurred,error="<<error;
    if(error!=QSerialPort::NoError)
    {
        qDebug()<<"checking serialport starts...";
        if(m_serialPort->isOpen())
            closeSerial();
        stopAcquisition();
        if(m_bFirstCheck == true)
        {
            //此时定时器还开着
            return;
        }
        else {
            if(m_timerCheckSerial->isActive()==false)
                m_timerCheckSerial->start(m_nCheckPortTime);
        }
    }
    else {
        qDebug()<<"stop checking serialport";
        if(m_bFirstCheck==true)
        {
            if(m_timerFirstCheck->isActive())
                m_timerFirstCheck->stop();
            m_bFirstCheck=false;
            return;
        }
        else
        {
            //停掉定时器
            if(m_timerCheckSerial->isActive())
                m_timerCheckSerial->stop();
        }
        //b_connectFailed=false;  //连接成功

    }
}

void NetReader::firstCheckPort()
{
    qDebug()<<"searching serialport...";
    checkPorts();
    if(m_nPortCount>0)
    {
        connectSerial();
    }
    else //如果一开始就没有插入串口，就开启定时检测
    {
        m_bFirstCheck = true;
        m_timerFirstCheck->start(m_nCheckPortTime);
    }
}

//与mainwindow里的m_nPlotData共享内容
void NetReader::sharePlotData(double *&data)
{
    data = &m_nPlotData;
}

int NetReader::getEnergy()
{
    return m_nEnergy;
}

void NetReader::setWearDetectable(bool bDetect)
{
    bWearDetectable = bDetect;
    //qDebug()<<"电极脱落检测";
}

void NetReader::connectSerial()
{
    on_btnConnect_clicked();
}

void NetReader::on_btnApply_clicked()
{
    m_nEdfWritingSampleFre = ui->comboSampleFre->currentText().toInt();
    m_nEdfWritingChannels = ui->editChannels->text().toInt();
    //qDebug()<<"edfWritingChannels"<<edfWritingChannels;
    m_nEogSignalPos1 = ui->comboSigpos1->currentText().toInt();
    m_nEogSignalPos2 = ui->comboSigpos2->currentText().toInt();
    m_nEventPos1 = ui->comboEvtpos1->currentText().toInt();
    m_nEventPos2 = ui->comboEvtpos2->currentText().toInt();
    m_nWearDetectionPos = ui->comboWearDetpos->currentText().toInt();
}

void NetReader::onCheckPortTimeOut()
{
    //定时检查串口
    checkPorts();
    if(m_nPortCount>0)
    {
        connectSerial();
    }
}

void NetReader::addMessageEDF(EOGPointPtr& dataPtr)
{
    m_mutexMsgEDF.lock();
    m_queueEOGPoint.append(dataPtr);
    m_mutexMsgEDF.unlock();
}

NetReader::EOGPointPtr NetReader::removeMessageEDF()
{
    m_mutexMsgEDF.lock();
    QSharedPointer<EOGPoint> msgPtr = 0;
    if (m_queueEOGPoint.size() > 0) msgPtr = m_queueEOGPoint.takeFirst();
    m_mutexMsgEDF.unlock();
    return msgPtr;
}

void NetReader::clearMessagesEDF()
{
    m_mutexMsgEDF.lock();
    m_queueEOGPoint.clear();
    m_mutexMsgEDF.unlock();
}

void NetReader::writeBlockEDFData()
{
    int tmpIndex = 0;
    QVector<double> dataBuf(m_nEdfWritingSampleFre);
    QVector<int> eventBuf(m_nEdfWritingSampleFre);

    while(tmpIndex < m_nEdfWritingSampleFre)
    {
        EOGPointPtr eogPtr = removeMessageEDF();
        dataBuf[tmpIndex] = eogPtr->data;
        eventBuf[tmpIndex] = eogPtr->event;
        tmpIndex++;
    }

    //两个通道的数据一定要按顺序写入
    //dataBuf 和 eventBuf使用的是QVector以保证存储空间的连续性
    m_pEdfWriter->edfWritePhysical(&dataBuf[0]);
    m_pEdfWriter->edfWriteDigital(&eventBuf[0]);
}
