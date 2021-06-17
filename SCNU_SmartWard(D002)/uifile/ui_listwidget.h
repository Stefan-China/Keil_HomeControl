/********************************************************************************
** Form generated from reading UI file 'listwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTWIDGET_H
#define UI_LISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qwebengineview.h"

QT_BEGIN_NAMESPACE

class Ui_ListWidget
{
public:
    QGridLayout *gridLayout;
    QFrame *frameBackground_3;
    QGridLayout *gridLayout_19;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_9;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_5;
    QLabel *labelImage_3;
    QGridLayout *gridLayout_10;
    QWebEngineView *MapWidget_3;
    QPushButton *on_sos_map_3;
    QPushButton *off_sos_map_3;
    QFrame *frameBackground;
    QGridLayout *gridLayout_18;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_4;
    QLabel *labelImage;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_12;
    QGridLayout *gridLayout_3;
    QWebEngineView *MapWidget;
    QPushButton *on_sos_map;
    QPushButton *off_sos_map;
    QFrame *frameBackground_4;
    QGridLayout *gridLayout_20;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_12;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QLabel *labelImage_4;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_10;
    QGridLayout *gridLayout_13;
    QWebEngineView *MapWidget_4;
    QPushButton *on_sos_map_4;
    QPushButton *off_sos_map_4;
    QFrame *frameBackground_2;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_6;
    QLabel *labelImage_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_11;
    QGridLayout *gridLayout_7;
    QWebEngineView *MapWidget_2;
    QPushButton *on_sos_map_2;
    QPushButton *off_sos_map_2;

    void setupUi(QWidget *ListWidget)
    {
        if (ListWidget->objectName().isEmpty())
            ListWidget->setObjectName(QStringLiteral("ListWidget"));
        ListWidget->resize(669, 469);
        ListWidget->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(ListWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frameBackground_3 = new QFrame(ListWidget);
        frameBackground_3->setObjectName(QStringLiteral("frameBackground_3"));
        frameBackground_3->setMinimumSize(QSize(320, 220));
        frameBackground_3->setStyleSheet(QStringLiteral(""));
        gridLayout_19 = new QGridLayout(frameBackground_3);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_9, 6, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_5, 2, 0, 1, 1);

        label_6 = new QLabel(frameBackground_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("font: 9pt \"Times New Roman\";\n"
"color: rgb(255, 170, 0);"));

        gridLayout_9->addWidget(label_6, 5, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_6, 4, 0, 1, 1);

        label_5 = new QLabel(frameBackground_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("font: 9pt \"Times New Roman\";\n"
"color: rgb(255, 170, 0);"));

        gridLayout_9->addWidget(label_5, 3, 0, 1, 1);

        labelImage_3 = new QLabel(frameBackground_3);
        labelImage_3->setObjectName(QStringLiteral("labelImage_3"));
        labelImage_3->setMinimumSize(QSize(36, 36));
        labelImage_3->setMaximumSize(QSize(36, 36));
        labelImage_3->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        labelImage_3->setScaledContents(true);

        gridLayout_9->addWidget(labelImage_3, 1, 0, 1, 1, Qt::AlignHCenter);


        gridLayout_8->addLayout(gridLayout_9, 0, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        MapWidget_3 = new QWebEngineView(frameBackground_3);
        MapWidget_3->setObjectName(QStringLiteral("MapWidget_3"));
        MapWidget_3->setMinimumSize(QSize(200, 170));
        MapWidget_3->setMaximumSize(QSize(16777215, 16777215));
        MapWidget_3->setContextMenuPolicy(Qt::ActionsContextMenu);

        gridLayout_10->addWidget(MapWidget_3, 0, 0, 1, 2);

        on_sos_map_3 = new QPushButton(frameBackground_3);
        on_sos_map_3->setObjectName(QStringLiteral("on_sos_map_3"));
        on_sos_map_3->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #C0DCF2;\n"
"color:#386487;\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}\n"
"\n"
"QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F9FF,stop:1 #DAEFFF);\n"
"}\n"
"\n"
"QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}"));

        gridLayout_10->addWidget(on_sos_map_3, 1, 0, 1, 1);

        off_sos_map_3 = new QPushButton(frameBackground_3);
        off_sos_map_3->setObjectName(QStringLiteral("off_sos_map_3"));
        off_sos_map_3->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #C0DCF2;\n"
"color:#386487;\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}\n"
"\n"
"QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F9FF,stop:1 #DAEFFF);\n"
"}\n"
"\n"
"QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}"));

        gridLayout_10->addWidget(off_sos_map_3, 1, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_10, 0, 1, 1, 1);


        gridLayout_19->addLayout(gridLayout_8, 0, 0, 1, 1);


        gridLayout->addWidget(frameBackground_3, 1, 0, 1, 1);

        frameBackground = new QFrame(ListWidget);
        frameBackground->setObjectName(QStringLiteral("frameBackground"));
        frameBackground->setMinimumSize(QSize(320, 220));
        frameBackground->setStyleSheet(QStringLiteral(""));
        gridLayout_18 = new QGridLayout(frameBackground);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        labelImage = new QLabel(frameBackground);
        labelImage->setObjectName(QStringLiteral("labelImage"));
        labelImage->setMinimumSize(QSize(36, 36));
        labelImage->setMaximumSize(QSize(36, 36));
        labelImage->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        labelImage->setScaledContents(true);

        gridLayout_4->addWidget(labelImage, 0, 0, 1, 1, Qt::AlignHCenter);

        label = new QLabel(frameBackground);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("\n"
"font: 9pt \"Times New Roman\";\n"
"color: rgb(255, 170, 0);\n"
""));

        gridLayout_4->addWidget(label, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);

        label_2 = new QLabel(frameBackground);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 9pt \"Times New Roman\";\n"
"color: rgb(255, 170, 0);"));

        gridLayout_4->addWidget(label_2, 4, 0, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_12, 5, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        MapWidget = new QWebEngineView(frameBackground);
        MapWidget->setObjectName(QStringLiteral("MapWidget"));
        MapWidget->setMinimumSize(QSize(200, 170));
        MapWidget->setMaximumSize(QSize(16777215, 16777215));
        MapWidget->setContextMenuPolicy(Qt::ActionsContextMenu);

        gridLayout_3->addWidget(MapWidget, 0, 0, 1, 2);

        on_sos_map = new QPushButton(frameBackground);
        on_sos_map->setObjectName(QStringLiteral("on_sos_map"));
        on_sos_map->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #C0DCF2;\n"
"color:#386487;\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}\n"
"\n"
"QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F9FF,stop:1 #DAEFFF);\n"
"}\n"
"\n"
"QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}"));

        gridLayout_3->addWidget(on_sos_map, 1, 0, 1, 1);

        off_sos_map = new QPushButton(frameBackground);
        off_sos_map->setObjectName(QStringLiteral("off_sos_map"));
        off_sos_map->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #C0DCF2;\n"
"color:#386487;\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}\n"
"\n"
"QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F9FF,stop:1 #DAEFFF);\n"
"}\n"
"\n"
"QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}"));

        gridLayout_3->addWidget(off_sos_map, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 1, 1, 1);


        gridLayout_18->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(frameBackground, 0, 0, 1, 1);

        frameBackground_4 = new QFrame(ListWidget);
        frameBackground_4->setObjectName(QStringLiteral("frameBackground_4"));
        frameBackground_4->setMinimumSize(QSize(320, 220));
        frameBackground_4->setStyleSheet(QStringLiteral(""));
        gridLayout_20 = new QGridLayout(frameBackground_4);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        label_7 = new QLabel(frameBackground_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QLatin1String("font: 9pt \"Times New Roman\";\n"
"color: rgb(255, 170, 0);"));

        gridLayout_12->addWidget(label_7, 2, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_7, 1, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_8, 3, 0, 1, 1);

        labelImage_4 = new QLabel(frameBackground_4);
        labelImage_4->setObjectName(QStringLiteral("labelImage_4"));
        labelImage_4->setMinimumSize(QSize(36, 36));
        labelImage_4->setMaximumSize(QSize(36, 36));
        labelImage_4->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        labelImage_4->setScaledContents(true);

        gridLayout_12->addWidget(labelImage_4, 0, 0, 1, 1, Qt::AlignHCenter);

        label_8 = new QLabel(frameBackground_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("font: 9pt \"Times New Roman\";\n"
"color: rgb(255, 170, 0);"));

        gridLayout_12->addWidget(label_8, 4, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_10, 5, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_12, 0, 0, 1, 1);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        MapWidget_4 = new QWebEngineView(frameBackground_4);
        MapWidget_4->setObjectName(QStringLiteral("MapWidget_4"));
        MapWidget_4->setMinimumSize(QSize(200, 170));
        MapWidget_4->setMaximumSize(QSize(16777215, 16777215));
        MapWidget_4->setContextMenuPolicy(Qt::ActionsContextMenu);

        gridLayout_13->addWidget(MapWidget_4, 0, 0, 1, 2);

        on_sos_map_4 = new QPushButton(frameBackground_4);
        on_sos_map_4->setObjectName(QStringLiteral("on_sos_map_4"));
        on_sos_map_4->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #C0DCF2;\n"
"color:#386487;\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}\n"
"\n"
"QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F9FF,stop:1 #DAEFFF);\n"
"}\n"
"\n"
"QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}"));

        gridLayout_13->addWidget(on_sos_map_4, 1, 0, 1, 1);

        off_sos_map_4 = new QPushButton(frameBackground_4);
        off_sos_map_4->setObjectName(QStringLiteral("off_sos_map_4"));
        off_sos_map_4->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #C0DCF2;\n"
"color:#386487;\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}\n"
"\n"
"QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F9FF,stop:1 #DAEFFF);\n"
"}\n"
"\n"
"QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}"));

        gridLayout_13->addWidget(off_sos_map_4, 1, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_13, 0, 1, 1, 1);


        gridLayout_20->addLayout(gridLayout_11, 0, 0, 1, 1);


        gridLayout->addWidget(frameBackground_4, 1, 1, 1, 1);

        frameBackground_2 = new QFrame(ListWidget);
        frameBackground_2->setObjectName(QStringLiteral("frameBackground_2"));
        frameBackground_2->setMinimumSize(QSize(320, 220));
        frameBackground_2->setStyleSheet(QStringLiteral(""));
        gridLayout_15 = new QGridLayout(frameBackground_2);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        labelImage_2 = new QLabel(frameBackground_2);
        labelImage_2->setObjectName(QStringLiteral("labelImage_2"));
        labelImage_2->setMinimumSize(QSize(36, 36));
        labelImage_2->setMaximumSize(QSize(36, 36));
        labelImage_2->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        labelImage_2->setScaledContents(true);

        gridLayout_6->addWidget(labelImage_2, 0, 0, 1, 1, Qt::AlignHCenter);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_4, 3, 0, 1, 1);

        label_4 = new QLabel(frameBackground_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font: 9pt \"Times New Roman\";\n"
"color: rgb(255, 170, 0);"));

        gridLayout_6->addWidget(label_4, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 1, 0, 1, 1);

        label_3 = new QLabel(frameBackground_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font: 9pt \"Times New Roman\";\n"
"color: rgb(255, 170, 0);"));

        gridLayout_6->addWidget(label_3, 2, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_11, 5, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_6, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        MapWidget_2 = new QWebEngineView(frameBackground_2);
        MapWidget_2->setObjectName(QStringLiteral("MapWidget_2"));
        MapWidget_2->setMinimumSize(QSize(200, 170));
        MapWidget_2->setMaximumSize(QSize(16777215, 16777215));
        MapWidget_2->setContextMenuPolicy(Qt::ActionsContextMenu);

        gridLayout_7->addWidget(MapWidget_2, 0, 0, 1, 2);

        on_sos_map_2 = new QPushButton(frameBackground_2);
        on_sos_map_2->setObjectName(QStringLiteral("on_sos_map_2"));
        on_sos_map_2->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #C0DCF2;\n"
"color:#386487;\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}\n"
"\n"
"QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F9FF,stop:1 #DAEFFF);\n"
"}\n"
"\n"
"QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}"));

        gridLayout_7->addWidget(on_sos_map_2, 1, 0, 1, 1);

        off_sos_map_2 = new QPushButton(frameBackground_2);
        off_sos_map_2->setObjectName(QStringLiteral("off_sos_map_2"));
        off_sos_map_2->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #C0DCF2;\n"
"color:#386487;\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}\n"
"\n"
"QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F9FF,stop:1 #DAEFFF);\n"
"}\n"
"\n"
"QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}"));

        gridLayout_7->addWidget(off_sos_map_2, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_7, 0, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout_5, 0, 0, 1, 1);


        gridLayout->addWidget(frameBackground_2, 0, 1, 1, 1);


        retranslateUi(ListWidget);

        QMetaObject::connectSlotsByName(ListWidget);
    } // setupUi

    void retranslateUi(QWidget *ListWidget)
    {
        ListWidget->setWindowTitle(QApplication::translate("ListWidget", "Form", Q_NULLPTR));
        label_6->setText(QApplication::translate("ListWidget", "Patient003", Q_NULLPTR));
        label_5->setText(QApplication::translate("ListWidget", "SCNU-Ward", Q_NULLPTR));
        labelImage_3->setText(QString());
        on_sos_map_3->setText(QApplication::translate("ListWidget", "\345\274\200\345\220\257\345\214\272\345\237\237\351\242\204\350\255\246", Q_NULLPTR));
        off_sos_map_3->setText(QApplication::translate("ListWidget", "\345\205\263\351\227\255\345\214\272\345\237\237\351\242\204\350\255\246", Q_NULLPTR));
        labelImage->setText(QString());
        label->setText(QApplication::translate("ListWidget", "SCNU-Ward", Q_NULLPTR));
        label_2->setText(QApplication::translate("ListWidget", "Patient001", Q_NULLPTR));
        on_sos_map->setText(QApplication::translate("ListWidget", "\345\274\200\345\220\257\345\214\272\345\237\237\351\242\204\350\255\246", Q_NULLPTR));
        off_sos_map->setText(QApplication::translate("ListWidget", "\345\205\263\351\227\255\345\214\272\345\237\237\351\242\204\350\255\246", Q_NULLPTR));
        label_7->setText(QApplication::translate("ListWidget", "SCNU-Ward", Q_NULLPTR));
        labelImage_4->setText(QString());
        label_8->setText(QApplication::translate("ListWidget", "Patient004", Q_NULLPTR));
        on_sos_map_4->setText(QApplication::translate("ListWidget", "\345\274\200\345\220\257\345\214\272\345\237\237\351\242\204\350\255\246", Q_NULLPTR));
        off_sos_map_4->setText(QApplication::translate("ListWidget", "\345\205\263\351\227\255\345\214\272\345\237\237\351\242\204\350\255\246", Q_NULLPTR));
        labelImage_2->setText(QString());
        label_4->setText(QApplication::translate("ListWidget", "Patient002", Q_NULLPTR));
        label_3->setText(QApplication::translate("ListWidget", "SCNU-Ward", Q_NULLPTR));
        on_sos_map_2->setText(QApplication::translate("ListWidget", "\345\274\200\345\220\257\345\214\272\345\237\237\351\242\204\350\255\246", Q_NULLPTR));
        off_sos_map_2->setText(QApplication::translate("ListWidget", "\345\205\263\351\227\255\345\214\272\345\237\237\351\242\204\350\255\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListWidget: public Ui_ListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTWIDGET_H
