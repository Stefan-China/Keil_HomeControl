/*****************************************
 * 作者: YYC
 * 日期: 2021-01-07
 * 功能：列表窗口，放置列表控件
 * ***************************************/
#include "listwidget.h"
#include "ui_listwidget.h"
#include "listcontrol.h"



ListWidget::ListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListWidget)
{
    ui->setupUi(this);
    qDebug()<<"ListWidget";
    //Baidu Map 1.31
    JSBridge = new bridge(this);
    QWebChannel *channel = new QWebChannel(this);
    channel->registerObject("window",(QObject*)JSBridge);
    ui->MapWidget->page()->setWebChannel(channel);
    ui->MapWidget->page()->load(QUrl("qrc:/res/Baidu_JS/BDMap.html"));
    ui->MapWidget_2->page()->load(QUrl("qrc:/res/Baidu_JS/BDMap.html"));
    ui->MapWidget_3->page()->load(QUrl("qrc:/res/Baidu_JS/BDMap.html"));
    ui->MapWidget_4->page()->load(QUrl("qrc:/res/Baidu_JS/BDMap.html"));
    this->initValue();
}


ListWidget::~ListWidget()
{
    delete ui;
}

// 初始化数据
void ListWidget::initValue()
{
     QTimer *myTimer = new QTimer(this);
    myTimer->setInterval(1000);
    myTimer->start();

   connect(myTimer, SIGNAL(timeout()), this, SLOT(updateProgress()));
}

// 更新进度条
void ListWidget::updateProgress()

{
    bool ok;
    handRecieve *recieve=new handRecieve;
    recieve->Server_Recieve();
    Map_sos(recieve->ui_Longtitude,recieve->ui_Latitude);  //地图区域sos
    recieve->ui_Longtitude =QString::number(recieve->ui_Longtitude.toDouble(&ok)+0.0066215, 'f', 8);
    recieve->ui_Latitude =QString::number(recieve->ui_Latitude.toDouble(&ok)+0.0062449, 'f', 8);
    ui->MapWidget->page()->runJavaScript(QString("SetPoint(%1,%2)").arg(recieve->ui_Longtitude).arg(recieve->ui_Latitude));
    ui->MapWidget_2->page()->runJavaScript(QString("SetPoint(%1,%2)").arg(recieve->ui_Longtitude).arg(recieve->ui_Latitude));
    ui->MapWidget_3->page()->runJavaScript(QString("SetPoint(%1,%2)").arg(recieve->ui_Longtitude).arg(recieve->ui_Latitude));
    ui->MapWidget_4->page()->runJavaScript(QString("SetPoint(%1,%2)").arg(recieve->ui_Longtitude).arg(recieve->ui_Latitude));
    delete recieve;
}
/***********************************************************************
函数名称：on_off_sos_map_clicked
函数作用：关闭区域限制
函数参数：无
返 回 值：无
函数作者：蔡旭刚
************************************************************************/

void ListWidget::on_off_sos_map_clicked()
{
    //监测是否是打开状态
    if(flag_map_sos==1)
    {
         ui->MapWidget->page()->runJavaScript(QString("removeOverlay()"));
         flag_map_sos=0;
    }
}

/***********************************************************************
函数名称：on_on_sos_map_clicked
函数作用：开启区域限制
函数参数：无
返 回 值：无
函数作者：蔡旭刚
************************************************************************/

void ListWidget::on_on_sos_map_clicked()
{
    bool ok;
    //监测是否是关闭状态
    if(flag_map_sos==0)
    {
        handRecieve *recieve1=new handRecieve;
        recieve1->Server_Recieve();
        lng_alarm=recieve1->ui_Longtitude.toDouble(&ok)+0.0066215;
        lat_alarm=recieve1->ui_Latitude.toDouble(&ok)+0.0062449;
        recieve1->ui_Longtitude =QString::number(lng_alarm, 'f', 8);
        recieve1->ui_Latitude =QString::number(lat_alarm, 'f', 8);
        ui->MapWidget->page()->runJavaScript(QString("drawCircle(%1,%2)").arg(recieve1->ui_Longtitude).arg(recieve1->ui_Latitude));
        delete recieve1;
        flag_map_sos=1;
    }
}
/***********************************************************************
函数名称：Map_sos
函数作用：检查是否再范围内，出范围预警
函数参数：百度API经纬度，lng1：经度  lat1：纬度
返 回 值：无
函数作者：蔡旭刚
************************************************************************/
void ListWidget::Map_sos(QString lng1,QString lat1)
{
    bool ok;
    double map_length;
    double a_lng=lng1.toDouble(&ok)+0.0066215-lng_alarm;
    double b_lat=lat1.toDouble(&ok)+0.0062449-lat_alarm;
    if(flag_map_sos==1)
    {
           map_length=sqrt(a_lng*a_lng+b_lat*b_lat);
           if(map_length<=300)
           {
               qDebug()<<map_length;
           }
    }
}




