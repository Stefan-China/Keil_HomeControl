/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：主标题栏，内含有窗体最大化，最小化，关闭
 * 以及窗口的Title，以及名称
 * ***************************************/
#include "maintitlebar.h"
#include "ui_maintitlebar.h"

MainTitleBar::MainTitleBar(QWidget *parent) :
    TitleBar(parent),
    ui(new Ui::MainTitleBar)
{
    ui->setupUi(this);
    ui->pushButtonNormalMax->setStyleSheet("QPushButton{border-image: url(:/res/res/image/normal_normal.png);}"
                                           "QPushButton:hover{border-image: url(:/res/res/image/normal_hover.png);}");
    serialPort = new QSerialPort();
    findPorts();
    // open port
    connect(ui->openPort, &QCheckBox::toggled, [=](bool checked){
       if (checked == true) {
           initSerialPort();
           off_flag=1;
           ui->bluetooth->setPixmap(QPixmap (":/res/res/image/bluetooth/bluetooth_on.png"));
           serialPort->write("z\n");//蓝牙连接
       }else {
           off_flag=0;
          this->serialPort->close();
          ui->bluetooth->setPixmap(QPixmap (":/res/res/image/bluetooth/bluetooth_off.png"));
          serialPort->write("y\n");//蓝牙断开
       }
    });

    // recv
    connect(serialPort, SIGNAL(readyRead()), this, SLOT(recvMsg()));

    //connect headbattery
    MoveWidget *m_MoveWidget= new MoveWidget();

    connect(m_MoveWidget,&MoveWidget::signal_send_button,this,&MainTitleBar::button);

    connect(m_MoveWidget,&MoveWidget::signal_send_energy,this,&MainTitleBar::slot_mainwindow_battery);
    ui->headbattery->setPixmap(QPixmap (":/res/res/image/HEAD/OUT_BAT.png"));
    //connect handbattery
    ProgressWidget *recieve=new ProgressWidget();
    connect(recieve,&ProgressWidget::signal_send_handbattery,this,&MainTitleBar::slot_mainwindow_handbattery);
    ui->handbattery->setPixmap(QPixmap(":/res/res/image/HAND/OUT_BAT.png"));

}

void MainTitleBar::button( short int i_data)
{
    qDebug()<<i_data;
    switch (i_data)
    {
    case 1:serialPort->write("1\n");break;
    case 2:serialPort->write("2\n");break;
    case 3:serialPort->write("3\n");break;
    case 4:serialPort->write("4\n");break;
    case 5:serialPort->write("5\n");break;
    case 6:serialPort->write("6\n");break;
    case 7:serialPort->write("7\n");break;
    case 8:serialPort->write("8\n");break;
    case 9:serialPort->write("9\n");break;
    case 10:serialPort->write("a\n");break;
    case 11:serialPort->write("b\n");break;
    case 12:serialPort->write("c\n");break;

    }


}
void MainTitleBar::slot_mainwindow_battery(int e)    //电量变化后设置标题栏的槽函数
{

    switch (e) {
    case 5:     //FULL_BAT(满电)
        ui->headbattery->setPixmap(QPixmap(":/res/res/image/HEAD/FULL_BAT.png"));
        break;
    case 4:     //HIGH_BAT(多电)
        ui->headbattery->setPixmap(QPixmap(":/res/res/image/HEAD/HIGH_BAT.png"));
        break;
    case 3:     //MID_BAT(中电)
        ui->headbattery->setPixmap(QPixmap(":/res/res/image/HEAD/MID_BAT.png"));
         break;
    case 2:     //LOW_BAT(少电)
        ui->headbattery->setPixmap(QPixmap(":/res/res/image/HEAD/LOW_BAT.png"));
        break;
    case 1:     //EMP_BAT(没电)
        ui->headbattery->setPixmap(QPixmap(":/res/res/image/HEAD/OUT_BAT.png"));
        break;
    case 0:     //CON_OFF(掉线)
        ui->headbattery->setPixmap(QPixmap(":/res/res/image/HEAD/OUT_BAT.png"));
        break;
    default:
        break;

    }
}


