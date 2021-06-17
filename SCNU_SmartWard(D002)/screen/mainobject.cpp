/*****************************************
 * 作者: YYC
 * 日期: 2021-01-07
 * 功能：初始化类
 * ***************************************/
#include "mainobject.h"
#include "mainwindow.h"
#include "splashscreen.h"
#include <QDebug>


MainObject::MainObject(QObject *parent) :
    QObject(parent)
{
}

MainObject::~MainObject()
{
    delete m_mainWindow;
}

void MainObject::setInit()
{
    SplashScreen::getInstance()->setStagePercent(0,tr("初始化应用程序 ..."));  //加载页面
    SplashScreen::getInstance()->setStagePercent(40, tr("初始化主界面 ..."));
    SplashScreen::getInstance()->setStagePercent(80, tr("加载界面 ..."));
    SplashScreen::getInstance()->setStagePercent(100, tr("加载完毕！"));
    SplashScreen::getInstance()->setFinish();
    m_mainWindow = new MainWindow();
    m_mainWindow->setWindowTitle(tr("SCNU-Ward"));
    m_mainWindow->showNormal();
}


