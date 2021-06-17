/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：可移动按钮窗口
 * ***************************************/
#include "movewidget.h"
#include "ui_movewidget.h"
#include "bci_tcp/protocol.h"
#include <QDebug>
#include "flowlayout/flowlayout.h"
#pragma execution_character_set("utf-8")
short int battery_flag=0;

short int bcidata;
float attention;
short int off_flag=0;
MoveWidget::MoveWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MoveWidget)
{
    ui->setupUi(this);
    this->initValue();
    //bind clicked() with slot
    connect(ui->LightSwitch,SIGNAL(clicked()),this,SLOT(Onclicked_Mouse()));
    connect(ui->WardDoorSwitch,SIGNAL(clicked()),this,SLOT(Onclicked_Mouse()));
    connect(ui->WaterSwitch,SIGNAL(clicked()),this,SLOT(Onclicked_Mouse()));
    connect(ui->WindowSwitch,SIGNAL(clicked()),this,SLOT(Onclicked_Mouse()));
    connect(ui->AirSwitch,SIGNAL(clicked()),this,SLOT(Onclicked_Mouse()));
    connect(ui->TVSwitch,SIGNAL(clicked()),this,SLOT(Onclicked_Mouse()));
    connect(ui->FamilySwitch,SIGNAL(clicked()),this,SLOT(Onclicked_Mouse()));
    connect(ui->WorkSwitch,SIGNAL(clicked()),this,SLOT(Onclicked_Mouse()));
    connect(ui->DoctorSwitch,SIGNAL(clicked()),this,SLOT(Onclicked_Mouse()));
    connect(ui->NurseSwitch,SIGNAL(clicked()),this,SLOT(Onclicked_Mouse()));
    connect(ui->CanteenSwitch,SIGNAL(clicked()),this,SLOT(Onclicked_Mouse()));
    connect(ui->SOSSwitch,SIGNAL(clicked()),this,SLOT(Onclicked_Mouse()));

    m_pServer=new TCPServer();
    m_pServer->onSetup(UI_SOCKET_PORT);
    connect(m_pServer, SIGNAL(dataReceived(IOContext*)), this, SLOT(onReceived(IOContext*)));

}


MoveWidget::~MoveWidget()
{
    delete ui;
}

void MoveWidget::initValue()
{
   QTimer* myTimer = new QTimer(this);
    myTimer->setInterval(10000);
    myTimer->start();

   connect(myTimer, SIGNAL(timeout()), this, SLOT(freshCloudData()));
}


void MoveWidget::Onclicked_Mouse()
{
    QPushButton* btn = dynamic_cast<QPushButton*>(sender());	//get the signal sender
    QString identifer = btn->objectName();  //marked which button is selected

    qDebug()<<"按键控制:"<<identifer;

    freshCloudData();
    //tranlate the user action to related button attribute
    bool isSucceed = false;
    if(!QString::compare(identifer,"LightSwitch")){
        isSucceed = connector.setDataToAliyun(identifer,!cloudData.LightSwitch);
    }else if(!QString::compare(identifer,"WardDoorSwitch")){
        isSucceed = connector.setDataToAliyun(identifer,!cloudData.WardDoorSwitch);
    }else if(!QString::compare(identifer,"WaterSwitch")){
        isSucceed = connector.setDataToAliyun(identifer,!cloudData.WaterSwitch);
    }else if(!QString::compare(identifer,"WindowSwitch")){
        isSucceed = connector.setDataToAliyun(identifer,!cloudData.WindowSwitch);
    }else if(!QString::compare(identifer,"AirSwitch")){
        isSucceed = connector.setDataToAliyun(identifer,!cloudData.AirSwitch);
    }else if(!QString::compare(identifer,"TVSwitch")){
        isSucceed = connector.setDataToAliyun(identifer,!cloudData.TVSwitch);
    }else if(!QString::compare(identifer,"FamilySwitch")){
        isSucceed = connector.setDataToAliyun(identifer,!cloudData.FamilySwitch);
    }else if(!QString::compare(identifer,"WorkSwitch")){
        isSucceed = connector.setDataToAliyun(identifer,!cloudData.WorkSwitch);
    }else if(!QString::compare(identifer,"DoctorSwitch")){
        isSucceed = connector.setDataToAliyun(identifer,!cloudData.DoctorSwitch);
    }else if(!QString::compare(identifer,"NurseSwitch")){
        isSucceed = connector.setDataToAliyun(identifer,!cloudData.NurseSwitch);
    }else if(!QString::compare(identifer,"CanteenSwitch")){
        isSucceed = connector.setDataToAliyun(identifer,!cloudData.CanteenSwitch);
    }else if(!QString::compare(identifer,"SOSSwitch")){
        isSucceed = connector.setDataToAliyun(identifer,!cloudData.SOSSwitch);
    }else{
        ;
    }

    if(isSucceed){
        qDebug()<<"set succeed!";
        isSucceed = false;
    }


}

