#pragma execution_character_set("utf-8")
#ifndef LOGIN_REGISTER_H
#define LOGIN_REGISTER_H

#include <QWidget>
#include<QApplication>
#include<QMouseEvent>
#include<QDesktopServices>
#include<QRegExp>
#include<QValidator>
#include<QEvent>
#include<QPainter>
#include<QPaintEvent>
#include<QPixmap>
#include<QBitmap>
#include<QColor>
#include<QPoint>
#include<QMouseEvent>
#include<QSettings>
#include<QDir>
#include<QDebug>
#include<QTime>
#include<QProcess>
#include"forgetpassword_1.h"
#include"register.h"
#include"database.h"
//#include"mainwindow.h"

#include "screen/mainobject.h"
#include <globaldef.hpp>
namespace Ui {
class Login_Register;
}

class Login_Register : public QWidget
{
    Q_OBJECT

public:
    explicit Login_Register(QWidget *parent = 0);
    ~Login_Register();

    //3.20+
        HttpHelper*     m_pHttpClient = nullptr;
        JRPCClient*     m_pJRPCClient = nullptr;

    QFrame *frame;                            //绘制阴影
    QGraphicsDropShadowEffect *shadow_effect; //绘制阴影

    //定义一个忘记密码界面类的对象
    ForgetPassword_1 *m_ForgetPW;

    //定义一个注册界面类的对象
    Register *m_Register;

    //定义一个注册类正则表达式对象用于检测账号的输入格式是否正确
    QRegExp rx;

    //定义一个APP主界面对象
   // MainWindow *m_MW=NULL;

    //定义一个输入法对象
//    frmInput2018 *frminput;

    //定义一个悬浮窗对象             （高+ 2020.3.2）
//5.29    IWantToInput *hoverWindow=NULL;

    //鼠标拖动窗口
    QPoint drag_point;

    //鼠标左键是否按下的标志
    bool pressed;

    //定义一个加解密工具对象
    //DES_ECB EnDecryptTool;

    //定义一个签名工具对象
    Sign_algorithm SignTool;

    //数据库对象
    DataBase databs;

    //一个记录用户信息的临时的表(表里面存储的值包括:用户的登录状态、用户的昵称、用户的头像、用户的账号)
    QMap<QString,QString> map_userInfo;

    //一个记录账号和“下次自动登录”状态的setting
    QSettings *setting;

    //6.19+
    QProcess cmd;

    //4.25+ 弹键盘用
    int flag = 1;

    //6.23记录登录状态
    int Login_state;//0为在线登录，1为离线登录

    void hideMainWindow();

    void CheckAutoLogin();

    //6.23检查该用户是否在本地有已生成的文件夹，有则跳过，无则新建
    void Check_UserDir(QString);
protected:
    //事件过滤器,处理label的点击操作
    bool eventFilter(QObject *obj, QEvent *event);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    virtual void keyPressEvent(QKeyEvent* event);
    //延时函数
    void Sleep(int msec);

    void auto_login();

    //6.19+
    bool ping_server(const QString ip);
    //6.19+
    void offline_login();
    //6.19+
    void offline_login_auto();
signals:
protected slots:
    void GoToOfficialWeb();//打开官网
    void Be_Mini();//最小化窗口
    void Be_Close();//关闭窗口
    void Login();//登录
    void ReLogin();//改完密码之后需要重新登录
    void ReLogin1();//退出登录(注销)之后需要重新登录
    void Delete_HoverWindow();//MainWindow窗口关闭之后，需要重新登录，重新登录之前需要随之释放新建的键盘对象

    //3.20+
        void onResultReady(Value& , int);
        void onResultError(int, QString, Value&, int);
        void onError(int code, QString message);
        void onSent(long);

        void remove_account(QString account);//高+4.20下拉框
//高4.17+
        void on_clicked();//点击输入框之后出发弹出键盘的信号 4.25+
        void on_focusin();
        void on_focusout();//输入框失去到焦点之后自动关闭系统键盘
private:
    Ui::Login_Register *ui;
    std::string key;
    QMap<QString, QString>  map_sign;
};

#endif // LOGIN_REGISTER_H
