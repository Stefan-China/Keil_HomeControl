/********************************************************************************
** Form generated from reading UI file 'progresswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSWIDGET_H
#define UI_PROGRESSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProgressWidget
{
public:
    QGridLayout *gridLayout;
    QFrame *frameBackground;
    QGridLayout *gridLayout_2;
    QWidget *widgetSecond;
    QGridLayout *gridLayout_5;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *Heartbeat_3;
    QLabel *label_16;
    QLabel *temperature_3;
    QLabel *label_20;
    QLabel *Diastolic_3;
    QLabel *label_15;
    QLabel *Steps_3;
    QLabel *label_21;
    QLabel *label_30;
    QWidget *widgetFourth;
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *Heartbeat_2;
    QLabel *label_8;
    QLabel *temperature_2;
    QLabel *label_13;
    QLabel *Diastolic_2;
    QLabel *label_7;
    QLabel *Steps_2;
    QLabel *label_14;
    QLabel *label_32;
    QWidget *widgetFirst;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label;
    QLabel *Heartbeat;
    QLabel *label_2;
    QLabel *temperature;
    QLabel *label_3;
    QLabel *Diastolic;
    QLabel *label_4;
    QLabel *Steps;
    QLabel *label_11;
    QLabel *label_29;
    QWidget *widgetThird;
    QGridLayout *gridLayout_6;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *Heartbeat_4;
    QLabel *label_23;
    QLabel *temperature_4;
    QLabel *label_27;
    QLabel *Diastolic_4;
    QLabel *label_22;
    QLabel *Steps_4;
    QLabel *label_28;
    QLabel *label_31;

    void setupUi(QWidget *ProgressWidget)
    {
        if (ProgressWidget->objectName().isEmpty())
            ProgressWidget->setObjectName(QStringLiteral("ProgressWidget"));
        ProgressWidget->resize(765, 543);
        ProgressWidget->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(ProgressWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frameBackground = new QFrame(ProgressWidget);
        frameBackground->setObjectName(QStringLiteral("frameBackground"));
        frameBackground->setStyleSheet(QStringLiteral(""));
        frameBackground->setFrameShape(QFrame::StyledPanel);
        frameBackground->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frameBackground);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widgetSecond = new QWidget(frameBackground);
        widgetSecond->setObjectName(QStringLiteral("widgetSecond"));
        widgetSecond->setStyleSheet(QLatin1String("QFrame #widgetSecond\n"
"{\n"
"background:transparent;border:2px solid white;\n"
"}"));
        gridLayout_5 = new QGridLayout(widgetSecond);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_17 = new QLabel(widgetSecond);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMaximumSize(QSize(80, 50));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/ward_bed.png")));
        label_17->setScaledContents(true);

        gridLayout_5->addWidget(label_17, 0, 0, 1, 1);

        label_18 = new QLabel(widgetSecond);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_5->addWidget(label_18, 0, 1, 1, 1);

        label_19 = new QLabel(widgetSecond);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMaximumSize(QSize(80, 80));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\345\277\203\347\216\207.png")));
        label_19->setScaledContents(true);

        gridLayout_5->addWidget(label_19, 1, 0, 1, 1);

        Heartbeat_3 = new QLabel(widgetSecond);
        Heartbeat_3->setObjectName(QStringLiteral("Heartbeat_3"));
        Heartbeat_3->setMaximumSize(QSize(100, 16777215));
        Heartbeat_3->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_5->addWidget(Heartbeat_3, 1, 1, 1, 1);

        label_16 = new QLabel(widgetSecond);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMaximumSize(QSize(80, 80));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\346\270\251\345\272\246\350\256\241.png")));
        label_16->setScaledContents(true);

        gridLayout_5->addWidget(label_16, 1, 2, 1, 1);

        temperature_3 = new QLabel(widgetSecond);
        temperature_3->setObjectName(QStringLiteral("temperature_3"));
        temperature_3->setMaximumSize(QSize(100, 16777215));
        temperature_3->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_5->addWidget(temperature_3, 1, 3, 1, 1);

        label_20 = new QLabel(widgetSecond);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMaximumSize(QSize(80, 80));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\350\241\200\345\216\213\344\273\252.png")));
        label_20->setScaledContents(true);

        gridLayout_5->addWidget(label_20, 2, 0, 1, 1);

        Diastolic_3 = new QLabel(widgetSecond);
        Diastolic_3->setObjectName(QStringLiteral("Diastolic_3"));
        Diastolic_3->setMaximumSize(QSize(100, 16777215));
        Diastolic_3->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_5->addWidget(Diastolic_3, 2, 1, 1, 1);

        label_15 = new QLabel(widgetSecond);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMaximumSize(QSize(80, 80));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\346\255\245\346\225\260.png")));
        label_15->setScaledContents(true);

        gridLayout_5->addWidget(label_15, 2, 2, 1, 1);

        Steps_3 = new QLabel(widgetSecond);
        Steps_3->setObjectName(QStringLiteral("Steps_3"));
        Steps_3->setMaximumSize(QSize(100, 16777215));
        Steps_3->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_5->addWidget(Steps_3, 2, 3, 1, 1);

        label_21 = new QLabel(widgetSecond);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_5->addWidget(label_21, 0, 3, 1, 1);

        label_30 = new QLabel(widgetSecond);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setMinimumSize(QSize(60, 60));
        label_30->setMaximumSize(QSize(60, 60));
        label_30->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        label_30->setScaledContents(true);

        gridLayout_5->addWidget(label_30, 0, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_2->addWidget(widgetSecond, 0, 1, 1, 1);

        widgetFourth = new QWidget(frameBackground);
        widgetFourth->setObjectName(QStringLiteral("widgetFourth"));
        widgetFourth->setStyleSheet(QLatin1String("QFrame #widgetFourth\n"
"{\n"
"background:transparent;border:2px solid white;\n"
"}"));
        gridLayout_4 = new QGridLayout(widgetFourth);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_9 = new QLabel(widgetFourth);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(80, 50));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/ward_bed.png")));
        label_9->setScaledContents(true);

        gridLayout_4->addWidget(label_9, 0, 0, 1, 1);

        label_10 = new QLabel(widgetFourth);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_4->addWidget(label_10, 0, 1, 1, 1);

        label_12 = new QLabel(widgetFourth);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(80, 80));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\345\277\203\347\216\207.png")));
        label_12->setScaledContents(true);

        gridLayout_4->addWidget(label_12, 1, 0, 1, 1);

        Heartbeat_2 = new QLabel(widgetFourth);
        Heartbeat_2->setObjectName(QStringLiteral("Heartbeat_2"));
        Heartbeat_2->setMaximumSize(QSize(100, 16777215));
        Heartbeat_2->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_4->addWidget(Heartbeat_2, 1, 1, 1, 1);

        label_8 = new QLabel(widgetFourth);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(80, 80));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\346\270\251\345\272\246\350\256\241.png")));
        label_8->setScaledContents(true);

        gridLayout_4->addWidget(label_8, 1, 2, 1, 1);

        temperature_2 = new QLabel(widgetFourth);
        temperature_2->setObjectName(QStringLiteral("temperature_2"));
        temperature_2->setMaximumSize(QSize(100, 16777215));
        temperature_2->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_4->addWidget(temperature_2, 1, 3, 1, 1);

        label_13 = new QLabel(widgetFourth);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMaximumSize(QSize(80, 80));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\350\241\200\345\216\213\344\273\252.png")));
        label_13->setScaledContents(true);

        gridLayout_4->addWidget(label_13, 2, 0, 1, 1);

        Diastolic_2 = new QLabel(widgetFourth);
        Diastolic_2->setObjectName(QStringLiteral("Diastolic_2"));
        Diastolic_2->setMaximumSize(QSize(100, 16777215));
        Diastolic_2->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_4->addWidget(Diastolic_2, 2, 1, 1, 1);

        label_7 = new QLabel(widgetFourth);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(80, 80));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\346\255\245\346\225\260.png")));
        label_7->setScaledContents(true);

        gridLayout_4->addWidget(label_7, 2, 2, 1, 1);

        Steps_2 = new QLabel(widgetFourth);
        Steps_2->setObjectName(QStringLiteral("Steps_2"));
        Steps_2->setMaximumSize(QSize(100, 16777215));
        Steps_2->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_4->addWidget(Steps_2, 2, 3, 1, 1);

        label_14 = new QLabel(widgetFourth);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_4->addWidget(label_14, 0, 3, 1, 1);

        label_32 = new QLabel(widgetFourth);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setMinimumSize(QSize(60, 60));
        label_32->setMaximumSize(QSize(60, 60));
        label_32->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        label_32->setScaledContents(true);

        gridLayout_4->addWidget(label_32, 0, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_2->addWidget(widgetFourth, 1, 1, 1, 1);

        widgetFirst = new QWidget(frameBackground);
        widgetFirst->setObjectName(QStringLiteral("widgetFirst"));
        widgetFirst->setStyleSheet(QLatin1String("QFrame #widgetFirst\n"
"{\n"
"background:transparent;border:2px solid white;\n"
"}"));
        gridLayout_3 = new QGridLayout(widgetFirst);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_6 = new QLabel(widgetFirst);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(80, 50));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/ward_bed.png")));
        label_6->setScaledContents(true);

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        label_5 = new QLabel(widgetFirst);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_3->addWidget(label_5, 0, 1, 1, 1);

        label = new QLabel(widgetFirst);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(80, 80));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\345\277\203\347\216\207.png")));
        label->setScaledContents(true);

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        Heartbeat = new QLabel(widgetFirst);
        Heartbeat->setObjectName(QStringLiteral("Heartbeat"));
        Heartbeat->setMaximumSize(QSize(100, 16777215));
        Heartbeat->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_3->addWidget(Heartbeat, 1, 1, 1, 1, Qt::AlignHCenter);

        label_2 = new QLabel(widgetFirst);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(80, 80));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\346\270\251\345\272\246\350\256\241.png")));
        label_2->setScaledContents(true);

        gridLayout_3->addWidget(label_2, 1, 2, 1, 1);

        temperature = new QLabel(widgetFirst);
        temperature->setObjectName(QStringLiteral("temperature"));
        temperature->setMaximumSize(QSize(100, 16777215));
        temperature->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_3->addWidget(temperature, 1, 3, 1, 1, Qt::AlignHCenter);

        label_3 = new QLabel(widgetFirst);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(80, 80));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\350\241\200\345\216\213\344\273\252.png")));
        label_3->setScaledContents(true);

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        Diastolic = new QLabel(widgetFirst);
        Diastolic->setObjectName(QStringLiteral("Diastolic"));
        Diastolic->setMaximumSize(QSize(100, 16777215));
        Diastolic->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_3->addWidget(Diastolic, 2, 1, 1, 1, Qt::AlignHCenter);

        label_4 = new QLabel(widgetFirst);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(80, 80));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\346\255\245\346\225\260.png")));
        label_4->setScaledContents(true);

        gridLayout_3->addWidget(label_4, 2, 2, 1, 1);

        Steps = new QLabel(widgetFirst);
        Steps->setObjectName(QStringLiteral("Steps"));
        Steps->setMaximumSize(QSize(100, 16777215));
        Steps->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_3->addWidget(Steps, 2, 3, 1, 1, Qt::AlignHCenter);

        label_11 = new QLabel(widgetFirst);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_3->addWidget(label_11, 0, 3, 1, 1);

        label_29 = new QLabel(widgetFirst);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setMinimumSize(QSize(60, 60));
        label_29->setMaximumSize(QSize(60, 60));
        label_29->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        label_29->setScaledContents(true);

        gridLayout_3->addWidget(label_29, 0, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_2->addWidget(widgetFirst, 0, 0, 1, 1);

        widgetThird = new QWidget(frameBackground);
        widgetThird->setObjectName(QStringLiteral("widgetThird"));
        widgetThird->setStyleSheet(QLatin1String("QFrame #widgetThird\n"
"{\n"
"background:transparent;border:2px solid white;\n"
"}"));
        gridLayout_6 = new QGridLayout(widgetThird);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_24 = new QLabel(widgetThird);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setMaximumSize(QSize(80, 50));
        label_24->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/ward_bed.png")));
        label_24->setScaledContents(true);

        gridLayout_6->addWidget(label_24, 0, 0, 1, 1);

        label_25 = new QLabel(widgetThird);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_6->addWidget(label_25, 0, 1, 1, 1);

        label_26 = new QLabel(widgetThird);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setMaximumSize(QSize(80, 80));
        label_26->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\345\277\203\347\216\207.png")));
        label_26->setScaledContents(true);

        gridLayout_6->addWidget(label_26, 1, 0, 1, 1);

        Heartbeat_4 = new QLabel(widgetThird);
        Heartbeat_4->setObjectName(QStringLiteral("Heartbeat_4"));
        Heartbeat_4->setMaximumSize(QSize(100, 16777215));
        Heartbeat_4->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_6->addWidget(Heartbeat_4, 1, 1, 1, 1);

        label_23 = new QLabel(widgetThird);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setMaximumSize(QSize(80, 80));
        label_23->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\346\270\251\345\272\246\350\256\241.png")));
        label_23->setScaledContents(true);

        gridLayout_6->addWidget(label_23, 1, 2, 1, 1);

        temperature_4 = new QLabel(widgetThird);
        temperature_4->setObjectName(QStringLiteral("temperature_4"));
        temperature_4->setMaximumSize(QSize(100, 16777215));
        temperature_4->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_6->addWidget(temperature_4, 1, 3, 1, 1);

        label_27 = new QLabel(widgetThird);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setMaximumSize(QSize(80, 80));
        label_27->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\350\241\200\345\216\213\344\273\252.png")));
        label_27->setScaledContents(true);

        gridLayout_6->addWidget(label_27, 2, 0, 1, 1);

        Diastolic_4 = new QLabel(widgetThird);
        Diastolic_4->setObjectName(QStringLiteral("Diastolic_4"));
        Diastolic_4->setMaximumSize(QSize(100, 16777215));
        Diastolic_4->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_6->addWidget(Diastolic_4, 2, 1, 1, 1);

        label_22 = new QLabel(widgetThird);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMaximumSize(QSize(80, 80));
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/physiological/\346\255\245\346\225\260.png")));
        label_22->setScaledContents(true);

        gridLayout_6->addWidget(label_22, 2, 2, 1, 1);

        Steps_4 = new QLabel(widgetThird);
        Steps_4->setObjectName(QStringLiteral("Steps_4"));
        Steps_4->setMaximumSize(QSize(100, 16777215));
        Steps_4->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout_6->addWidget(Steps_4, 2, 3, 1, 1);

        label_28 = new QLabel(widgetThird);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_6->addWidget(label_28, 0, 3, 1, 1);

        label_31 = new QLabel(widgetThird);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setMinimumSize(QSize(60, 60));
        label_31->setMaximumSize(QSize(60, 60));
        label_31->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        label_31->setScaledContents(true);

        gridLayout_6->addWidget(label_31, 0, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_2->addWidget(widgetThird, 1, 0, 1, 1);


        gridLayout->addWidget(frameBackground, 0, 0, 1, 1);


        retranslateUi(ProgressWidget);

        QMetaObject::connectSlotsByName(ProgressWidget);
    } // setupUi

    void retranslateUi(QWidget *ProgressWidget)
    {
        ProgressWidget->setWindowTitle(QApplication::translate("ProgressWidget", "Form", Q_NULLPTR));
        label_17->setText(QString());
        label_18->setText(QApplication::translate("ProgressWidget", "SCNU-Ward", Q_NULLPTR));
        label_19->setText(QString());
        Heartbeat_3->setText(QApplication::translate("ProgressWidget", "TextLabel", Q_NULLPTR));
        label_16->setText(QString());
        temperature_3->setText(QApplication::translate("ProgressWidget", "temperature", Q_NULLPTR));
        label_20->setText(QString());
        Diastolic_3->setText(QApplication::translate("ProgressWidget", "TextLabel", Q_NULLPTR));
        label_15->setText(QString());
        Steps_3->setText(QApplication::translate("ProgressWidget", "TextLabel", Q_NULLPTR));
        label_21->setText(QApplication::translate("ProgressWidget", "Patient001", Q_NULLPTR));
        label_30->setText(QString());
        label_9->setText(QString());
        label_10->setText(QApplication::translate("ProgressWidget", "SCNU-Ward", Q_NULLPTR));
        label_12->setText(QString());
        Heartbeat_2->setText(QApplication::translate("ProgressWidget", "TextLabel", Q_NULLPTR));
        label_8->setText(QString());
        temperature_2->setText(QApplication::translate("ProgressWidget", "temperature", Q_NULLPTR));
        label_13->setText(QString());
        Diastolic_2->setText(QApplication::translate("ProgressWidget", "TextLabel", Q_NULLPTR));
        label_7->setText(QString());
        Steps_2->setText(QApplication::translate("ProgressWidget", "TextLabel", Q_NULLPTR));
        label_14->setText(QApplication::translate("ProgressWidget", "Patient001", Q_NULLPTR));
        label_32->setText(QString());
        label_6->setText(QString());
        label_5->setText(QApplication::translate("ProgressWidget", "SCNU-Ward", Q_NULLPTR));
        label->setText(QString());
        Heartbeat->setText(QApplication::translate("ProgressWidget", "TextLabel", Q_NULLPTR));
        label_2->setText(QString());
        temperature->setText(QApplication::translate("ProgressWidget", "temperature", Q_NULLPTR));
        label_3->setText(QString());
        Diastolic->setText(QApplication::translate("ProgressWidget", "TextLabel", Q_NULLPTR));
        label_4->setText(QString());
        Steps->setText(QApplication::translate("ProgressWidget", "TextLabel", Q_NULLPTR));
        label_11->setText(QApplication::translate("ProgressWidget", "Patient001", Q_NULLPTR));
        label_29->setText(QString());
        label_24->setText(QString());
        label_25->setText(QApplication::translate("ProgressWidget", "SCNU-Ward", Q_NULLPTR));
        label_26->setText(QString());
        Heartbeat_4->setText(QApplication::translate("ProgressWidget", "TextLabel", Q_NULLPTR));
        label_23->setText(QString());
        temperature_4->setText(QApplication::translate("ProgressWidget", "temperature", Q_NULLPTR));
        label_27->setText(QString());
        Diastolic_4->setText(QApplication::translate("ProgressWidget", "TextLabel", Q_NULLPTR));
        label_22->setText(QString());
        Steps_4->setText(QApplication::translate("ProgressWidget", "TextLabel", Q_NULLPTR));
        label_28->setText(QApplication::translate("ProgressWidget", "Patient001", Q_NULLPTR));
        label_31->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProgressWidget: public Ui_ProgressWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSWIDGET_H
