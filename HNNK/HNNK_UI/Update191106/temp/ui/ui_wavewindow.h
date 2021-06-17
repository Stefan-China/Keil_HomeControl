/********************************************************************************
** Form generated from reading UI file 'wavewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAVEWINDOW_H
#define UI_WAVEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "../../qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_WaveWindow
{
public:
    QAction *action_Open;
    QAction *action_Save;
    QAction *action_Netreader;
    QAction *action_Add_Event;
    QAction *action_Add_Event_2;
    QAction *action_Start_Acquisition;
    QAction *action_Stop_Acquisition;
    QAction *action_Record;
    QAction *action_Clear;
    QAction *action_Zoom_In_Vertical;
    QAction *action_Zoom_Out_Vertical;
    QAction *action_Zoom_In_Horizontal;
    QAction *action_Zoom_Out_Horizontal;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QCustomPlot *customPlot;
    QScrollBar *horizontalScrollBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WaveWindow)
    {
        if (WaveWindow->objectName().isEmpty())
            WaveWindow->setObjectName(QStringLiteral("WaveWindow"));
        WaveWindow->resize(1116, 659);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/images/scutbci.png"), QSize(), QIcon::Normal, QIcon::Off);
        WaveWindow->setWindowIcon(icon);
        action_Open = new QAction(WaveWindow);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/images/icons8-opened-folder-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open->setIcon(icon1);
        action_Save = new QAction(WaveWindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/images/ic_save_black_24dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon2);
        action_Netreader = new QAction(WaveWindow);
        action_Netreader->setObjectName(QStringLiteral("action_Netreader"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/images/icons8-settings-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Netreader->setIcon(icon3);
        action_Add_Event = new QAction(WaveWindow);
        action_Add_Event->setObjectName(QStringLiteral("action_Add_Event"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/image/images/icons8-finish-flag-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Add_Event->setIcon(icon4);
        action_Add_Event_2 = new QAction(WaveWindow);
        action_Add_Event_2->setObjectName(QStringLiteral("action_Add_Event_2"));
        action_Add_Event_2->setIcon(icon4);
        action_Start_Acquisition = new QAction(WaveWindow);
        action_Start_Acquisition->setObjectName(QStringLiteral("action_Start_Acquisition"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/image/images/icons8-play-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Start_Acquisition->setIcon(icon5);
        action_Stop_Acquisition = new QAction(WaveWindow);
        action_Stop_Acquisition->setObjectName(QStringLiteral("action_Stop_Acquisition"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/image/images/icons8-stop-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Stop_Acquisition->setIcon(icon6);
        action_Record = new QAction(WaveWindow);
        action_Record->setObjectName(QStringLiteral("action_Record"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/image/images/icons8-record-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Record->setIcon(icon7);
        action_Clear = new QAction(WaveWindow);
        action_Clear->setObjectName(QStringLiteral("action_Clear"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/image/images/icons8-broom-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Clear->setIcon(icon8);
        action_Zoom_In_Vertical = new QAction(WaveWindow);
        action_Zoom_In_Vertical->setObjectName(QStringLiteral("action_Zoom_In_Vertical"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/image/images/ic_zoom_in_v_black_24dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Zoom_In_Vertical->setIcon(icon9);
        action_Zoom_Out_Vertical = new QAction(WaveWindow);
        action_Zoom_Out_Vertical->setObjectName(QStringLiteral("action_Zoom_Out_Vertical"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/image/images/ic_zoom_out_v_black_24dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Zoom_Out_Vertical->setIcon(icon10);
        action_Zoom_In_Horizontal = new QAction(WaveWindow);
        action_Zoom_In_Horizontal->setObjectName(QStringLiteral("action_Zoom_In_Horizontal"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/image/images/ic_zoom_in_h_black_24dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Zoom_In_Horizontal->setIcon(icon11);
        action_Zoom_Out_Horizontal = new QAction(WaveWindow);
        action_Zoom_Out_Horizontal->setObjectName(QStringLiteral("action_Zoom_Out_Horizontal"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/image/images/ic_zoom_out_h_black_24dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Zoom_Out_Horizontal->setIcon(icon12);
        centralWidget = new QWidget(WaveWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QStringLiteral("customPlot"));

        gridLayout->addWidget(customPlot, 0, 0, 1, 1);

        horizontalScrollBar = new QScrollBar(centralWidget);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalScrollBar, 1, 0, 1, 1);

        WaveWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WaveWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1116, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        WaveWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WaveWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WaveWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WaveWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WaveWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_Open);
        menu->addAction(action_Netreader);
        menu->addSeparator();
        mainToolBar->addAction(action_Open);
        mainToolBar->addAction(action_Netreader);
        mainToolBar->addAction(action_Add_Event);
        mainToolBar->addAction(action_Record);
        mainToolBar->addAction(action_Start_Acquisition);
        mainToolBar->addAction(action_Stop_Acquisition);
        mainToolBar->addAction(action_Clear);
        mainToolBar->addAction(action_Zoom_In_Vertical);
        mainToolBar->addAction(action_Zoom_Out_Vertical);
        mainToolBar->addAction(action_Zoom_In_Horizontal);
        mainToolBar->addAction(action_Zoom_Out_Horizontal);

        retranslateUi(WaveWindow);

        QMetaObject::connectSlotsByName(WaveWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WaveWindow)
    {
        WaveWindow->setWindowTitle(QApplication::translate("WaveWindow", "SCUTBCI", Q_NULLPTR));
        action_Open->setText(QApplication::translate("WaveWindow", "open", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_Open->setToolTip(QApplication::translate("WaveWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_Open->setShortcut(QApplication::translate("WaveWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Save->setText(QApplication::translate("WaveWindow", "save", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_Save->setToolTip(QApplication::translate("WaveWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_Save->setShortcut(QApplication::translate("WaveWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Netreader->setText(QApplication::translate("WaveWindow", "settins", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_Netreader->setToolTip(QApplication::translate("WaveWindow", "\350\277\236\346\216\245\344\270\262\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_Add_Event->setText(QApplication::translate("WaveWindow", "add event", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_Add_Event->setToolTip(QApplication::translate("WaveWindow", "\347\202\271\346\255\244\346\265\213\350\257\225\346\211\223\346\240\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_Add_Event_2->setText(QApplication::translate("WaveWindow", "add event", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_Add_Event_2->setToolTip(QApplication::translate("WaveWindow", "\346\226\260\345\212\240\346\240\207\350\256\2602", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_Start_Acquisition->setText(QApplication::translate("WaveWindow", "start_Acquisition", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_Start_Acquisition->setToolTip(QApplication::translate("WaveWindow", "\345\274\200\345\247\213", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_Stop_Acquisition->setText(QApplication::translate("WaveWindow", "stop_Acquisition", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_Stop_Acquisition->setToolTip(QApplication::translate("WaveWindow", "\345\201\234\346\255\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_Record->setText(QApplication::translate("WaveWindow", "start_Record", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_Record->setToolTip(QApplication::translate("WaveWindow", "\347\202\271\346\255\244\350\256\260\345\275\225\346\263\242\345\275\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_Clear->setText(QApplication::translate("WaveWindow", "clear", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_Clear->setToolTip(QApplication::translate("WaveWindow", "\346\270\205\351\231\244", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_Zoom_In_Vertical->setText(QApplication::translate("WaveWindow", "zoom in vertical", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_Zoom_In_Vertical->setToolTip(QApplication::translate("WaveWindow", "\345\236\202\347\233\264\346\224\276\345\244\247", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_Zoom_Out_Vertical->setText(QApplication::translate("WaveWindow", "zoom out vertical", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_Zoom_Out_Vertical->setToolTip(QApplication::translate("WaveWindow", "\345\236\202\347\233\264\347\274\251\345\260\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_Zoom_In_Horizontal->setText(QApplication::translate("WaveWindow", "zoom in horizontal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_Zoom_In_Horizontal->setToolTip(QApplication::translate("WaveWindow", "\346\260\264\345\271\263\346\224\276\345\244\247", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_Zoom_Out_Horizontal->setText(QApplication::translate("WaveWindow", "zoom out horizontal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_Zoom_Out_Horizontal->setToolTip(QApplication::translate("WaveWindow", "\346\260\264\345\271\263\347\274\251\345\260\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        menu->setTitle(QApplication::translate("WaveWindow", "\346\226\207\344\273\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WaveWindow: public Ui_WaveWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAVEWINDOW_H
