#pragma execution_character_set("utf-8")
#ifndef FORGETPASSWORD_1_H
#define FORGETPASSWORD_1_H

#include <QWidget>
#include<QTimer>
#include<QRegExp>
#include<QRegExpValidator>
#include<QEvent>
#include<QPainter>
#include<QGraphicsDropShadowEffect>
#include<QtMath>
#include<QPixmap>
#include<QBitmap>
#include<QMouseEvent>
#include<QCloseEvent>
#include<QHttpMultiPart>
#include<QHttpPart>
#include"upload_data.h"
#include"../Sign/sign_algorithm.h"
#include"httphelper.h"
#include"jrpcclient.h"
#include"util.h"
//#include"system_keyboard.h"

#include <QString>
#include "Windows.h"
#include "WinUser.h"
#include <tlhelp32.h>
#include <string.h>
#include "TlHelp32.h"
#include "winbase.h"
#include <QDebug>
#include <QLineEdit>

using namespace JsonRPC;

namespace Ui {
class ForgetPassword_1;
}

class ForgetPassword_1 : public QWidget
{
    Q_OBJECT

public:
    explicit ForgetPassword_1(QWidget *parent = 0);
    ~ForgetPassword_1();
protected:
    //定义定时器对象
    QTimer *timer03;
    QTimer *timer04;


    //定义一个倒计时数
    int  count_downNUM;

    //定义一个正则表达式
    QRegExp rx;

    //定义一个加解密工具对象
    //DES_ECB EnDecryptTool;

    //定义一个签名工具对象
    Sign_algorithm SignTool;

    //加密的密钥
    std::string key;

    //事件过滤器,处理label的点击操作
    //bool eventFilter(QObject *obj, QEvent *event);

    //窗口关闭事件
    void closeEvent(QCloseEvent *event);

    //开启倒计时
    void count_down();
    void count_down1();

    //延时函数
    void Sleep(int msec);

    //鼠标拖动窗口
    QPoint drag_point;

    //鼠标左键是否按下的标志
    bool pressed;

    //4.25+ 弹键盘用
    int flag = 1;

    //3.20+
    HttpHelper*     m_pHttpClient = nullptr;
    JRPCClient*     m_pJRPCClient = nullptr;

    QFrame *frame;                            //绘制阴影
    QGraphicsDropShadowEffect *shadow_effect; //绘制阴影

    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    virtual void keyPressEvent(QKeyEvent* event);
public slots:
    void check_phoneNum();
    void Submit();//提交按钮槽函数
    void Getcode_clicked();//获取验证码槽函数

    void onResultReady(Value&, int);
    void onResultError(int, QString, Value&, int);
    void onError(int code, QString message);
    void onSent(long);
//高4.17+
    void on_focusout();//输入框失去到焦点之后自动关闭系统键盘
    void on_clicked();//点击输入框之后出发弹出键盘的信号 4.25+

private:
    Ui::ForgetPassword_1 *ui;
    QMap<QString, QString>  map_sign;

signals:
    void Toshow_login();
};

#endif // FORGETPASSWORD_1_H
