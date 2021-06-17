/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：表格窗口
 * ***************************************/
#include "tablewidget.h"
#include "ui_tablewidget.h"
#include"QDebug"
#pragma execution_character_set("utf-8")
// 构造函数
TableWidget::TableWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableWidget)
{
    ui->setupUi(this);
    qDebug()<<"TableWidget";
    this->initValue();
}

// 析构函数
TableWidget::~TableWidget()
{
    delete ui;
}

// 初始化数据
void TableWidget::initValue()
{
    QTimer *myTimer = new QTimer(this);
    myTimer->setInterval(10000);
    myTimer->start();
    connect(myTimer, SIGNAL(timeout()), this, SLOT(Progress()));

//    movie = new QMovie(":/res/res/image/transfuse/transfuse_gif.gif");
//    ui->SY_First->setMovie(movie);
//    movie->start();//开始播放
//    movie->setPaused(true);//播放
}

// 更新进度条
void TableWidget::Progress()
{
    qDebug()<<"输液器监测";
    handRecieve *recieve=new handRecieve;
    recieve->Emotion_Server_Recieve();
    recieve->Drop_Server_Recieve();
    if(recieve->connect_flag=="未连接")
    {
        ui->SY_First->setPixmap(QPixmap(":/res/res/image/transfuse/transfuse_2.png"));
    }else
    {
        if(recieve->state_flag=="未连接")
        {
            ui->SY_First->setPixmap(QPixmap(":/res/res/image/transfuse/no_connect.png"));
        }else
        {
             qDebug()<<"ss";
//            movie->setPaused(false);//播放
            ui->SY_First->setPixmap(QPixmap("./res/res/image/transfuse/transfuse_full.png"));
        }
       // ui->SY_First->setPixmap(QPixmap("./res/res/image/transfuse/transfuse_full.png"));
    }

    delete recieve;
}

void TableWidget::on_LightSwitch_clicked()
{
    //movie->setPaused(true);//播放
}

