#ifndef WAVEWINDOW_H
#define WAVEWINDOW_H

#include <QMainWindow>
//#include "qcustomplot.h"
//#include "netreader.h"
#include<QTimerEvent>
#include<QEvent>

namespace Ui {
class WaveWindow;
}

enum UsingState           //三种使用方式，不记录（仅可视化波形）、记录、读取文件
{
    STATE_NOT_RECORD,
    STATE_RECORD,
    STATE_READ
};

class WaveWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WaveWindow(QWidget *parent = nullptr);
    ~WaveWindow();

    void setupRealtimeDataDemo(QCustomPlot *customPlot);

    void setupPlotEdf(QCustomPlot *customPlot);

    void showInfoAboutWearMistake();

    bool getGyroscopeData(char* data, int size);//获取陀螺仪数据

    Epoch* getEpoch();

    void outputEvent(int event);    //间接通过netreader打标

    void startRecord(QString wavePath); //开启记录，wavePath为路径

    void stopRecord();    //停止记录

    int getEnergy() const;   //获取netreader中的电量

    bool isSerialConnected() const;   //串口是否已经连接

    bool isBTConnected() const;      //蓝牙是否已经连接

    int m_battery=6;                        //电池的默认电量（空）
    UsingState m_stateUsing = STATE_NOT_RECORD;   //脱落标志

private slots:
    void realtimeDataSlot();

    void on_action_Netreader_triggered();

    void on_action_Add_Event_triggered();

    void on_action_Start_Acquisition_triggered();

    void on_action_Stop_Acquisition_triggered();

    void on_action_Open_triggered();

    void on_action_Record_triggered();

    void on_action_Clear_triggered();

    void dealWearMistakeTimer();

    void plotEvent(double key, int evtNumber);  //绘制标记

protected:
    //检测USB插入拔出事件
    //bool nativeEvent(const QByteArray &eventType, void *message, long *result);
    void timerEvent(QTimerEvent* e);        //（李）定时器

signals:
    void signal_send_energy(int dl); //（李）给mainwindow发送电量
    void sendEEGDataWaveWindow(double data1, short int event1, double data2, short int event2, double data3, short int event3, double data4, short int event4, double data5, short int event5, double data6, short int event6);

public slots:
    void dealEvent(int);  //接收netreader发来的标志并绘制

    void dealWearMistake();  //对电极脱落信号进行处理

    void dealConnectSuccess();

    void dealTestMarking(int); //处理来自markingtester的打标信号

     void transmitEEGData(double data1, short int event1, double data2, short int event2, double data3, short int event3, double data4, short int event4, double data5, short int event5, double data6, short int event6);

private slots:
    void horzScrollBarChanged(int value);
    //void vertScrollBarChanged(int value);
    void xAxisChanged(QCPRange range);
    //void yAxisChanged(QCPRange range);
    void on_action_Zoom_In_Vertical_triggered();
    void on_action_Zoom_Out_Vertical_triggered();
    void on_action_Zoom_Out_Horizontal_triggered();
    void on_action_Zoom_In_Horizontal_triggered();

private:
    Ui::WaveWindow *ui;

    QTimer *m_timerData;



    int m_nEventNumber=0;   //接收来自m_pNetReader发来的标

    QTime m_time;

    MarkingTester* m_pMarkingTester;  //测试打标窗口


    int m_timer_ID_0;                       //（李）设置定时器

    double m_nLastPointKey=0;
    double m_nRangeRight = 8;

    QTimer *m_timerDetect;   //检测电极脱落定时器

    double m_nRightBound; //显示波形时坐标上界

    double* m_nPlotData;

    NetReader* m_pNetReader;

    QString m_strEdfWritePath;
};

#endif // WAVEWINDOW_H
