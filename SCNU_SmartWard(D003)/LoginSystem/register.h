#pragma execution_character_set("utf-8")
#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include<QEvent>
#include<QCloseEvent>
#include<QPainter>
#include<QGraphicsDropShadowEffect>
#include<QtMath>
#include<QPixmap>
#include<QBitmap>
#include<QMouseEvent>
#include<QTimer>
#include<QRegExp>
#include<QRegExpValidator>
#include<QDebug>
#include"../Sign/sign_algorithm.h"
//#include"../../EnDecrypt/des_ecb.h"
#include"upload_data.h"

#include"httphelper.h"
#include"jrpcclient.h"
#include"util.h"

#include"system_keyboard.h"

using namespace JsonRPC;

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();

    //鼠标拖动窗口
    QPoint drag_point;

    //鼠标左键是否按下的标志
    bool pressed;

    //定义定时器对象
    QTimer *timer01;
    QTimer *timer02;

    //定义一个倒计时数
    int  count_downNUM;

    //定义一个正则表达式
    QRegExp rx;

    //定义一个加解密工具对象
    //DES_ECB EnDecryptTool;

    //定义一个签名工具对象
    Sign_algorithm SignTool;

    //4.25+ 弹键盘用
    int flag = 1;

//3.20+
    HttpHelper*     m_pHttpClient = nullptr;
    JRPCClient*     m_pJRPCClient = nullptr;

    QFrame *frame;                            //绘制阴影
    QGraphicsDropShadowEffect *shadow_effect; //绘制阴影

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    virtual void keyPressEvent(QKeyEvent* event);
    void closeEvent(QCloseEvent *event);

    //bool eventFilter(QObject *obj, QEvent *event);//事件过滤器,处理label的点击操作
    //开启一次倒计时
    void count_down();
    void count_down2();//密码可视
    //延时函数
    void Sleep(int msec);
signals:
    void Show_login();
public slots:
    void Register_clicked();//立即注册按钮槽函数
    void Getcode_clicked();//获取验证码槽函数
    void CheckAccountNum();//账号输入完成之后对账号进行检测
//3.20+
    void onResultReady(Value& , int);
    void onResultError(int, QString, Value&, int);
    void onError(int code, QString message);
    void onSent(long);
//高4.17+
    void on_clicked();//点击输入框之后出发弹出键盘的信号 4.25+
    void on_focusout();//输入框失去到焦点之后自动关闭系统键盘
private:
    Ui::Register *ui;
    std::string key;
    QMap<QString, QString>  map_sign;
};

#endif // REGISTER_H
