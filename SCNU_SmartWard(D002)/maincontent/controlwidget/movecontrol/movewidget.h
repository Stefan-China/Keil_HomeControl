/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：可移动按钮窗口
 * ***************************************/
#ifndef MOVEWIDGET_H
#define MOVEWIDGET_H

#include <QWidget>
#include<AliyunConnector/AliyunSamrtWardConnector.h>
#include "bci_tcp/tcpserver.h"

class FlowLayout;
namespace Ui {
class MoveWidget;
}
extern short int bcidata;
extern float attention;
extern short int off_flag;

struct CloudData
{

    //按钮信息
    int LightSwitch;
    int WaterSwitch;
    int WindowSwitch;
    int AirSwitch;
    int TVSwitch;
    int NurseSwitch;
    int DoctorSwitch;
    int CanteenSwitch;
    int WorkSwitch;
    int SOSSwitch;
    int WardDoorSwitch;
    int FamilySwitch;

    bool dataAvilabel = false;
};

class MoveWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MoveWidget(QWidget *parent = 0);
    ~MoveWidget();

public:
    TCPServer* m_pServer;
private:
    Ui::MoveWidget *ui;
    FlowLayout *flowLayout;

    void initValue();
    void Onclicked_bci(short int select);
private:
    const QString IMAGE_PATH = ":/res/res/image/image.png";
    struct CloudData cloudData;
    AliyunSamrtWardConnector connector;  // 连接aliyun智慧病房的类
    QJsonArray deviceList; //存放云端获取的设备信息

public slots:

    void freshCloudData();
    void onReceived(IOContext* pContext);
    void Onclicked_Mouse();
signals:
    void signal_send_button(short int dd);

    void signal_send_energy(short int dl);




};

#endif // MOVEWIDGET_H
