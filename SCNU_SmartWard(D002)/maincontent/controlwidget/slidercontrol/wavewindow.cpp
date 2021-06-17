#include "wavewindow.h"
#include "ui_wavewindow.h"
#include <QDialog>
#include <QMessageBox>
#include <QFileDialog>


WaveWindow::WaveWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WaveWindow)
{
    ui->setupUi(this);



    m_pNetReader = new NetReader(this);

    connect(m_pNetReader,SIGNAL(getEventNumber(int)), this, SLOT(dealEvent(int)));  //达标处理
    connect(m_pNetReader,SIGNAL(wearingMistake()), this, SLOT(dealWearMistake()));  //检测电极有无脱落
    connect(m_pNetReader,SIGNAL(connectSuccess()), this, SLOT(dealConnectSuccess()));  //检测串口有没有插入
    connect(m_pNetReader,&NetReader::sendEEGDataNetReader,this, &WaveWindow::transmitEEGData);  //TCP发送数据 4.6 蔡
    ui->action_Stop_Acquisition->setEnabled(false);
    setupRealtimeDataDemo(ui->customPlot);

    m_timerData = new QTimer(this);
    connect(m_timerData, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));

    m_timerDetect = new QTimer(this);
    connect(m_timerDetect, SIGNAL(timeout()), this, SLOT(dealWearMistakeTimer()));//要隔几秒钟才能再次提示佩戴出错


    //显示波形时的滑动条设置
     connect(ui->horizontalScrollBar, SIGNAL(valueChanged(int)), this, SLOT(horzScrollBarChanged(int)));
     //connect(ui->verticalScrollBar, SIGNAL(valueChanged(int)), this, SLOT(vertScrollBarChanged(int)));
     connect(ui->customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(xAxisChanged(QCPRange)));
     ui->horizontalScrollBar->setEnabled(false);
     ui->customPlot->replot();


     //构造函数开启定时器，传输电量信号（李_04_11）
     m_timer_ID_0 = startTimer(10);   //首次定时100ms后更新电量
}

WaveWindow::~WaveWindow()
{
    delete ui;
}

void WaveWindow::transmitEEGData(double data1, short int event1, double data2, short int event2, double data3, short int event3, double data4, short int event4, double data5, short int event5, double data6, short int event6)
{
    emit sendEEGDataWaveWindow(data1, event1, data2, event2, data3, event3, data4, event4, data5, event5, data6, event6);
}

void WaveWindow::setupRealtimeDataDemo(QCustomPlot *customPlot)  //case 10
{
  // include this section to fully disable antialiasing for higher performance:
  /*
  customPlot->setNotAntialiasedElements(QCP::aeAll);
  QFont font;
  font.setStyleStrategy(QFont::NoAntialias);
  customPlot->xAxis->setTickLabelFont(font);
  customPlot->yAxis->setTickLabelFont(font);
  customPlot->legend->setFont(font);
  */

  QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
  timeTicker->setTimeFormat("%h:%m:%s");
  customPlot->xAxis->setTicker(timeTicker);
  ui->customPlot->xAxis->setRange(0, 8, Qt::AlignLeft);

  customPlot->axisRect()->setupFullAxesBox();
  customPlot->yAxis->setRange(-10, 600);
  customPlot->yAxis->setLabel("mV");
  //customPlot->yAxis->setLabelColor(Qt::blue);
  customPlot->yAxis->setLabelFont(QFont(("Arial"),12));

  //背景颜色
  QLinearGradient axisRectGradient;
  axisRectGradient.setStart(0, 0);
  axisRectGradient.setFinalStop(0, 350);
  axisRectGradient.setColorAt(0, QColor(40, 80, 80));
  axisRectGradient.setColorAt(1, QColor(30, 30, 30));
  customPlot->axisRect()->setBackground(axisRectGradient);

  // Allow user to drag axis ranges with mouse, zoom with mouse wheel and select graphs by clicking:
  //加入这个可以让曲线能够沿y轴方向拖动
  //customPlot->axisRect()->setRangeZoom( Qt::Vertical); //
  //customPlot->setInteractions(QCP::iRangeZoom | QCP::iSelectPlottables); //QCP::iRangeDrag
}

