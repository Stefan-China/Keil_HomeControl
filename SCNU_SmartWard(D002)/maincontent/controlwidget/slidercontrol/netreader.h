#ifndef NETREADER_H
#define NETREADER_H

#include <QFile>
#include <QDir>
#include <QDomDocument>
#include <QFileInfo>
#include <QTextStream>
#include <QDialog>
#include <QLineEdit>
#include <QThread>
#include <qtconcurrentrun.h>
//#include <QSerialPort>
//#include <QSerialPortInfo>
//#include "epochmanager.h"
//#include "eeggraph.h"
//#include "sockethandler.h"
//#include "edfwriter.h"
#include <QTimer>
namespace Ui {
class NetReader;
}

//ps20210119 一个点的数据
struct EOGPoint
{
    double data;
    int event;
    EOGPoint(double d, int evt) : data(d), event(evt) {}
};

class AmpMessage {
public:
    short idBegin;
    char  data[16];
    short idEnd;

    bool isValid() { return (idBegin == 0x0D0A) && (idEnd == 0x0A0D); }
};

class NetReader : public QDialog
{
    Q_OBJECT
public:
    typedef QSharedPointer<AmpMessage> AmpMsgPtr;
    typedef QSharedPointer<EOGPoint> EOGPointPtr;
    explicit NetReader(QWidget *parent = nullptr);
    ~NetReader();

 ///原始版本就有的///
    void addMessage(AmpMsgPtr& msgPtr);
    AmpMsgPtr removeMessage();
    void clearMessages();
    bool getData(char* data, int size);

    void addGyroscopeMessage(AmpMsgPtr& msgPtr);
    AmpMsgPtr removeGyroscopeMessage();
    void clearGyroscopeMessages();
    bool getGyroscopeData(char* data, int size);

    void outputEvent(int event);
    IOBuffer m_BufferRead;

    bool writeDate(char* data);
    //void saveXml();
    void closeSerial();

    bool startAcquisition();
    bool stopAcquisition();
    void checkPorts();
 ////**************///

    //新加的东西
    bool isConnected();
    bool isBTConnected() const{return m_bBTConnected;} //返回蓝牙是否连接
    void setEpochLen(int epochlen);
    Epoch* getEpoch();
    void clearEpochs();


    void setWearDetectable(bool);  //设置电极脱落可以或不可以被检测
    void connectSerial();

    void initEdfWriter(const QString& wavepath);  //初始化EDF写入操作，包括设置数字物理大小、采样频率等
    void closeEdfWriter();     //停止写

    void onErrorOccurred(QSerialPort::SerialPortError error);

    void firstCheckPort();

    void sharePlotData(double* &data);

    int getEnergy(); //返回电量

    //pos2020
    void addMessageEDF(QSharedPointer<EOGPoint>& dataPtr);
    EOGPointPtr removeMessageEDF();
    void clearMessagesEDF();
    void writeBlockEDFData();

protected:
    //void showStatus(QString strStatus);
    void showInstructions();
    void enableControls(bool bConnected);
    void worker();

protected:
    void write_data(QByteArray data);
    void write_data(char *data);

private slots:
    void on_btnConnect_clicked();
    void on_btnHide_clicked();
    void on_spinDuration_valueChanged(int arg1);
    void on_spinScale_valueChanged(int arg1);
    void onConnected();
    void onDisconnected();
    void onReceived(QByteArray data);

    void on_btnMarker_clicked();

    void on_btnApply_clicked();

    //20200111 ps
    void onCheckPortTimeOut();  //定时检查串口

public slots:
    void m_readread();

signals:
    void getEventNumber(int);
    void sendEEGDataNetReader(double, short int, double, short int, double, short int, double, short int, double, short int, double, short int);
    void wearingMistake();   //佩戴错误信号
    void connectSuccess();
    void connectedAgain();

private:
    Ui::NetReader *ui;

   ///*原始版本就有的东西*///
    QSerialPort *m_serialPort;

    //这些是一些旧的关于绘图的变量
    int m_nEvent;
    int m_nScale;
    int m_nDuration;
    float m_fScaleCoef;
    int m_msgCount;

    int m_nAllChannels;
    int m_nBlockPoints;
    int m_nTotalPoints;
    int* m_pRawData;
    bool m_bRunning;
    QFuture<void> m_WorkThread;
    //EEGGraph* m_pEEGGraph;   //原始版本通过这个类绘图

    QMutex m_mutexMsg;
    QMutex m_mutexReadSerailData;
    QLinkedList<AmpMsgPtr> m_queueMsg;
    QLinkedList<QString> dataSignal;
    QLinkedList<QString> dataEvent;
    static const int m_nMaxMsg = 1000;

    QMutex m_mutexGyroscopeMsg;
    QLinkedList<AmpMsgPtr> m_queueGyroscopeMsg;

    int m_nEpochLen;
    EpochManager m_EpochManager;

    ///**************************///

    //新加的东西
    bool bReconnect = false;  //设置一个标志，辅助重新连接时数据有效与否的判断

    bool bWearDetectable = true;  //电极脱落检测到一次后，要在信息对话框按下之后的规定时间内才再次检测

    int m_nEdfWritingSampleFre = 125;   //edf文件写入频率

    //以下变量存储ui上设置的结果，原是希望可以通过一个设置界面设置我们需要保存的波形通道数，数据的位置等，现在暂时没用起来
    int m_nEdfWritingChannels = 1;
    //这些数据的位置均要跟下位机对接才知道
    int m_nEogSignalPos1 = 0;    //第一个眼电数据在所有16个字节中的位置
    int m_nEogSignalPos2 = 4;      //第二个眼电数据在所有16个字节中的位置
    int m_nEventPos1 = 1;         //第一个标志的位置
    int m_nEventPos2 = 5;          //第二个标志的位置
    int m_nWearDetectionPos = 2;     //头环脱落反馈位置

    double m_nPlotData = 0;

    //对于写入EDF文件
    EdfWriter* m_pEdfWriter;
    bool m_bWriting;

    //ps20200111 新加 定时检查串口
    QTimer* m_timerFirstCheck;

    QTimer* m_timerCheckSerial;

    int m_nCheckPortTime = 5000; //5s检查一次
    int m_nPortCount = 0;
    bool m_bFirstCheck = true; //判断是不是第一次连接

    //ps2020另一种方式存储数据
    QMutex m_mutexMsgEDF;

    int m_nEnergy;
    bool m_bBTConnected = false;
    QLinkedList<EOGPointPtr> m_queueEOGPoint;
public:
    QVector<double> dataBuffer;
    QVector<double> eventBuffer;
};

#endif // NETREADER_H