void MainTitleBar::slot_mainwindow_handbattery(double e)    //手環电量变化后设置标题栏的槽函数  没用到
{
    int handdata=int(e/20);
    switch (handdata) {
    case 5:     //FULL_BAT(满电)
        ui->handbattery->setPixmap(QPixmap(":/res/res/image/HAND/FULL_BAT.png"));
        break;
    case 4:     //HIGH_BAT(多电)
        ui->handbattery->setPixmap(QPixmap(":/res/res/image/HAND/HIGH_BAT.png"));
        break;
    case 3:     //MID_BAT(中电)
        ui->handbattery->setPixmap(QPixmap(":/res/res/image/HAND/MID_BAT.png"));
         break;
    case 2:     //LOW_BAT(少电)
        ui->handbattery->setPixmap(QPixmap(":/res/res/image/HAND/LOW_BAT.png"));
        break;
    case 1:     //EMP_BAT(没电)
        ui->handbattery->setPixmap(QPixmap(":/res/res/image/HAND/OUT_BAT.png"));
        break;
    case 0:     //CON_OFF(掉线)
        ui->handbattery->setPixmap(QPixmap(":/res/res/image/HAND/OUT_BAT.png"));
        break;
    default:
        break;

    }
}
MainTitleBar::~MainTitleBar()
{
    delete ui;
}

void MainTitleBar::on_pushButtonClose_clicked()
{
    if(parentWidget)
    {
        parentWidget->close();
    }
}

void MainTitleBar::on_pushButtonMin_clicked()
{
    if(parentWidget)
    {
        parentWidget->showMinimized();
    }
}


void MainTitleBar::on_pushButtonNormalMax_clicked()
{
    if(parentWidget == nullptr) return;
    if (parentWidget->isMaximized())
    {
        parentWidget->showNormal();
        ui->pushButtonNormalMax->setStyleSheet("QPushButton{border-image: url(:/res/res/image/normal_normal.png);}"
                                               "QPushButton:hover{border-image: url(:/res/res/image/normal_hover.png);}");
    }
    else
    {
        parentWidget->showMaximized();
        ui->pushButtonNormalMax->setStyleSheet("QPushButton{border-image: url(:/res/res/image/max_normal.png);}"
                                               "QPushButton:hover{border-image: url(:/res/res/image/max_hover.png);}");
    }
}


/*寻找串口*/
void MainTitleBar::findPorts()
{
    QList<QSerialPortInfo> ports = QSerialPortInfo::availablePorts();
    int cnt = 0;
    for (int i = 0; i < ports.size(); ++i) {
        if (ports.at(i).isBusy()) continue;
        cnt++;
       ui->portName->addItem(ports.at(i).portName());
    }
    if (cnt == 0) {
        QMessageBox::warning(NULL, "Error", "Don't free port��");
    }
}
/*串口程序初始化，115200，8，无，1*/
bool MainTitleBar::initSerialPort()
{
    // port
    serialPort->setPortName(ui->portName->currentText());
    if (serialPort->open(QIODevice::ReadWrite) == false) {
        QMessageBox::warning(NULL, "error", "open failure");
        return false;
    }
    // baudRate
    serialPort->setBaudRate(115200);
    // dataBits
    serialPort->setDataBits(QSerialPort::Data8);
    // stopBits
    serialPort->setStopBits(QSerialPort::OneStop);
    // parityBits
    serialPort->setParity(QSerialPort::NoParity);
    return true;
}

void MainTitleBar::sendMsg(const QString &msg)
{
    // send char
    serialPort->write(QByteArray::fromHex(msg.toLatin1()));

}

void MainTitleBar::recvMsg()
{
    QByteArray msg = this->serialPort->readAll();
    qDebug() << "msg: " <<  msg;
    if (msg.isEmpty()) return;

}