void WaveWindow::realtimeDataSlot()
{
  QVector<double> key(1);
  key[0]= m_time.elapsed()/1000.0; // time elapsed since start of demo, in seconds
  QVector<double> y(1);
  //y[0]=getFirstSerialData();
  y[0]=*m_nPlotData;
  //qDebug()<<"key为"<<key;
  //static double lastPointKey = 0;
  if (key[0]-m_nLastPointKey > 0.002) // at most add point every 2 ms
  {

     ui->customPlot->graph(0)->data()->remove(m_nLastPointKey+0.00001,key[0]);
     ui->customPlot->graph(0)->addData(key, y);
      //ui->customPlot->graph(0)->setData(key,getFirstSerialData(),false);

     //打标
    if(m_nEventNumber!=0)
    {
        plotEvent(key[0],m_nEventNumber);
        m_nEventNumber=0; //复位回0
    }

    m_nLastPointKey = key[0];
  }

  // make key axis range scroll with the data (at a constant range size of 8):
  //static double rangeRight = 8;
  if(key[0]>=m_nRangeRight)
  {
      m_time=QTime::currentTime();
      m_nLastPointKey=0;
       ui->customPlot->clearItems();  //清除标
  }

    ui->customPlot->replot();
}

void WaveWindow::on_action_Netreader_triggered()
{
    m_pNetReader->checkPorts();
    m_pNetReader->show();
}

void WaveWindow::on_action_Add_Event_triggered()
{
    m_pMarkingTester->show();  //ps
}

void WaveWindow::on_action_Start_Acquisition_triggered()
{
    //清除掉原来的
    int plottableCount = ui->customPlot->plottableCount();
         if (plottableCount != 0)
              ui->customPlot->clearPlottables();
    ui->customPlot->clearItems();

    ui->action_Start_Acquisition->setIcon(QIcon(":/image/images/icons8-pause-button-64.png"));
    //ui->action_Record->setEnabled(false);
    ui->action_Start_Acquisition->setEnabled(false);
    ui->action_Stop_Acquisition->setEnabled(true);
    ui->action_Clear->setEnabled(false);
    ui->horizontalScrollBar->setEnabled(false);  //只有读波形时滑动条才使用

    ui->customPlot->legend->setVisible(true);
    ui->customPlot->legend->setFont(QFont("Helvetica",9));
     ui->customPlot->xAxis->setRange(0, 8, Qt::AlignLeft);
    ui->customPlot->replot();
    //graph = ui->customPlot->addGraph();
    ui->customPlot->addGraph();
    QPen pen;
    pen.setWidth(1);
    pen.setColor(QColor(40, 110, 255));
    ui->customPlot->graph(0)->setName("EOG");
    ui->customPlot->graph(0)->setPen(pen);

    ui->customPlot->axisRect()->setRangeZoom( Qt::Vertical); //
    ui->customPlot->axisRect()->setRangeDrag( Qt::Vertical);
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);//

    //重新设置时间轴显示相关的变量
    m_time=QTime::currentTime();
    m_nLastPointKey=0;
    m_nRangeRight = 8;

    //与netReader共享数据
    m_pNetReader->sharePlotData(m_nPlotData);


    m_timerData->start(30); // Interval 0 means to refresh as fast as possible
}

void WaveWindow::on_action_Stop_Acquisition_triggered()
{
    if(m_stateUsing==STATE_RECORD)
    {
        m_pNetReader->closeEdfWriter();
        ui->statusBar->clearMessage();
        ui->statusBar->showMessage(QString::fromLocal8Bit("已保存至 ")+QString(m_strEdfWritePath));  //显示保存成功与否
        m_stateUsing=STATE_NOT_RECORD; //回到默认的无记录状态
    }

    if(m_timerData->isActive())
    {
        m_timerData->stop();
    }

    ui->action_Record->setEnabled(true);
    ui->action_Stop_Acquisition->setEnabled(false);
    ui->action_Clear->setEnabled(true);
    ui->action_Start_Acquisition->setEnabled(true);
    ui->action_Start_Acquisition->setIcon(QIcon(":/image/images/icons8-play-64.png"));
}

void WaveWindow::on_action_Open_triggered()
{
    setupPlotEdf(ui->customPlot);   
}

void WaveWindow::showInfoAboutWearMistake()   //显示佩戴错误信息对话框
{
   int buttonPress = QMessageBox::information(this,"Tips",QString::fromLocal8Bit("请正确佩戴头环！"),QMessageBox::Ok);
   if(buttonPress==QMessageBox::Ok)
   {
       //qDebug()<<"按下OK";
       m_timerDetect->start(5000); //按下OK键5秒后才使netreader可以再次检测
   }
}


