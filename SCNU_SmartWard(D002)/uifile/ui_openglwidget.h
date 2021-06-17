/********************************************************************************
** Form generated from reading UI file 'openglwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENGLWIDGET_H
#define UI_OPENGLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qwebengineview.h"

QT_BEGIN_NAMESPACE

class Ui_OpenglWidget
{
public:
    QGridLayout *gridLayout_9;
    QGridLayout *emotion;
    QWebEngineView *widget;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_2;
    QLabel *emotion_pix;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QGridLayout *gridLayout;
    QProgressBar *happy;
    QProgressBar *neutral;
    QProgressBar *surprise;
    QProgressBar *sadness;
    QProgressBar *disgust;
    QProgressBar *anger;
    QProgressBar *fear;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_29;
    QLabel *label_30;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *emotion_2;
    QSpacerItem *verticalSpacer_3;
    QWebEngineView *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_31;
    QLabel *label_32;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_3;
    QLabel *emotion_pix_2;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QGridLayout *gridLayout_4;
    QProgressBar *happy_2;
    QProgressBar *neutral_2;
    QProgressBar *surprise_2;
    QProgressBar *sadness_2;
    QProgressBar *disgust_2;
    QProgressBar *anger_2;
    QProgressBar *fear_2;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *emotion_3;
    QSpacerItem *verticalSpacer_5;
    QWebEngineView *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_33;
    QLabel *label_34;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_5;
    QLabel *emotion_pix_3;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout_5;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QGridLayout *gridLayout_6;
    QProgressBar *happy_3;
    QProgressBar *neutral_3;
    QProgressBar *surprise_3;
    QProgressBar *sadness_3;
    QProgressBar *disgust_3;
    QProgressBar *anger_3;
    QProgressBar *fear_3;
    QSpacerItem *verticalSpacer_6;
    QGridLayout *emotion_4;
    QSpacerItem *verticalSpacer_7;
    QWebEngineView *widget_4;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_7;
    QLabel *emotion_pix_4;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_35;
    QLabel *label_36;
    QHBoxLayout *horizontalLayout_8;
    QGridLayout *gridLayout_7;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QGridLayout *gridLayout_8;
    QProgressBar *happy_4;
    QProgressBar *neutral_4;
    QProgressBar *surprise_4;
    QProgressBar *sadness_4;
    QProgressBar *disgust_4;
    QProgressBar *anger_4;
    QProgressBar *fear_4;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QWidget *OpenglWidget)
    {
        if (OpenglWidget->objectName().isEmpty())
            OpenglWidget->setObjectName(QStringLiteral("OpenglWidget"));
        OpenglWidget->resize(823, 528);
        gridLayout_9 = new QGridLayout(OpenglWidget);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        emotion = new QGridLayout();
        emotion->setObjectName(QStringLiteral("emotion"));
        widget = new QWebEngineView(OpenglWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(50, 155));
        widget->setMaximumSize(QSize(16777215, 200));

        emotion->addWidget(widget, 1, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        emotion_pix = new QLabel(OpenglWidget);
        emotion_pix->setObjectName(QStringLiteral("emotion_pix"));
        emotion_pix->setMinimumSize(QSize(80, 80));
        emotion_pix->setMaximumSize(QSize(200, 200));
        emotion_pix->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        emotion_pix->setScaledContents(true);

        horizontalLayout_9->addWidget(emotion_pix);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);


        emotion->addLayout(horizontalLayout_9, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        emotion->addItem(verticalSpacer, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(OpenglWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(OpenglWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label_2 = new QLabel(OpenglWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        label_5 = new QLabel(OpenglWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        label_3 = new QLabel(OpenglWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        label_6 = new QLabel(OpenglWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        label_7 = new QLabel(OpenglWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 6, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        happy = new QProgressBar(OpenglWidget);
        happy->setObjectName(QStringLiteral("happy"));
        happy->setMinimumSize(QSize(50, 0));
        happy->setMaximumSize(QSize(16777215, 16777215));
        happy->setStyleSheet(QString::fromUtf8("QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFFFCC,stop:1 #FFFF7F);\n"
"}\n"
"QProgressBar#happy\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        happy->setValue(100);

        gridLayout->addWidget(happy, 0, 0, 1, 1);

        neutral = new QProgressBar(OpenglWidget);
        neutral->setObjectName(QStringLiteral("neutral"));
        neutral->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #DBEEDB,stop:1 #99EE99);\n"
"}\n"
"QProgressBar#neutral,#neutral_2,#neutral_3,#neutral_4\n"
"\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        neutral->setValue(100);

        gridLayout->addWidget(neutral, 1, 0, 1, 1);

        surprise = new QProgressBar(OpenglWidget);
        surprise->setObjectName(QStringLiteral("surprise"));
        surprise->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFF6E6,stop:1 #FFAE1A);\n"
"}\n"
"QProgressBar#surprise,#surprise_2,#surprise_3,#surprise_4\n"
"\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        surprise->setValue(100);

        gridLayout->addWidget(surprise, 2, 0, 1, 1);

        sadness = new QProgressBar(OpenglWidget);
        sadness->setObjectName(QStringLiteral("sadness"));
        sadness->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #E6E6E6,stop:1 #000000);\n"
"}\n"
"QProgressBar#sadness,#sadness_2,#sadness_3,#sadness_4\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        sadness->setValue(100);

        gridLayout->addWidget(sadness, 3, 0, 1, 1);

        disgust = new QProgressBar(OpenglWidget);
        disgust->setObjectName(QStringLiteral("disgust"));
        disgust->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFFFFF,stop:1  #26B4FF);\n"
"}\n"
"QProgressBar#disgust,#disgust_2,#disgust_3,#disgust_4\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        disgust->setValue(100);

        gridLayout->addWidget(disgust, 4, 0, 1, 1);

        anger = new QProgressBar(OpenglWidget);
        anger->setObjectName(QStringLiteral("anger"));
        anger->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFE6E6,stop:1 #FF2E2E);\n"
"}\n"
"QProgressBar#anger,#anger_2,#anger_3,#anger_4\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        anger->setValue(100);

        gridLayout->addWidget(anger, 5, 0, 1, 1);

        fear = new QProgressBar(OpenglWidget);
        fear->setObjectName(QStringLiteral("fear"));
        fear->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #999999,stop:1  #FFFFFF);\n"
"}\n"
"QProgressBar#fear,#fear_2,#fear_3,#fear_4\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        fear->setValue(100);

        gridLayout->addWidget(fear, 6, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        emotion->addLayout(horizontalLayout, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_29 = new QLabel(OpenglWidget);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setMinimumSize(QSize(0, 30));
        label_29->setMaximumSize(QSize(16777215, 50));
        label_29->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        horizontalLayout_2->addWidget(label_29);

        label_30 = new QLabel(OpenglWidget);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setMinimumSize(QSize(0, 30));
        label_30->setMaximumSize(QSize(16777215, 50));
        label_30->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        horizontalLayout_2->addWidget(label_30);


        emotion->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        emotion->addItem(verticalSpacer_2, 4, 0, 1, 1);


        gridLayout_9->addLayout(emotion, 0, 0, 1, 1);

        emotion_2 = new QGridLayout();
        emotion_2->setObjectName(QStringLiteral("emotion_2"));
        verticalSpacer_3 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        emotion_2->addItem(verticalSpacer_3, 2, 0, 1, 1);

        widget_2 = new QWebEngineView(OpenglWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(50, 155));
        widget_2->setMaximumSize(QSize(16777215, 200));

        emotion_2->addWidget(widget_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_31 = new QLabel(OpenglWidget);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setMinimumSize(QSize(0, 30));
        label_31->setMaximumSize(QSize(16777215, 50));
        label_31->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        horizontalLayout_3->addWidget(label_31);

        label_32 = new QLabel(OpenglWidget);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setMinimumSize(QSize(0, 30));
        label_32->setMaximumSize(QSize(16777215, 50));
        label_32->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        horizontalLayout_3->addWidget(label_32);


        emotion_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        emotion_pix_2 = new QLabel(OpenglWidget);
        emotion_pix_2->setObjectName(QStringLiteral("emotion_pix_2"));
        emotion_pix_2->setMinimumSize(QSize(80, 80));
        emotion_pix_2->setMaximumSize(QSize(200, 200));
        emotion_pix_2->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        emotion_pix_2->setScaledContents(true);

        horizontalLayout_10->addWidget(emotion_pix_2);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);


        emotion_2->addLayout(horizontalLayout_10, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_8 = new QLabel(OpenglWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(OpenglWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 1, 0, 1, 1);

        label_10 = new QLabel(OpenglWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 2, 0, 1, 1);

        label_11 = new QLabel(OpenglWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 3, 0, 1, 1);

        label_12 = new QLabel(OpenglWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 4, 0, 1, 1);

        label_13 = new QLabel(OpenglWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 5, 0, 1, 1);

        label_14 = new QLabel(OpenglWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 6, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        happy_2 = new QProgressBar(OpenglWidget);
        happy_2->setObjectName(QStringLiteral("happy_2"));
        happy_2->setMinimumSize(QSize(50, 0));
        happy_2->setMaximumSize(QSize(16777215, 16777215));
        happy_2->setStyleSheet(QString::fromUtf8("QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFFFCC,stop:1 #FFFF7F);\n"
"}\n"
"QProgressBar#happy_2\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        happy_2->setValue(100);

        gridLayout_4->addWidget(happy_2, 0, 0, 1, 1);

        neutral_2 = new QProgressBar(OpenglWidget);
        neutral_2->setObjectName(QStringLiteral("neutral_2"));
        neutral_2->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #DBEEDB,stop:1 #99EE99);\n"
"}\n"
"QProgressBar#neutral,#neutral_2,#neutral_3,#neutral_4\n"
"\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        neutral_2->setValue(100);

        gridLayout_4->addWidget(neutral_2, 1, 0, 1, 1);

        surprise_2 = new QProgressBar(OpenglWidget);
        surprise_2->setObjectName(QStringLiteral("surprise_2"));
        surprise_2->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFF6E6,stop:1 #FFAE1A);\n"
"}\n"
"QProgressBar#surprise,#surprise_2,#surprise_3,#surprise_4\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        surprise_2->setValue(100);

        gridLayout_4->addWidget(surprise_2, 2, 0, 1, 1);

        sadness_2 = new QProgressBar(OpenglWidget);
        sadness_2->setObjectName(QStringLiteral("sadness_2"));
        sadness_2->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #E6E6E6,stop:1 #000000);\n"
"}\n"
"QProgressBar#sadness,#sadness_2,#sadness_3,#sadness_4\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        sadness_2->setValue(100);

        gridLayout_4->addWidget(sadness_2, 3, 0, 1, 1);

        disgust_2 = new QProgressBar(OpenglWidget);
        disgust_2->setObjectName(QStringLiteral("disgust_2"));
        disgust_2->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFFFFF,stop:1  #26B4FF);\n"
"}\n"
"QProgressBar#disgust,#disgust_2,#disgust_3,#disgust_4\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        disgust_2->setValue(100);

        gridLayout_4->addWidget(disgust_2, 4, 0, 1, 1);

        anger_2 = new QProgressBar(OpenglWidget);
        anger_2->setObjectName(QStringLiteral("anger_2"));
        anger_2->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFE6E6,stop:1 #FF2E2E);\n"
"}\n"
"QProgressBar#anger,#anger_2,#anger_3,#anger_4\n"
"\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        anger_2->setValue(100);

        gridLayout_4->addWidget(anger_2, 5, 0, 1, 1);

        fear_2 = new QProgressBar(OpenglWidget);
        fear_2->setObjectName(QStringLiteral("fear_2"));
        fear_2->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #999999,stop:1  #FFFFFF);\n"
"}\n"
"QProgressBar#fear,#fear_2,#fear_3,#fear_4\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        fear_2->setValue(100);

        gridLayout_4->addWidget(fear_2, 6, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_4);


        emotion_2->addLayout(horizontalLayout_4, 5, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        emotion_2->addItem(verticalSpacer_4, 4, 0, 1, 1);


        gridLayout_9->addLayout(emotion_2, 0, 1, 1, 1);

        emotion_3 = new QGridLayout();
        emotion_3->setObjectName(QStringLiteral("emotion_3"));
        verticalSpacer_5 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        emotion_3->addItem(verticalSpacer_5, 4, 0, 1, 1);

        widget_3 = new QWebEngineView(OpenglWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setMinimumSize(QSize(50, 155));
        widget_3->setMaximumSize(QSize(16777215, 200));

        emotion_3->addWidget(widget_3, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_33 = new QLabel(OpenglWidget);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setMinimumSize(QSize(0, 30));
        label_33->setMaximumSize(QSize(16777215, 50));
        label_33->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        horizontalLayout_5->addWidget(label_33);

        label_34 = new QLabel(OpenglWidget);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setMinimumSize(QSize(0, 30));
        label_34->setMaximumSize(QSize(16777215, 50));
        label_34->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        horizontalLayout_5->addWidget(label_34);


        emotion_3->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_5 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_5);

        emotion_pix_3 = new QLabel(OpenglWidget);
        emotion_pix_3->setObjectName(QStringLiteral("emotion_pix_3"));
        emotion_pix_3->setMinimumSize(QSize(80, 80));
        emotion_pix_3->setMaximumSize(QSize(200, 200));
        emotion_pix_3->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        emotion_pix_3->setScaledContents(true);

        horizontalLayout_11->addWidget(emotion_pix_3);

        horizontalSpacer_6 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_6);


        emotion_3->addLayout(horizontalLayout_11, 3, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_15 = new QLabel(OpenglWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_5->addWidget(label_15, 0, 0, 1, 1);

        label_16 = new QLabel(OpenglWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_5->addWidget(label_16, 1, 0, 1, 1);

        label_17 = new QLabel(OpenglWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_5->addWidget(label_17, 2, 0, 1, 1);

        label_18 = new QLabel(OpenglWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_5->addWidget(label_18, 3, 0, 1, 1);

        label_19 = new QLabel(OpenglWidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_5->addWidget(label_19, 4, 0, 1, 1);

        label_20 = new QLabel(OpenglWidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_5->addWidget(label_20, 5, 0, 1, 1);

        label_21 = new QLabel(OpenglWidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_5->addWidget(label_21, 6, 0, 1, 1);


        horizontalLayout_6->addLayout(gridLayout_5);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        happy_3 = new QProgressBar(OpenglWidget);
        happy_3->setObjectName(QStringLiteral("happy_3"));
        happy_3->setMinimumSize(QSize(50, 0));
        happy_3->setMaximumSize(QSize(16777215, 16777215));
        happy_3->setStyleSheet(QString::fromUtf8("QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFFFCC,stop:1 #FFFF7F);\n"
"}\n"
"QProgressBar#happy_3\n"
"\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        happy_3->setValue(100);

        gridLayout_6->addWidget(happy_3, 0, 0, 1, 1);

        neutral_3 = new QProgressBar(OpenglWidget);
        neutral_3->setObjectName(QStringLiteral("neutral_3"));
        neutral_3->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #DBEEDB,stop:1 #99EE99);\n"
"}\n"
"QProgressBar#neutral,#neutral_2,#neutral_3,#neutral_4\n"
"\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        neutral_3->setValue(100);

        gridLayout_6->addWidget(neutral_3, 1, 0, 1, 1);

        surprise_3 = new QProgressBar(OpenglWidget);
        surprise_3->setObjectName(QStringLiteral("surprise_3"));
        surprise_3->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFF6E6,stop:1 #FFAE1A);\n"
"}\n"
"QProgressBar#surprise,#surprise_2,#surprise_3,#surprise_4\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        surprise_3->setValue(100);

        gridLayout_6->addWidget(surprise_3, 2, 0, 1, 1);

        sadness_3 = new QProgressBar(OpenglWidget);
        sadness_3->setObjectName(QStringLiteral("sadness_3"));
        sadness_3->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #E6E6E6,stop:1 #000000);\n"
"}\n"
"QProgressBar#sadness,#sadness_2,#sadness_3,#sadness_4\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        sadness_3->setValue(100);

        gridLayout_6->addWidget(sadness_3, 3, 0, 1, 1);

        disgust_3 = new QProgressBar(OpenglWidget);
        disgust_3->setObjectName(QStringLiteral("disgust_3"));
        disgust_3->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFFFFF,stop:1  #26B4FF);\n"
"}\n"
"QProgressBar#disgust,#disgust_2,#disgust_3,#disgust_4\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        disgust_3->setValue(100);

        gridLayout_6->addWidget(disgust_3, 4, 0, 1, 1);

        anger_3 = new QProgressBar(OpenglWidget);
        anger_3->setObjectName(QStringLiteral("anger_3"));
        anger_3->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFE6E6,stop:1 #FF2E2E);\n"
"}\n"
"QProgressBar#anger,#anger_2,#anger_3,#anger_4\n"
"\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        anger_3->setValue(100);

        gridLayout_6->addWidget(anger_3, 5, 0, 1, 1);

        fear_3 = new QProgressBar(OpenglWidget);
        fear_3->setObjectName(QStringLiteral("fear_3"));
        fear_3->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #999999,stop:1  #FFFFFF);\n"
"}\n"
"QProgressBar#fear,#fear_2,#fear_3,#fear_4\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        fear_3->setValue(100);

        gridLayout_6->addWidget(fear_3, 6, 0, 1, 1);


        horizontalLayout_6->addLayout(gridLayout_6);


        emotion_3->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        emotion_3->addItem(verticalSpacer_6, 2, 0, 1, 1);


        gridLayout_9->addLayout(emotion_3, 0, 2, 1, 1);

        emotion_4 = new QGridLayout();
        emotion_4->setObjectName(QStringLiteral("emotion_4"));
        verticalSpacer_7 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        emotion_4->addItem(verticalSpacer_7, 2, 0, 1, 1);

        widget_4 = new QWebEngineView(OpenglWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(50, 155));
        widget_4->setMaximumSize(QSize(16777215, 200));

        emotion_4->addWidget(widget_4, 1, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_7 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);

        emotion_pix_4 = new QLabel(OpenglWidget);
        emotion_pix_4->setObjectName(QStringLiteral("emotion_pix_4"));
        emotion_pix_4->setMinimumSize(QSize(80, 80));
        emotion_pix_4->setMaximumSize(QSize(200, 200));
        emotion_pix_4->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        emotion_pix_4->setScaledContents(true);

        horizontalLayout_12->addWidget(emotion_pix_4);

        horizontalSpacer_8 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_8);


        emotion_4->addLayout(horizontalLayout_12, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_35 = new QLabel(OpenglWidget);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setMinimumSize(QSize(0, 30));
        label_35->setMaximumSize(QSize(16777215, 50));
        label_35->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        horizontalLayout_7->addWidget(label_35);

        label_36 = new QLabel(OpenglWidget);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setMinimumSize(QSize(0, 30));
        label_36->setMaximumSize(QSize(16777215, 50));
        label_36->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        horizontalLayout_7->addWidget(label_36);


        emotion_4->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_22 = new QLabel(OpenglWidget);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_7->addWidget(label_22, 0, 0, 1, 1);

        label_23 = new QLabel(OpenglWidget);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_7->addWidget(label_23, 1, 0, 1, 1);

        label_24 = new QLabel(OpenglWidget);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_7->addWidget(label_24, 2, 0, 1, 1);

        label_25 = new QLabel(OpenglWidget);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_7->addWidget(label_25, 3, 0, 1, 1);

        label_26 = new QLabel(OpenglWidget);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_7->addWidget(label_26, 4, 0, 1, 1);

        label_27 = new QLabel(OpenglWidget);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_7->addWidget(label_27, 5, 0, 1, 1);

        label_28 = new QLabel(OpenglWidget);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_7->addWidget(label_28, 6, 0, 1, 1);


        horizontalLayout_8->addLayout(gridLayout_7);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        happy_4 = new QProgressBar(OpenglWidget);
        happy_4->setObjectName(QStringLiteral("happy_4"));
        happy_4->setMinimumSize(QSize(50, 0));
        happy_4->setMaximumSize(QSize(16777215, 16777215));
        happy_4->setStyleSheet(QString::fromUtf8("QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFFFCC,stop:1 #FFFF7F);\n"
"}\n"
"QProgressBar#happy_4\n"
"\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        happy_4->setValue(100);

        gridLayout_8->addWidget(happy_4, 0, 0, 1, 1);

        neutral_4 = new QProgressBar(OpenglWidget);
        neutral_4->setObjectName(QStringLiteral("neutral_4"));
        neutral_4->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #DBEEDB,stop:1 #99EE99);\n"
"}\n"
"QProgressBar#neutral,#neutral_2,#neutral_3,#neutral_4\n"
"\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        neutral_4->setValue(100);

        gridLayout_8->addWidget(neutral_4, 1, 0, 1, 1);

        surprise_4 = new QProgressBar(OpenglWidget);
        surprise_4->setObjectName(QStringLiteral("surprise_4"));
        surprise_4->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFF6E6,stop:1 #FFAE1A);\n"
"}\n"
"QProgressBar#surprise,#surprise_2,#surprise_3,#surprise_4\n"
"\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        surprise_4->setValue(100);

        gridLayout_8->addWidget(surprise_4, 2, 0, 1, 1);

        sadness_4 = new QProgressBar(OpenglWidget);
        sadness_4->setObjectName(QStringLiteral("sadness_4"));
        sadness_4->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #E6E6E6,stop:1 #000000);\n"
"}\n"
"QProgressBar#sadness,#sadness_2,#sadness_3,#sadness_4\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        sadness_4->setValue(100);

        gridLayout_8->addWidget(sadness_4, 3, 0, 1, 1);

        disgust_4 = new QProgressBar(OpenglWidget);
        disgust_4->setObjectName(QStringLiteral("disgust_4"));
        disgust_4->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFFFFF,stop:1  #26B4FF);\n"
"}\n"
"QProgressBar#disgust,#disgust_2,#disgust_3,#disgust_4\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        disgust_4->setValue(100);

        gridLayout_8->addWidget(disgust_4, 4, 0, 1, 1);

        anger_4 = new QProgressBar(OpenglWidget);
        anger_4->setObjectName(QStringLiteral("anger_4"));
        anger_4->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #FFE6E6,stop:1 #FF2E2E);\n"
"}\n"
"QProgressBar#anger,#anger_2,#anger_3,#anger_4\n"
"\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        anger_4->setValue(100);

        gridLayout_8->addWidget(anger_4, 5, 0, 1, 1);

        fear_4 = new QProgressBar(OpenglWidget);
        fear_4->setObjectName(QStringLiteral("fear_4"));
        fear_4->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:11px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #999999,stop:1  #FFFFFF);\n"
"}\n"
"QProgressBar#fear,#fear_2,#fear_3,#fear_4\n"
"{\n"
"height:22px;\n"
"text-align:center;/*\346\226\207\346\234\254\344\275\215\347\275\256*/\n"
"font-size:14px;\n"
"color: rgb(70, 212, 212);\n"
"border-radius:11px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        fear_4->setValue(100);

        gridLayout_8->addWidget(fear_4, 6, 0, 1, 1);


        horizontalLayout_8->addLayout(gridLayout_8);


        emotion_4->addLayout(horizontalLayout_8, 5, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        emotion_4->addItem(verticalSpacer_8, 4, 0, 1, 1);


        gridLayout_9->addLayout(emotion_4, 0, 3, 1, 1);


        retranslateUi(OpenglWidget);

        QMetaObject::connectSlotsByName(OpenglWidget);
    } // setupUi

    void retranslateUi(QWidget *OpenglWidget)
    {
        OpenglWidget->setWindowTitle(QApplication::translate("OpenglWidget", "Form", Q_NULLPTR));
        emotion_pix->setText(QString());
        label->setText(QApplication::translate("OpenglWidget", "\351\253\230\345\205\264\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("OpenglWidget", "\345\271\263\351\235\231\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("OpenglWidget", "\346\203\212\350\256\266\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("OpenglWidget", "\344\274\244\345\277\203\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("OpenglWidget", "\345\216\214\346\201\266\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("OpenglWidget", "\346\204\244\346\200\222\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("OpenglWidget", "\346\201\220\346\203\247\357\274\232", Q_NULLPTR));
        label_29->setText(QApplication::translate("OpenglWidget", "SCNU-Ward", Q_NULLPTR));
        label_30->setText(QApplication::translate("OpenglWidget", "Patient001", Q_NULLPTR));
        label_31->setText(QApplication::translate("OpenglWidget", "SCNU-Ward", Q_NULLPTR));
        label_32->setText(QApplication::translate("OpenglWidget", "Patient002", Q_NULLPTR));
        emotion_pix_2->setText(QString());
        label_8->setText(QApplication::translate("OpenglWidget", "\351\253\230\345\205\264\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("OpenglWidget", "\345\271\263\351\235\231\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("OpenglWidget", "\346\203\212\350\256\266\357\274\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("OpenglWidget", "\344\274\244\345\277\203\357\274\232", Q_NULLPTR));
        label_12->setText(QApplication::translate("OpenglWidget", "\345\216\214\346\201\266\357\274\232", Q_NULLPTR));
        label_13->setText(QApplication::translate("OpenglWidget", "\346\204\244\346\200\222\357\274\232", Q_NULLPTR));
        label_14->setText(QApplication::translate("OpenglWidget", "\346\201\220\346\203\247\357\274\232", Q_NULLPTR));
        label_33->setText(QApplication::translate("OpenglWidget", "SCNU-Ward", Q_NULLPTR));
        label_34->setText(QApplication::translate("OpenglWidget", "Patient003", Q_NULLPTR));
        emotion_pix_3->setText(QString());
        label_15->setText(QApplication::translate("OpenglWidget", "\351\253\230\345\205\264\357\274\232", Q_NULLPTR));
        label_16->setText(QApplication::translate("OpenglWidget", "\345\271\263\351\235\231\357\274\232", Q_NULLPTR));
        label_17->setText(QApplication::translate("OpenglWidget", "\346\203\212\350\256\266\357\274\232", Q_NULLPTR));
        label_18->setText(QApplication::translate("OpenglWidget", "\344\274\244\345\277\203\357\274\232", Q_NULLPTR));
        label_19->setText(QApplication::translate("OpenglWidget", "\345\216\214\346\201\266\357\274\232", Q_NULLPTR));
        label_20->setText(QApplication::translate("OpenglWidget", "\346\204\244\346\200\222\357\274\232", Q_NULLPTR));
        label_21->setText(QApplication::translate("OpenglWidget", "\346\201\220\346\203\247\357\274\232", Q_NULLPTR));
        emotion_pix_4->setText(QString());
        label_35->setText(QApplication::translate("OpenglWidget", "SCNU-Ward", Q_NULLPTR));
        label_36->setText(QApplication::translate("OpenglWidget", "Patient004", Q_NULLPTR));
        label_22->setText(QApplication::translate("OpenglWidget", "\351\253\230\345\205\264\357\274\232", Q_NULLPTR));
        label_23->setText(QApplication::translate("OpenglWidget", "\345\271\263\351\235\231\357\274\232", Q_NULLPTR));
        label_24->setText(QApplication::translate("OpenglWidget", "\346\203\212\350\256\266\357\274\232", Q_NULLPTR));
        label_25->setText(QApplication::translate("OpenglWidget", "\344\274\244\345\277\203\357\274\232", Q_NULLPTR));
        label_26->setText(QApplication::translate("OpenglWidget", "\345\216\214\346\201\266\357\274\232", Q_NULLPTR));
        label_27->setText(QApplication::translate("OpenglWidget", "\346\204\244\346\200\222\357\274\232", Q_NULLPTR));
        label_28->setText(QApplication::translate("OpenglWidget", "\346\201\220\346\203\247\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OpenglWidget: public Ui_OpenglWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENGLWIDGET_H
