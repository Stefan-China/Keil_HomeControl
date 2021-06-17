/********************************************************************************
** Form generated from reading UI file 'tablewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEWIDGET_H
#define UI_TABLEWIDGET_H

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

QT_BEGIN_NAMESPACE

class Ui_TableWidget
{
public:
    QGridLayout *gridLayout;
    QFrame *frame5;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer_13;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_15;
    QPushButton *LightSwitch_3;
    QSpacerItem *verticalSpacer_14;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;
    QLabel *air;
    QSpacerItem *horizontalSpacer_11;
    QFrame *frame6;
    QGridLayout *gridLayout_4;
    QLabel *tv;
    QGridLayout *gridLayout_9;
    QSpacerItem *verticalSpacer_17;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_16;
    QSpacerItem *verticalSpacer_18;
    QPushButton *LightSwitch_4;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_10;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_12;
    QFrame *frame2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_10;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_11;
    QPushButton *SY_Second;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_12;
    QPushButton *pushButton_4;
    QLabel *door;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_10;
    QFrame *frame1;
    QGridLayout *gridLayout_6;
    QLabel *SY_First;
    QSpacerItem *horizontalSpacer_7;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QPushButton *LightSwitch;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_9;

    void setupUi(QWidget *TableWidget)
    {
        if (TableWidget->objectName().isEmpty())
            TableWidget->setObjectName(QStringLiteral("TableWidget"));
        TableWidget->resize(717, 458);
        TableWidget->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(TableWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame5 = new QFrame(TableWidget);
        frame5->setObjectName(QStringLiteral("frame5"));
        frame5->setStyleSheet(QLatin1String("QFrame #frame5\n"
"{\n"
"background:transparent;border:2px solid white;\n"
"}"));
        gridLayout_3 = new QGridLayout(frame5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 2, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_13, 0, 0, 1, 1);

        label_7 = new QLabel(frame5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 30));
        label_7->setStyleSheet(QLatin1String("\n"
"font: 14pt \"Times New Roman\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_8->addWidget(label_7, 1, 0, 1, 1, Qt::AlignHCenter);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_15, 7, 0, 1, 1);

        LightSwitch_3 = new QPushButton(frame5);
        LightSwitch_3->setObjectName(QStringLiteral("LightSwitch_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LightSwitch_3->sizePolicy().hasHeightForWidth());
        LightSwitch_3->setSizePolicy(sizePolicy);
        LightSwitch_3->setMinimumSize(QSize(100, 27));
        LightSwitch_3->setMaximumSize(QSize(300, 90));
        LightSwitch_3->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
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

        gridLayout_8->addWidget(LightSwitch_3, 6, 0, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_14, 2, 0, 1, 1);

        label_8 = new QLabel(frame5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(0, 0));
        label_8->setStyleSheet(QLatin1String("font: 14pt \"Times New Roman\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_8->addWidget(label_8, 3, 0, 1, 1, Qt::AlignHCenter);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_3, 4, 0, 1, 1);

        pushButton = new QPushButton(frame5);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
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

        gridLayout_8->addWidget(pushButton, 5, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_8, 0, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        air = new QLabel(frame5);
        air->setObjectName(QStringLiteral("air"));
        air->setMinimumSize(QSize(100, 120));
        air->setMaximumSize(QSize(100, 120));
        air->setStyleSheet(QStringLiteral(""));
        air->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/transfuse/transfuse_full.png")));
        air->setScaledContents(true);

        gridLayout_3->addWidget(air, 0, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_11, 0, 4, 1, 1);


        gridLayout->addWidget(frame5, 1, 0, 1, 1);

        frame6 = new QFrame(TableWidget);
        frame6->setObjectName(QStringLiteral("frame6"));
        frame6->setStyleSheet(QLatin1String("QFrame #frame6\n"
"{\n"
"background:transparent;border:2px solid white;\n"
"}"));
        gridLayout_4 = new QGridLayout(frame6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tv = new QLabel(frame6);
        tv->setObjectName(QStringLiteral("tv"));
        tv->setMinimumSize(QSize(100, 120));
        tv->setMaximumSize(QSize(100, 120));
        tv->setStyleSheet(QStringLiteral(""));
        tv->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/transfuse/transfuse_full.png")));
        tv->setScaledContents(true);

        gridLayout_4->addWidget(tv, 0, 1, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_17, 2, 0, 1, 1);

        label_9 = new QLabel(frame6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 30));
        label_9->setStyleSheet(QLatin1String("font: 14pt \"Times New Roman\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_9->addWidget(label_9, 1, 0, 1, 1, Qt::AlignHCenter);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_16, 0, 0, 1, 1);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_18, 7, 0, 1, 1);

        LightSwitch_4 = new QPushButton(frame6);
        LightSwitch_4->setObjectName(QStringLiteral("LightSwitch_4"));
        sizePolicy.setHeightForWidth(LightSwitch_4->sizePolicy().hasHeightForWidth());
        LightSwitch_4->setSizePolicy(sizePolicy);
        LightSwitch_4->setMinimumSize(QSize(100, 27));
        LightSwitch_4->setMaximumSize(QSize(300, 90));
        LightSwitch_4->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
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

        gridLayout_9->addWidget(LightSwitch_4, 6, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_4, 4, 0, 1, 1);

        label_10 = new QLabel(frame6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(0, 0));
        label_10->setStyleSheet(QLatin1String("font: 14pt \"Times New Roman\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_9->addWidget(label_10, 3, 0, 1, 1, Qt::AlignHCenter);

        pushButton_2 = new QPushButton(frame6);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
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

        gridLayout_9->addWidget(pushButton_2, 5, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_9, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_12, 0, 4, 1, 1);


        gridLayout->addWidget(frame6, 1, 1, 1, 1);

        frame2 = new QFrame(TableWidget);
        frame2->setObjectName(QStringLiteral("frame2"));
        frame2->setStyleSheet(QLatin1String("QFrame #frame2\n"
"{\n"
"background:transparent;border:2px solid white;\n"
"}"));
        gridLayout_2 = new QGridLayout(frame2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_4 = new QLabel(frame2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setStyleSheet(QLatin1String("font: 14pt \"Times New Roman\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_7->addWidget(label_4, 1, 0, 1, 1, Qt::AlignHCenter);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_10, 0, 0, 1, 1);

        label_6 = new QLabel(frame2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setStyleSheet(QLatin1String("\n"
"font: 14pt \"Times New Roman\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_7->addWidget(label_6, 3, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_11, 2, 0, 1, 1);

        SY_Second = new QPushButton(frame2);
        SY_Second->setObjectName(QStringLiteral("SY_Second"));
        sizePolicy.setHeightForWidth(SY_Second->sizePolicy().hasHeightForWidth());
        SY_Second->setSizePolicy(sizePolicy);
        SY_Second->setMinimumSize(QSize(100, 27));
        SY_Second->setMaximumSize(QSize(300, 90));
        SY_Second->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
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

        gridLayout_7->addWidget(SY_Second, 6, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_2, 4, 0, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_12, 7, 0, 1, 1);

        pushButton_4 = new QPushButton(frame2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
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

        gridLayout_7->addWidget(pushButton_4, 5, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_7, 0, 3, 1, 1);

        door = new QLabel(frame2);
        door->setObjectName(QStringLiteral("door"));
        door->setMinimumSize(QSize(100, 120));
        door->setMaximumSize(QSize(100, 120));
        door->setStyleSheet(QStringLiteral(""));
        door->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/transfuse/transfuse_full.png")));
        door->setScaledContents(true);

        gridLayout_2->addWidget(door, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_10, 0, 4, 1, 1);


        gridLayout->addWidget(frame2, 0, 1, 1, 1);

        frame1 = new QFrame(TableWidget);
        frame1->setObjectName(QStringLiteral("frame1"));
        frame1->setStyleSheet(QLatin1String("QFrame #frame1\n"
"{\n"
"background:transparent;border:2px solid white;\n"
"}"));
        gridLayout_6 = new QGridLayout(frame1);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        SY_First = new QLabel(frame1);
        SY_First->setObjectName(QStringLiteral("SY_First"));
        SY_First->setMinimumSize(QSize(100, 120));
        SY_First->setMaximumSize(QSize(100, 120));
        SY_First->setStyleSheet(QStringLiteral(""));
        SY_First->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/transfuse/transfuse_full.png")));
        SY_First->setScaledContents(true);

        gridLayout_6->addWidget(SY_First, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_3 = new QLabel(frame1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setStyleSheet(QLatin1String("\n"
"font: 14pt \"Times New Roman\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_5->addWidget(label_3, 1, 0, 1, 1, Qt::AlignHCenter);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_9, 0, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_8, 2, 0, 1, 1);

        LightSwitch = new QPushButton(frame1);
        LightSwitch->setObjectName(QStringLiteral("LightSwitch"));
        sizePolicy.setHeightForWidth(LightSwitch->sizePolicy().hasHeightForWidth());
        LightSwitch->setSizePolicy(sizePolicy);
        LightSwitch->setMinimumSize(QSize(100, 27));
        LightSwitch->setMaximumSize(QSize(300, 90));
        LightSwitch->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
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

        gridLayout_5->addWidget(LightSwitch, 6, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_7, 7, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 4, 0, 1, 1);

        label_5 = new QLabel(frame1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setStyleSheet(QLatin1String("font: 14pt \"Times New Roman\";\n"
"color: rgb(30, 144, 225);\n"
""));

        gridLayout_5->addWidget(label_5, 3, 0, 1, 1, Qt::AlignHCenter);

        pushButton_3 = new QPushButton(frame1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton,.QToolButton{\n"
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

        gridLayout_5->addWidget(pushButton_3, 5, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_9, 0, 4, 1, 1);


        gridLayout->addWidget(frame1, 0, 0, 1, 1);


        retranslateUi(TableWidget);

        QMetaObject::connectSlotsByName(TableWidget);
    } // setupUi

    void retranslateUi(QWidget *TableWidget)
    {
        TableWidget->setWindowTitle(QApplication::translate("TableWidget", "Form", Q_NULLPTR));
        label_7->setText(QApplication::translate("TableWidget", "SCNU-Ward", Q_NULLPTR));
        LightSwitch_3->setText(QApplication::translate("TableWidget", "\345\205\263\351\227\255", Q_NULLPTR));
        label_8->setText(QApplication::translate("TableWidget", "Patient003", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TableWidget", "\345\274\200\345\220\257", Q_NULLPTR));
        air->setText(QString());
        tv->setText(QString());
        label_9->setText(QApplication::translate("TableWidget", "SCNU-Ward", Q_NULLPTR));
        LightSwitch_4->setText(QApplication::translate("TableWidget", "\345\205\263\351\227\255", Q_NULLPTR));
        label_10->setText(QApplication::translate("TableWidget", "Patient004", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("TableWidget", "\345\274\200\345\220\257", Q_NULLPTR));
        label_4->setText(QApplication::translate("TableWidget", "SCNU-Ward", Q_NULLPTR));
        label_6->setText(QApplication::translate("TableWidget", "Patient002", Q_NULLPTR));
        SY_Second->setText(QApplication::translate("TableWidget", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("TableWidget", "\345\274\200\345\220\257", Q_NULLPTR));
        door->setText(QString());
        SY_First->setText(QString());
        label_3->setText(QApplication::translate("TableWidget", "SCNU-Ward", Q_NULLPTR));
        LightSwitch->setText(QApplication::translate("TableWidget", "\345\205\263\351\227\255", Q_NULLPTR));
        label_5->setText(QApplication::translate("TableWidget", "Patient001", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("TableWidget", "\345\274\200\345\220\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TableWidget: public Ui_TableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEWIDGET_H