bool WaveWindow::getGyroscopeData(char *data, int size)
{
    return m_pNetReader->getGyroscopeData(data,size);
}

Epoch *WaveWindow::getEpoch()
{
    return m_pNetReader->getEpoch();
}

void WaveWindow::outputEvent(int event)
{
    m_pNetReader->outputEvent(event);
}

void WaveWindow::startRecord(QString wavepath)
{
    if(wavepath.isEmpty()==true)
    {
        return;
    }
    m_strEdfWritePath = wavepath;
    m_pNetReader->initEdfWriter(m_strEdfWritePath);
    m_stateUsing=STATE_RECORD;
}

//停止记录
void WaveWindow::stopRecord()
{
    on_action_Stop_Acquisition_triggered();
    qDebug()<<"stop recording";
}

int WaveWindow::getEnergy() const
{
    return m_pNetReader->getEnergy();
}

//串口是否已连接
bool WaveWindow::isSerialConnected() const
{
    return m_pNetReader->isConnected();
}

//蓝牙是否已经连接
bool WaveWindow::isBTConnected() const
{
    return m_pNetReader->isBTConnected();
}

void WaveWindow::timerEvent(QTimerEvent* e)
{   //电池电量是数值 1-5  标识最低和最高电量

    if(m_timer_ID_0==e->timerId())
    {
        killTimer(m_timer_ID_0);    //关闭定时器
        m_battery=getEnergy();
        if(getEnergy()==1)
        {
            m_battery=1;
        }
        else if(getEnergy()==2)
        {
            m_battery=2;
        }
        else if(getEnergy()==3)
        {
            m_battery=3;
        }
        else if(getEnergy()==4){
            m_battery=4;
        }
        else if(getEnergy()==5){
            m_battery=5;
        }else
        {
            m_battery=1;
        }
        m_timer_ID_0=startTimer(10*1000);
        emit signal_send_energy(m_battery);   //屏蔽电量信号
        //qDebug()<<"_______wavewindow:363_______battery_______"<<endl;
    }
}

void WaveWindow::setupPlotEdf(QCustomPlot *customPlot)
{
    QString path=QFileDialog::getOpenFileName(
                this,
                "Open",
                "../",
                "*.edf");
    if(path.isEmpty()==true)
    {
        return;
    }


    on_action_Clear_triggered();

    ui->statusBar->showMessage(path);//状态栏显示打开了哪个文件
    ui->action_Record->setEnabled(false);
    ui->action_Start_Acquisition->setEnabled(false);
    ui->action_Add_Event->setEnabled(false);
    ui->action_Add_Event_2->setEnabled(false);

    m_stateUsing=STATE_READ;    //读取EDF文件模式

    EdfReader* pEdfReader=new EdfReader(this);  //临时新建就好
    if (pEdfReader->edfOpenFile(path) == false)
    {
        //如果打开出错就直接返回
        pEdfReader->closeFileHdl();
        delete pEdfReader;
        return;
    }

    customPlot->addGraph();
    customPlot->graph(0)->setName("EOG");
    ui->customPlot->xAxis->setRange(0, 8, Qt::AlignLeft);

    int sampleFre = pEdfReader->getSampleFrequency();
    //qDebug()<<"sampleFre:"<<sampleFre<<endl;

    double dataDistance=1/(double)sampleFre;  //绘制数据时x坐标的间距
    //qDebug()<<"dataDistance:"<<dataDistance;

    double *bufData=new double[sampleFre];    //确保大于或等于采样频率

    int n = pEdfReader->edfReadPhysicalSamples(0, sampleFre, bufData);


    //qDebug() << n << " data read";

    QVector<double> x(n), y(n); // initialize with entries 0..100

    double lastXPoint=0;
    while (n>0) {
       //先绘制数据
        for (int i=0; i<n; ++i)
        {
          x[i] = i*dataDistance+lastXPoint; //绘制的方式是一次次追加的形式
          y[i] = bufData[i];  //
        }
        //lastXPoint=x[n-1]+dataDistance;
        //qDebug()<<"lastXPoint为"<<lastXPoint;
        customPlot->graph(0)->addData(x, y);


         lastXPoint=x[n-1]+dataDistance;
         //qDebug()<<"lastXPoint为"<<lastXPoint;
        n = pEdfReader->edfReadPhysicalSamples(0,sampleFre,bufData);
    }

   //绘制标志
   int* bufEvent = new int[sampleFre];
   int m = pEdfReader->edfReadDigitalSamples(1, sampleFre, bufEvent);
   int block = 0;
   double eventKey;
   int eventNumber;
   while (m > 0)
   {
       for(int i=0;i<m;i++)
       {
           if(bufEvent[i]>0)
           {
                eventKey = block*sampleFre*dataDistance+i*dataDistance;
                //qDebug()<<"WaveWindow::setupPlotEdf bufEvent[i]"<<bufEvent[i];
                eventNumber = bufEvent[i];
                plotEvent(eventKey,eventNumber);
           }
       }
       block++;
       m = pEdfReader->edfReadDigitalSamples(1,sampleFre,bufEvent);
    }

   delete [] bufData;
   delete [] bufEvent;

    //
    ui->customPlot->legend->setVisible(true);
    ui->customPlot->legend->setFont(QFont("Helvetica",9));


    //设置滑动条
    m_nRightBound = pEdfReader->edfGetFileDuration(); //这里得到波形的上界，以秒为单位
    //+1的原因是让它可以显示到波形最右端再过一秒的距离，乘以100原因是与滑动条的步长相关
    int tmp = (m_nRightBound+1)*100;
    //ui->customPlot->axisRect()->setupFullAxesBox(true);
    ui->horizontalScrollBar->setRange(0, tmp);
    ui->horizontalScrollBar->setEnabled(true);  //只有读波形时滑动条才使用
    ui->customPlot->replot();


    // Allow user to drag axis ranges with mouse, zoom with mouse wheel and select graphs by clicking:
    //加入这个可以让曲线能够沿y轴方向拖动
    customPlot->axisRect()->setRangeZoom( Qt::Horizontal); //
    //customPlot->axisRect()->setRangeDrag( Qt::Horizontal);
    customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);//
	
    pEdfReader->closeFileHdl();
    delete pEdfReader;
}


