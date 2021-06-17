/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：进度条窗口
 * ***************************************/
#include "progresswidget.h"
#include "ui_progresswidget.h"
#include "hand_recieve/handrecieve.h"
// 构造函数
ProgressWidget::ProgressWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProgressWidget)
{
    ui->setupUi(this);
    qDebug()<<"ProgressWidget";
    this->initValue();
}

// 析构函数
ProgressWidget::~ProgressWidget()
{
    delete ui;
}

// 初始化数据
void ProgressWidget::initValue()
{
    QTimer *myTimer = new QTimer(this);
    myTimer->setInterval(10000);
    myTimer->start();
    connect(myTimer, SIGNAL(timeout()), this, SLOT(updateProgress()));
}

// 更新进度条
void ProgressWidget::updateProgress()
{
    handRecieve *recieve=new handRecieve;
    recieve->Server_Recieve();
    ui->Heartbeat->setText(QString::number(recieve->ui_Heartbeat, 'f', 2));
    ui->Diastolic->setText(QString::number(recieve->ui_Shrink, 'f', 2)+"/"+QString::number(recieve->ui_Diastolic, 'f', 2));
    ui->temperature->setText(QString::number(recieve->ui_Bodytemperature, 'f', 2)+"/"+QString::number(recieve->ui_Wristtemperature, 'f', 2));
    ui->Steps->setText(QString::number(recieve->ui_Steps, 'f', 2));

    ui->Heartbeat_2->setText(QString::number(recieve->ui_Heartbeat, 'f', 2));
    ui->Diastolic_2->setText(QString::number(recieve->ui_Shrink, 'f', 2)+"/"+QString::number(recieve->ui_Diastolic, 'f', 2));
    ui->temperature_2->setText(QString::number(recieve->ui_Bodytemperature, 'f', 2)+"/"+QString::number(recieve->ui_Wristtemperature, 'f', 2));
    ui->Steps_2->setText(QString::number(recieve->ui_Steps, 'f', 2));

    ui->Heartbeat_3->setText(QString::number(recieve->ui_Heartbeat, 'f', 2));
    ui->Diastolic_3->setText(QString::number(recieve->ui_Shrink, 'f', 2)+"/"+QString::number(recieve->ui_Diastolic, 'f', 2));
    ui->temperature_3->setText(QString::number(recieve->ui_Bodytemperature, 'f', 2)+"/"+QString::number(recieve->ui_Wristtemperature, 'f', 2));
    ui->Steps_3->setText(QString::number(recieve->ui_Steps, 'f', 2));

    ui->Heartbeat_4->setText(QString::number(recieve->ui_Heartbeat, 'f', 2));
    ui->Diastolic_4->setText(QString::number(recieve->ui_Shrink, 'f', 2)+"/"+QString::number(recieve->ui_Diastolic, 'f', 2));
    ui->temperature_4->setText(QString::number(recieve->ui_Bodytemperature, 'f', 2)+"/"+QString::number(recieve->ui_Wristtemperature, 'f', 2));
    ui->Steps_4->setText(QString::number(recieve->ui_Steps, 'f', 2));
    emit signal_send_handbattery(recieve->ui_Battery);
    delete recieve;
}
