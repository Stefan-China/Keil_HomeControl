
/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：坐标系窗口
 * ***************************************/
#include "plotwidget.h"
#include "ui_plotwidget.h"
#pragma execution_character_set("utf-8")

PlotWidget::PlotWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlotWidget)
{
    ui->setupUi(this);
    this->initValue();
    this->initValue1();
}


PlotWidget::~PlotWidget()
{
    delete ui;
}

void PlotWidget::initValue()
{
    QTimer *myTimer = new QTimer(this);
    myTimer->setInterval(3000);
    myTimer->start();

   connect(myTimer, SIGNAL(timeout()), this, SLOT(freshCloudData()));
}

void PlotWidget::initValue1()
{
    const int MAX_YVALUE = 100;
    const int MAX_XVALUE = 1000;
    {
        CoorData coorData;
        for (int i = 0; i < MAX_XVALUE; i++)
        {
            coorData.dataX.append(i);
            int number = qrand() % MAX_YVALUE;
            coorData.dataY.append(number);
        }
        ui->widgetFirst->setControlData(coorData);
    }

    {
        CoorData coorData;
        for (int i = 0; i < MAX_XVALUE; i++)
        {
            coorData.dataX.append(i);
            int number = qrand() % MAX_YVALUE;
            coorData.dataY.append(number);
        }
        ui->widgetSecond->setControlData(coorData);
    }

    {
        CoorData coorData;
        for (int i = 0; i < MAX_XVALUE; i++)
        {
            coorData.dataX.append(i);
            int number = qrand() % MAX_YVALUE;
            coorData.dataY.append(number);
        }
        ui->widgetThird->setControlData(coorData);
    }

    {
        CoorData coorData;
        for (int i = 0; i < MAX_XVALUE; i++)
        {
            coorData.dataX.append(i);
            int number = qrand() % MAX_YVALUE;
            coorData.dataY.append(number);
        }
        ui->widgetFourth->setControlData(coorData);
    }
}
//将云端的数据刷入到界面中
void PlotWidget::freshCloudData(){
    qDebug()<<"环境监测";
    deviceList = connector.getDataFromAliyun();
    for(int i = 0; i<deviceList.size(); i++){
        QJsonObject device = deviceList.at(i).toObject();
        if(!device.isEmpty()){
            QString deviceName =  device.value("attribute").toString();
            cloudData2.dataAvilabel = true;

            if(!QString::compare(deviceName,"CO2")){
                cloudData2.CO2 = device.value("value").toDouble();
            }else if(!QString::compare(deviceName,"TVOC")){
                cloudData2.TVOC = device.value("value").toDouble();
            }else if(!QString::compare(deviceName,"HCHO")){
                cloudData2.HCHO = device.value("value").toDouble();
            }else if(!QString::compare(deviceName,"pm2.5")){
                cloudData2.pm25 = device.value("value").toDouble();
            }else if(!QString::compare(deviceName,"PM10")){
                cloudData2.PM10 = device.value("value").toDouble();
            }else if(!QString::compare(deviceName,"IndoorTemperature")){
                cloudData2.IndoorTemperature = device.value("value").toDouble();
            }else if(!QString::compare(deviceName,"CurrentHumidity")){
                cloudData2.CurrentHumidity = device.value("value").toDouble();
             }
        }
    }

    if(cloudData2.dataAvilabel){
        ui->HCHO->setText(QString::number(cloudData2.HCHO, 'f', 1)+" ug/m3");

        ui->TVOC->setText(QString::number(cloudData2.TVOC, 'f', 1)+" ug/m3");

        ui->CO2->setText(QString::number(cloudData2.CO2, 'f', 1)+" ppm");

        ui->pm25->setText(QString::number(cloudData2.pm25, 'f', 1)+" ug/m3");

        ui->PM10->setText(QString::number(cloudData2.PM10, 'f', 1)+" ug/m3");

        ui->IndoorTemperature->setText(QString::number(cloudData2.IndoorTemperature, 'f', 1)+" C");

        ui->CurrentHumidity->setText(QString::number(cloudData2.CurrentHumidity, 'f', 1)+" %");
    }
}