void WaveWindow::on_action_Record_triggered()
{
    m_strEdfWritePath = QFileDialog::getSaveFileName(
                this,
                "Save as",
                "../",
                "*.edf");
    //qDebug()<<"WaveWindow::on_action_Record_triggered path=" << m_strEdfWritePath;
    if(m_strEdfWritePath.isEmpty()==true)
    {
        return;
    }
     m_pNetReader->initEdfWriter(m_strEdfWritePath);
     m_stateUsing=STATE_RECORD;
}


void WaveWindow::on_action_Clear_triggered()
{
    if(m_stateUsing == STATE_READ)
    {
        //m_pEdfReader->closeFileHdl();  //如果之前打开了文件，则要把文件关掉
        //delete m_pEdfReader;

        ui->action_Record->setEnabled(true);
        ui->action_Start_Acquisition->setEnabled(true);
        ui->action_Add_Event->setEnabled(true);
        ui->action_Add_Event_2->setEnabled(true);
    }

    m_stateUsing = STATE_NOT_RECORD;  //回到默认的状态
    ui->statusBar->clearMessage();


    //与上面removeGraph方式一样，打的标都是清不掉的
    int plottableCount = ui->customPlot->plottableCount();
     if (plottableCount != 0)
          ui->customPlot->clearPlottables();

    ui->customPlot->clearItems();  //这个才可以清除标
    ui->customPlot->replot();
}

void WaveWindow::dealWearMistakeTimer()
{
    m_pNetReader->setWearDetectable(true);
    m_timerDetect->stop();
}

void WaveWindow::plotEvent(double key, int evtNumber)   //绘制标
{
    QCPItemText *textLabel = new QCPItemText(ui->customPlot);
    //textLabel->setPositionAlignment(Qt::AlignTop|Qt::AlignHCenter);
    textLabel->position->setType(QCPItemPosition::ptPlotCoords);  //ptAxisRectRatio决定了下面setCoords用比例的方式设置坐标
    textLabel->position->setCoords(key, 10); // place position at center/top of axis rect
    textLabel->setText(QString::number(evtNumber));
    textLabel->setFont(QFont(font().family(), 16)); // make font a bit larger
    textLabel->setColor(Qt::red);
    //eventNumber=0; //复位回0
}

//bool WaveWindow::nativeEvent(const QByteArray &eventType, void *message, long *result)
//{
//    if (eventType == "windows_generic_MSG")
//    {

//        bool bResult = false;

//        MSG* msg = reinterpret_cast<MSG*>(message);

//        PDEV_BROADCAST_HDR lpdb = (PDEV_BROADCAST_HDR)msg->lParam;

