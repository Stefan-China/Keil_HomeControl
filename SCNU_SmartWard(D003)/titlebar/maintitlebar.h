/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：主标题栏，内含有窗体最大化，最小化，关闭
 * 以及窗口的Title，以及名称
 * ***************************************/
#ifndef MAINTITLEBAR_H
#define MAINTITLEBAR_H

#include <QWidget>
#include "titlebar/titlebar.h"
#include "maincontent/controlwidget/progresscontrol/progresswidget.h"
#include "maincontent/controlwidget/movecontrol/movewidget.h"
#include "maincontent/controlwidget/slidercontrol/sliderwidget.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDesktopServices>
#include <QList>
#include <QMessageBox>
namespace Ui {
class MainTitleBar;
}

class MainTitleBar : public TitleBar
{
    Q_OBJECT

public:
    explicit MainTitleBar(QWidget *parent = 0);
    ~MainTitleBar();
private slots:
    void on_pushButtonClose_clicked();
    void on_pushButtonMin_clicked();
    void on_pushButtonNormalMax_clicked();


public slots:
    void button(short int i_data);  //发送蓝牙指令
    void slot_mainwindow_battery(int e);    //电量变化后设置标题栏的槽函数
    void slot_mainwindow_handbattery(double e);    //电量变化后设置标题栏的槽函数
    void recvMsg();


private:
    Ui::MainTitleBar *ui;
    QSerialPort *serialPort;
    
protected:
    void findPorts();
    bool initSerialPort();
    void sendMsg(const QString &msg);
    void flushText();




    
};

#endif // MAINTITLEBAR_H
