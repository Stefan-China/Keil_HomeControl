/********************************************************************************
** Form generated from reading UI file 'plotwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTWIDGET_H
#define UI_PLOTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "maincontent/controlwidget/plotcontrol/plotcontrol.h"

QT_BEGIN_NAMESPACE

class Ui_PlotWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *IndoorTemperature;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *CurrentHumidity;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *pm25;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *CO2;
    QLabel *PM10;
    QLabel *TVOC;
    QLabel *label_11;
    QLabel *HCHO;
    QLabel *label_12;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_9;
    PlotControl *widgetSixth;
    PlotControl *widgetFirst;
    PlotControl *widgetSecond;
    PlotControl *widgetFifth;
    PlotControl *widgetFourth;
    PlotControl *widgetThird;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *horizontalSpacer_21;
    PlotControl *widgetSeven;

    void setupUi(QWidget *PlotWidget)
    {
        if (PlotWidget->objectName().isEmpty())
            PlotWidget->setObjectName(QStringLiteral("PlotWidget"));
        PlotWidget->resize(717, 519);
        PlotWidget->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(PlotWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        IndoorTemperature = new QLabel(PlotWidget);
        IndoorTemperature->setObjectName(QStringLiteral("IndoorTemperature"));
        IndoorTemperature->setMinimumSize(QSize(0, 65));
        IndoorTemperature->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout->addWidget(IndoorTemperature, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        CurrentHumidity = new QLabel(PlotWidget);
        CurrentHumidity->setObjectName(QStringLiteral("CurrentHumidity"));
        CurrentHumidity->setMinimumSize(QSize(0, 65));
        CurrentHumidity->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout->addWidget(CurrentHumidity, 1, 3, 1, 1);

        label_2 = new QLabel(PlotWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(65, 65));
        label_2->setMaximumSize(QSize(65, 65));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/detection/Temp.png")));
        label_2->setScaledContents(true);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 4, 1, 1);

        pm25 = new QLabel(PlotWidget);
        pm25->setObjectName(QStringLiteral("pm25"));
        pm25->setMinimumSize(QSize(0, 65));
        pm25->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout->addWidget(pm25, 3, 3, 1, 1);

        label_4 = new QLabel(PlotWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(65, 65));
        label_4->setMaximumSize(QSize(65, 65));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/detection/Humidity.png")));
        label_4->setScaledContents(true);

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label_5 = new QLabel(PlotWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(65, 65));
        label_5->setMaximumSize(QSize(65, 65));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/detection/CO2.png")));
        label_5->setScaledContents(true);

        gridLayout->addWidget(label_5, 2, 1, 1, 1);

        CO2 = new QLabel(PlotWidget);
        CO2->setObjectName(QStringLiteral("CO2"));
        CO2->setMinimumSize(QSize(0, 65));
        CO2->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout->addWidget(CO2, 2, 3, 1, 1);

        PM10 = new QLabel(PlotWidget);
        PM10->setObjectName(QStringLiteral("PM10"));
        PM10->setMinimumSize(QSize(0, 65));
        PM10->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout->addWidget(PM10, 4, 3, 1, 1);

        TVOC = new QLabel(PlotWidget);
        TVOC->setObjectName(QStringLiteral("TVOC"));
        TVOC->setMinimumSize(QSize(0, 65));
        TVOC->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout->addWidget(TVOC, 6, 3, 1, 1);

        label_11 = new QLabel(PlotWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(65, 65));
        label_11->setMaximumSize(QSize(65, 65));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/detection/TVOC.png")));
        label_11->setScaledContents(true);

        gridLayout->addWidget(label_11, 6, 1, 1, 1);

        HCHO = new QLabel(PlotWidget);
        HCHO->setObjectName(QStringLiteral("HCHO"));
        HCHO->setMinimumSize(QSize(0, 65));
        HCHO->setStyleSheet(QLatin1String("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(95, 158, 160);"));

        gridLayout->addWidget(HCHO, 5, 3, 1, 1);

        label_12 = new QLabel(PlotWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(65, 65));
        label_12->setMaximumSize(QSize(65, 65));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/detection/PA.png")));
        label_12->setScaledContents(true);

        gridLayout->addWidget(label_12, 5, 1, 1, 1);

        label_14 = new QLabel(PlotWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(65, 65));
        label_14->setMaximumSize(QSize(65, 65));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/detection/PM2.5.png")));
        label_14->setScaledContents(true);

        gridLayout->addWidget(label_14, 3, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 3, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 4, 2, 1, 1);

        label_13 = new QLabel(PlotWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(65, 65));
        label_13->setMaximumSize(QSize(65, 65));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/detection/PM10.png")));
        label_13->setScaledContents(true);

        gridLayout->addWidget(label_13, 4, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 5, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 2, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 4, 4, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 6, 4, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 2, 4, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_13, 5, 4, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 3, 4, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 6, 2, 1, 1);

        widgetSixth = new PlotControl(PlotWidget);
        widgetSixth->setObjectName(QStringLiteral("widgetSixth"));
        widgetSixth->setMinimumSize(QSize(500, 65));

        gridLayout->addWidget(widgetSixth, 5, 5, 1, 2);

        widgetFirst = new PlotControl(PlotWidget);
        widgetFirst->setObjectName(QStringLiteral("widgetFirst"));
        widgetFirst->setMinimumSize(QSize(500, 65));

        gridLayout->addWidget(widgetFirst, 0, 5, 1, 2);

        widgetSecond = new PlotControl(PlotWidget);
        widgetSecond->setObjectName(QStringLiteral("widgetSecond"));
        widgetSecond->setMinimumSize(QSize(500, 65));

        gridLayout->addWidget(widgetSecond, 1, 5, 1, 2);

        widgetFifth = new PlotControl(PlotWidget);
        widgetFifth->setObjectName(QStringLiteral("widgetFifth"));
        widgetFifth->setMinimumSize(QSize(500, 65));

        gridLayout->addWidget(widgetFifth, 4, 5, 1, 2);

        widgetFourth = new PlotControl(PlotWidget);
        widgetFourth->setObjectName(QStringLiteral("widgetFourth"));
        widgetFourth->setMinimumSize(QSize(500, 65));

        gridLayout->addWidget(widgetFourth, 3, 5, 1, 2);

        widgetThird = new PlotControl(PlotWidget);
        widgetThird->setObjectName(QStringLiteral("widgetThird"));
        widgetThird->setMinimumSize(QSize(500, 65));

        gridLayout->addWidget(widgetThird, 2, 5, 1, 2);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_15, 2, 0, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_16, 1, 0, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_17, 0, 0, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_18, 3, 0, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_19, 4, 0, 1, 1);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_20, 5, 0, 1, 1);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_21, 6, 0, 1, 1);

        widgetSeven = new PlotControl(PlotWidget);
        widgetSeven->setObjectName(QStringLiteral("widgetSeven"));
        widgetSeven->setMinimumSize(QSize(500, 65));

        gridLayout->addWidget(widgetSeven, 6, 5, 1, 2);


        retranslateUi(PlotWidget);

        QMetaObject::connectSlotsByName(PlotWidget);
    } // setupUi

    void retranslateUi(QWidget *PlotWidget)
    {
        PlotWidget->setWindowTitle(QApplication::translate("PlotWidget", "Form", Q_NULLPTR));
        IndoorTemperature->setText(QApplication::translate("PlotWidget", "TextLabel", Q_NULLPTR));
        CurrentHumidity->setText(QApplication::translate("PlotWidget", "TextLabel", Q_NULLPTR));
        label_2->setText(QString());
        pm25->setText(QApplication::translate("PlotWidget", "TextLabel", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QString());
        CO2->setText(QApplication::translate("PlotWidget", "TextLabel", Q_NULLPTR));
        PM10->setText(QApplication::translate("PlotWidget", "TextLabel", Q_NULLPTR));
        TVOC->setText(QApplication::translate("PlotWidget", "TextLabel", Q_NULLPTR));
        label_11->setText(QString());
        HCHO->setText(QApplication::translate("PlotWidget", "TextLabel", Q_NULLPTR));
        label_12->setText(QString());
        label_14->setText(QString());
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PlotWidget: public Ui_PlotWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTWIDGET_H