//        if(msg->message == WM_DEVICECHANGE && msg->wParam >= DBT_DEVICEARRIVAL)
//        {
//            switch (msg->wParam)
//            {
//            case DBT_DEVICEARRIVAL:
//                qDebug()<<"USB inserted";
//                //m_pNetReader->checkPorts();
//                //m_pNetReader->connectSerial();
//                bResult = true;
//                break;

//            case DBT_DEVICEREMOVECOMPLETE:
//                qDebug()<<"USB pull out";
//                //on_action_Stop_Acquisition_triggered(); //先停止绘制波形
//                ui->statusBar->showMessage(QString("未连接"));
//                //m_pNetReader->closeSerial();
//               // m_pNetReader->stopAcquisition();
//                bResult = true;
//                break;

//            case DBT_DEVNODES_CHANGED:
//                qDebug()<<"USB111";
//                bResult = true;
//                break;

//            default:
//                qDebug()<<"USB222";
//                bResult = false;
//                break;
//            }
//        }

//        return bResult;
//    }
//    else
//    {
//        return QWidget::nativeEvent(eventType, message, result);
//    }
//}

void WaveWindow::dealEvent(int evt)
{
    m_nEventNumber=evt;
}

void WaveWindow::dealWearMistake()
{
    if(m_stateUsing==STATE_READ)    //在读EDF状态下不用出现电极脱落的信息
    {
        m_pNetReader->setWearDetectable(true);
        return;
    }
    showInfoAboutWearMistake();
}

void WaveWindow::dealConnectSuccess()
{
    ui->statusBar->showMessage(QString("已连接"));
    //qDebug()<<"serieal connected successfully";
}

void WaveWindow::dealTestMarking(int evtNum)
{
    m_pNetReader->outputEvent(evtNum);
}

//ScrollBar的设置
void WaveWindow::horzScrollBarChanged(int value)
{
  if (qAbs(ui->customPlot->xAxis->range().center()-value/100.0) > 0.01) // if user is dragging plot, we don't want to replot twice
  {
    ui->customPlot->xAxis->setRange(value/100.0, ui->customPlot->xAxis->range().size(), Qt::AlignLeft);
    ui->customPlot->replot();
  }
}

void WaveWindow::xAxisChanged(QCPRange range)
{
    //qDebug()<<"xAxisChanged"<<endl;

  //ui->horizontalScrollBar->setValue(qRound(range.center()*100.0)); // adjust position of scroll bar slider
  ui->horizontalScrollBar->setPageStep(qRound(range.size()*100.0)); // adjust size of scroll bar slider

  //ps
  double lowerBound = 0;
  double upperBound = m_nRightBound+1; // note: code assumes lowerBound < upperBound
  QCPRange fixedRange(range);
  if (fixedRange.lower < lowerBound)
  {
    fixedRange.lower = lowerBound;
    fixedRange.upper = lowerBound + range.size();
    if (fixedRange.upper > upperBound || qFuzzyCompare(range.size(), upperBound-lowerBound))
      fixedRange.upper = upperBound;
    ui->customPlot->xAxis->setRange(fixedRange); // adapt this line to use your plot/axis
  } else if (fixedRange.upper > upperBound)
  {
    fixedRange.upper = upperBound;
    fixedRange.lower = upperBound - range.size();
    if (fixedRange.lower < lowerBound || qFuzzyCompare(range.size(), upperBound-lowerBound))
      fixedRange.lower = lowerBound;
    ui->customPlot->xAxis->setRange(fixedRange); // adapt this line to use your plot/axis
  }
}


void WaveWindow::on_action_Zoom_In_Vertical_triggered()
{
    ui->customPlot->yAxis->scaleRange(.5, ui->customPlot->yAxis->range().center());
    ui->customPlot->replot();
}

void WaveWindow::on_action_Zoom_Out_Vertical_triggered()
{
    ui->customPlot->yAxis->scaleRange(2, ui->customPlot->yAxis->range().center());
    ui->customPlot->replot();
}

void WaveWindow::on_action_Zoom_In_Horizontal_triggered()
{
    ui->customPlot->xAxis->scaleRange(.5, ui->customPlot->xAxis->range().center());
    ui->customPlot->replot();
}

void WaveWindow::on_action_Zoom_Out_Horizontal_triggered()
{
    ui->customPlot->xAxis->scaleRange(2, ui->customPlot->xAxis->range().center());
    ui->customPlot->replot();
}