//将云端的数据刷入到界面中
void MoveWidget::freshCloudData()
{

    qDebug()<<"云端控制监测";
    battery_flag=1;
    deviceList = connector.getDataFromAliyun();
    for(int i = 0; i<deviceList.size(); i++){
        QJsonObject device = deviceList.at(i).toObject();
        if(!device.isEmpty()){
            QString deviceName =  device.value("attribute").toString();

            cloudData.dataAvilabel = true;
            if(!QString::compare(deviceName,"LightSwitch")){
                cloudData.LightSwitch = device.value("value").toInt();
                if(cloudData.LightSwitch==1){
                    ui->light->setPixmap(QPixmap ("./res/Baidu_JS/LOGO_COLOR/电灯.png"));
                }else{
                    ui->light->setPixmap(QPixmap("./res/Baidu_JS/LOGO_BLACK/电灯.png"));
                }
            }else if(!QString::compare(deviceName,"WaterSwitch")){
                cloudData.WaterSwitch = device.value("value").toInt();
                if(cloudData.WaterSwitch==1){
                    ui->water->setPixmap(QPixmap ("./res/Baidu_JS/LOGO_COLOR/Water.png"));
                }else{
                    ui->water->setPixmap(QPixmap("./res/Baidu_JS/LOGO_BLACK/Water.png"));
                }
            }else if(!QString::compare(deviceName,"WindowSwitch")){
                cloudData.WindowSwitch = device.value("value").toInt();
                if(cloudData.WindowSwitch==1){
                    ui->window->setPixmap(QPixmap ("./res/Baidu_JS/LOGO_COLOR/窗户-开.png"));
                }else{
                    ui->window->setPixmap(QPixmap("./res/Baidu_JS/LOGO_BLACK/窗户-开.png"));
                }
            }else if(!QString::compare(deviceName,"AirSwitch")){
                cloudData.AirSwitch = device.value("value").toInt();
                if(cloudData.AirSwitch==1){
                    ui->air->setPixmap(QPixmap ("./res/Baidu_JS/LOGO_COLOR/空调.png"));
                }else{
                    ui->air->setPixmap(QPixmap("./res/Baidu_JS/LOGO_BLACK/空调.png"));
                }
            }else if(!QString::compare(deviceName,"TVSwitch")){
                cloudData.TVSwitch = device.value("value").toInt();
                if(cloudData.TVSwitch==1){
                    ui->tv->setPixmap(QPixmap ("./res/Baidu_JS/LOGO_COLOR/电视.png"));
                }else{
                    ui->tv->setPixmap(QPixmap("./res/Baidu_JS/LOGO_BLACK/电视.png"));
                }
            }else if(!QString::compare(deviceName,"NurseSwitch")){
                cloudData.NurseSwitch = device.value("value").toInt();
                if(cloudData.NurseSwitch==1){
                    ui->nurse->setPixmap(QPixmap ("./res/Baidu_JS/LOGO_COLOR/护士.png"));
                }else{
                    ui->nurse->setPixmap(QPixmap("./res/Baidu_JS/LOGO_BLACK/护士.png"));
                }
            }else if(!QString::compare(deviceName,"DoctorSwitch")){
                cloudData.DoctorSwitch = device.value("value").toInt();
                if(cloudData.DoctorSwitch==1){
                    ui->doctor->setPixmap(QPixmap ("./res/Baidu_JS/LOGO_COLOR/医生.png"));
                }else{
                    ui->doctor->setPixmap(QPixmap("./res/Baidu_JS/LOGO_BLACK/医生.png"));
                }
            }else if(!QString::compare(deviceName,"CanteenSwitch")){
                cloudData.CanteenSwitch = device.value("value").toInt();
                if(cloudData.CanteenSwitch==1){
                    ui->canteen->setPixmap(QPixmap ("./res/Baidu_JS/LOGO_COLOR/食堂-01.png"));
                }else{
                    ui->canteen->setPixmap(QPixmap("./res/Baidu_JS/LOGO_BLACK/食堂-01.png"));
                }
            }else if(!QString::compare(deviceName,"WorkSwitch")){
                cloudData.WorkSwitch = device.value("value").toInt();
                if(cloudData.WorkSwitch==1){
                    ui->work->setPixmap(QPixmap ("./res/Baidu_JS/LOGO_COLOR/人工.png"));
                }else{
                    ui->work->setPixmap(QPixmap("./res/Baidu_JS/LOGO_BLACK/人工.png"));
                }
            }else if(!QString::compare(deviceName,"SOSSwitch")){
                cloudData.SOSSwitch = device.value("value").toInt();
                if(cloudData.SOSSwitch==1){
                    ui->sos->setPixmap(QPixmap ("./res/Baidu_JS/LOGO_COLOR/sos.png"));
                }else{
                    ui->sos->setPixmap(QPixmap("./res/Baidu_JS/LOGO_BLACK/sos.png"));
                }
            }else if(!QString::compare(deviceName,"WardDoorSwitch")){
                cloudData.WardDoorSwitch = device.value("value").toInt();
                if(cloudData.WardDoorSwitch==1){
                    ui->door->setPixmap(QPixmap ("./res/Baidu_JS/LOGO_COLOR/门锁.png"));
                }else{
                    ui->door->setPixmap(QPixmap("./res/Baidu_JS/LOGO_BLACK/门锁.png"));
                }
            }else if(!QString::compare(deviceName,"FamilySwitch")){
                cloudData.FamilySwitch = device.value("value").toInt();
                if(cloudData.FamilySwitch==1){
                    ui->family->setPixmap(QPixmap ("./res/Baidu_JS/LOGO_COLOR/家属.png"));
                }else{
                    ui->family->setPixmap(QPixmap("./res/Baidu_JS/LOGO_BLACK/家属.png"));
                }
            }else{
                ;
            }
        }
    }
}
void MoveWidget::onReceived(IOContext* pContext)
{
    IOBuffer* pBuffer = pContext->m_pBuffer;
    UICommand cmd;
    QString aa;
    if (pBuffer->length() >= sizeof(UICommand)) {
        pBuffer->read((char*)&cmd, sizeof(UICommand));


      //  qDebug()<<sizeof(UICommand)<<pBuffer->length();
//        qDebug()<<"data1"<<cmd.data1<<"data2"<<cmd.data2<<"data3"<<cmd.data3<<"data4"<<cmd.data4<<"data5"<<cmd.data5<<"data6"<<cmd.data6;
//        qDebug()<<"event1"<<cmd.event1<<"event2"<<cmd.event2<<"event3"<<cmd.event3<<"event4"<<cmd.event4<<"event5"<<cmd.event5<<"event6"<<cmd.event6;
//       qDebug()<<"y"<<cmd.content3<<"x"<<cmd.content4<<"attention"<<cmd.content5<<"select_button"<<cmd.content6<<"battery"<<cmd.battery<<"flag"<<cmd.head_flag;
        pContext->m_pBuffer->clear();
        if(cmd.content6 != 0)
        {
            Onclicked_bci(cmd.content6);

        }
        bcidata=(cmd.data1+cmd.data2+cmd.data3+cmd.data4+cmd.data5+cmd.data6)/6;
        attention=cmd.content5;
        if(battery_flag==1){
           emit signal_send_energy(cmd.battery);
           battery_flag=0;
        }

    }
}
void MoveWidget::Onclicked_bci(short int select)
{
    QString identifer;
    if(off_flag==1)
    {
        emit signal_send_button(select);
        qDebug()<<"脑环离线控制:"<<identifer;

    }else
    {   freshCloudData();

        if(select==1){
           identifer = "LightSwitch";
        }else if(select==2){
            identifer = "WardDoorSwitch";
        }else if(select==3){
            identifer = "WaterSwitch";
        }else if(select==4){
            identifer = "WindowSwitch";
        }else if(select==5){
            identifer = "AirSwitch";
        }else if(select==6){
            identifer = "TVSwitch";
        }else if(select==7){
            identifer = "FamilySwitch";
        }else if(select==8){
            identifer = "NurseSwitch";
        }else if(select==9){
            identifer = "DoctorSwitch";
        }else if(select==10){
            identifer = "WorkSwitch";
        }else if(select==11){
             identifer = "CanteenSwitch";
        }else if(select==12){
            identifer = "SOSSwitch";
        }
        qDebug()<<"脑环在线控制:"<<identifer;
        bool isSucceed = false;
        if(!QString::compare(identifer,"LightSwitch")){
            isSucceed = connector.setDataToAliyun(identifer,!cloudData.LightSwitch);
        }else if(!QString::compare(identifer,"WardDoorSwitch")){
            isSucceed = connector.setDataToAliyun(identifer,!cloudData.WardDoorSwitch);
        }else if(!QString::compare(identifer,"WaterSwitch")){
            isSucceed = connector.setDataToAliyun(identifer,!cloudData.WaterSwitch);
        }else if(!QString::compare(identifer,"WindowSwitch")){
            isSucceed = connector.setDataToAliyun(identifer,!cloudData.WindowSwitch);
        }else if(!QString::compare(identifer,"AirSwitch")){
            isSucceed = connector.setDataToAliyun(identifer,!cloudData.AirSwitch);
        }else if(!QString::compare(identifer,"TVSwitch")){
            isSucceed = connector.setDataToAliyun(identifer,!cloudData.TVSwitch);
        }else if(!QString::compare(identifer,"FamilySwitch")){
            isSucceed = connector.setDataToAliyun(identifer,!cloudData.FamilySwitch);
        }else if(!QString::compare(identifer,"WorkSwitch")){
            isSucceed = connector.setDataToAliyun(identifer,!cloudData.WorkSwitch);
        }else if(!QString::compare(identifer,"DoctorSwitch")){
            isSucceed = connector.setDataToAliyun(identifer,!cloudData.DoctorSwitch);
        }else if(!QString::compare(identifer,"NurseSwitch")){
            isSucceed = connector.setDataToAliyun(identifer,!cloudData.NurseSwitch);
        }else if(!QString::compare(identifer,"CanteenSwitch")){
            isSucceed = connector.setDataToAliyun(identifer,!cloudData.CanteenSwitch);
        }else if(!QString::compare(identifer,"SOSSwitch")){
            isSucceed = connector.setDataToAliyun(identifer,!cloudData.SOSSwitch);
        }else{
            ;
        }
        if(isSucceed){
            qDebug()<<"set succeed!";
            isSucceed = false;
        }

    }





}
