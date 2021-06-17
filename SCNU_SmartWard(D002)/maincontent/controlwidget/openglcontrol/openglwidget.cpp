#include "openglwidget.h"
#include "ui_openglwidget.h"
#pragma execution_character_set("utf-8")
OpenglWidget::OpenglWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OpenglWidget)
{
    ui->setupUi(this);
    qDebug()<<"ProgressWidget";
    this->initValue();
     ui->widget->page()->load(QUrl("http://tan1024.top:8020/getimg"));
     ui->widget_2->page()->load(QUrl("http://tan1024.top:8020/getimg"));
     ui->widget_3->page()->load(QUrl("http://tan1024.top:8020/getimg"));
     ui->widget_4->page()->load(QUrl("http://tan1024.top:8020/getimg"));

}

OpenglWidget::~OpenglWidget()
{
    delete ui;
}
// 初始化数据
void OpenglWidget::initValue()
{
    QTimer *myTimer = new QTimer(this);
    myTimer->setInterval(3000);
    myTimer->start();
    connect(myTimer, SIGNAL(timeout()), this, SLOT(updateProgress()));
}

// 更新进度条
void OpenglWidget::updateProgress()
{
    qDebug()<<"情绪监测";
    int flag=0;
    ui->widget->page()->load(QUrl("http://tan1024.top:8020/getimg"));
    ui->widget_2->page()->load(QUrl("http://tan1024.top:8020/getimg"));
    ui->widget_3->page()->load(QUrl("http://tan1024.top:8020/getimg"));
    ui->widget_4->page()->load(QUrl("http://tan1024.top:8020/getimg"));
    handRecieve *recieve=new handRecieve;
    recieve->Emotion_Server_Recieve();
    ui->happy->setValue(ceil(recieve->happiness));
    ui->neutral->setValue(ceil(recieve->neutral));
    ui->surprise->setValue(ceil(recieve->surprise));
    ui->sadness->setValue(ceil(recieve->sadness));
    ui->disgust->setValue(ceil(recieve->disgust));
    ui->anger->setValue(ceil(recieve->anger));
    ui->fear->setValue(ceil(recieve->fear));

    double eomotion[7]={recieve->happiness,recieve->neutral,recieve->surprise,recieve->sadness,recieve->disgust,recieve->anger,recieve->fear};
    double max=eomotion[0];
    for (int i=1;i<7;i++)
        if(max>eomotion[i]){
            max=max;
        }else {
        max=eomotion[i];flag=i;
        }
     switch(flag)
        {
        case 0:ui->emotion_pix->setPixmap(QPixmap(":/res/res/image/emotion/高兴.png"));break;
        case 1:ui->emotion_pix->setPixmap(QPixmap(":/res/res/image/emotion/平静.png"));break;
        case 2:ui->emotion_pix->setPixmap(QPixmap(":/res/res/image/emotion/惊讶.png"));break;
        case 3:ui->emotion_pix->setPixmap(QPixmap(":/res/res/image/emotion/伤心.png"));break;
        case 4:ui->emotion_pix->setPixmap(QPixmap(":/res/res/image/emotion/厌恶.png"));break;
        case 5:ui->emotion_pix->setPixmap(QPixmap(":/res/res/image/emotion/愤怒.png"));break;
        case 6:ui->emotion_pix->setPixmap(QPixmap(":/res/res/image/emotion/恐惧.png"));break;
        }
    //patient 2
    ui->happy_2->setValue(ceil(recieve->happiness));
    ui->neutral_2->setValue(ceil(recieve->neutral));
    ui->surprise_2->setValue(ceil(recieve->surprise));
    ui->sadness_2->setValue(ceil(recieve->sadness));
    ui->disgust_2->setValue(ceil(recieve->disgust));
    ui->anger_2->setValue(ceil(recieve->anger));
    ui->fear_2->setValue(ceil(recieve->fear));

    double eomotion_2[7]={recieve->happiness,recieve->neutral,recieve->surprise,recieve->sadness,recieve->disgust,recieve->anger,recieve->fear};
    double max_2=eomotion_2[0];
    for (int i=1;i<7;i++)
        if(max_2>eomotion_2[i]){
            max_2=max_2;
        }else {
        max_2=eomotion_2[i];flag=i;
        }
     switch(flag)
        {
        case 0:ui->emotion_pix_2->setPixmap(QPixmap(":/res/res/image/emotion/高兴.png"));break;
        case 1:ui->emotion_pix_2->setPixmap(QPixmap(":/res/res/image/emotion/平静.png"));break;
        case 2:ui->emotion_pix_2->setPixmap(QPixmap(":/res/res/image/emotion/惊讶.png"));break;
        case 3:ui->emotion_pix_2->setPixmap(QPixmap(":/res/res/image/emotion/伤心.png"));break;
        case 4:ui->emotion_pix_2->setPixmap(QPixmap(":/res/res/image/emotion/厌恶.png"));break;
        case 5:ui->emotion_pix_2->setPixmap(QPixmap(":/res/res/image/emotion/愤怒.png"));break;
        case 6:ui->emotion_pix_2->setPixmap(QPixmap(":/res/res/image/emotion/恐惧.png"));break;
        }
    ui->happy_3->setValue(ceil(recieve->happiness));
    ui->neutral_3->setValue(ceil(recieve->neutral));
    ui->surprise_3->setValue(ceil(recieve->surprise));
    ui->sadness_3->setValue(ceil(recieve->sadness));
    ui->disgust_3->setValue(ceil(recieve->disgust));
    ui->anger_3->setValue(ceil(recieve->anger));
    ui->fear_3->setValue(ceil(recieve->fear));


    double eomotion_3[7]={recieve->happiness,recieve->neutral,recieve->surprise,recieve->sadness,recieve->disgust,recieve->anger,recieve->fear};
    double max_3=eomotion_3[0];
    for (int i=1;i<7;i++)
        if(max_3>eomotion_3[i]){
            max_3=max_3;
        }else {
        max_3=eomotion_3[i];flag=i;
        }
     switch(flag)
        {
        case 0:ui->emotion_pix_3->setPixmap(QPixmap(":/res/res/image/emotion/高兴.png"));break;
        case 1:ui->emotion_pix_3->setPixmap(QPixmap(":/res/res/image/emotion/平静.png"));break;
        case 2:ui->emotion_pix_3->setPixmap(QPixmap(":/res/res/image/emotion/惊讶.png"));break;
        case 3:ui->emotion_pix_3->setPixmap(QPixmap(":/res/res/image/emotion/伤心.png"));break;
        case 4:ui->emotion_pix_3->setPixmap(QPixmap(":/res/res/image/emotion/厌恶.png"));break;
        case 5:ui->emotion_pix_3->setPixmap(QPixmap(":/res/res/image/emotion/愤怒.png"));break;
        case 6:ui->emotion_pix_3->setPixmap(QPixmap(":/res/res/image/emotion/恐惧.png"));break;
        }
    ui->happy_4->setValue(ceil(recieve->happiness));
    ui->neutral_4->setValue(ceil(recieve->neutral));
    ui->surprise_4->setValue(ceil(recieve->surprise));
    ui->sadness_4->setValue(ceil(recieve->sadness));
    ui->disgust_4->setValue(ceil(recieve->disgust));
    ui->anger_4->setValue(ceil(recieve->anger));
    ui->fear_4->setValue(ceil(recieve->fear));


    double eomotion_4[7]={recieve->happiness,recieve->neutral,recieve->surprise,recieve->sadness,recieve->disgust,recieve->anger,recieve->fear};
    double max_4=eomotion_4[0];
    for (int i=1;i<7;i++)
        if(max_4>eomotion_4[i]){
            max_4=max_4;
        }else {
        max_4=eomotion_4[i];flag=i;
        }
     switch(flag)
        {
        case 0:ui->emotion_pix_4->setPixmap(QPixmap(":/res/res/image/emotion/高兴.png"));break;
        case 1:ui->emotion_pix_4->setPixmap(QPixmap(":/res/res/image/emotion/平静.png"));break;
        case 2:ui->emotion_pix_4->setPixmap(QPixmap(":/res/res/image/emotion/惊讶.png"));break;
        case 3:ui->emotion_pix_4->setPixmap(QPixmap(":/res/res/image/emotion/伤心.png"));break;
        case 4:ui->emotion_pix_4->setPixmap(QPixmap(":/res/res/image/emotion/厌恶.png"));break;
        case 5:ui->emotion_pix_4->setPixmap(QPixmap(":/res/res/image/emotion/愤怒.png"));break;
        case 6:ui->emotion_pix_4->setPixmap(QPixmap(":/res/res/image/emotion/恐惧.png"));break;
        }


    delete recieve;
}
