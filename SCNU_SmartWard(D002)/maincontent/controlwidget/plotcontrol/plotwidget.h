/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：坐标系窗口
 * ***************************************/
#ifndef PLOTWIDGET_H
#define PLOTWIDGET_H

#include <QWidget>
#include<AliyunConnector/AliyunSamrtWardConnector.h>
namespace Ui {
class PlotWidget;
}


struct CloudData2
{
    //显示信息
    double HCHO;
    double TVOC;
    double CO2;
    double pm25;
    double PM10;
    double IndoorTemperature;
    double CurrentHumidity;


    bool dataAvilabel = false;
};

class PlotWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PlotWidget(QWidget *parent = 0);
    ~PlotWidget();

private:
    Ui::PlotWidget *ui;
    void initValue();
    void initValue1();

    struct CloudData2 cloudData2;
    AliyunSamrtWardConnector connector;  // 连接aliyun智慧病房的类
    QJsonArray deviceList; //存放云端获取的设备信息
private slots:
    void freshCloudData();
};

#endif // PLOTWIDGET_H
