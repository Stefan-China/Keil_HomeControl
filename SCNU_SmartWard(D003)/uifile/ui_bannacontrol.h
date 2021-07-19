/********************************************************************************
** Form generated from reading UI file 'bannacontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANNACONTROL_H
#define UI_BANNACONTROL_H

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

class Ui_BannaControl
{
public:
    QGridLayout *gridLayout;
    QWidget *widgetImage;
    QLabel *labelFirst;
    QLabel *labelSecond;
    QLabel *labelThird;
    QLabel *labelFourth;
    QLabel *labelFifth;
    QPushButton *pushButtonLeft;
    QPushButton *pushButtonRight;
    QFrame *frameDot;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonFirst;
    QPushButton *pushButtonSecond;
    QPushButton *pushButtonThird;
    QPushButton *pushButtonFourth;
    QPushButton *pushButtonFifth;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *BannaControl)
    {
        if (BannaControl->objectName().isEmpty())
            BannaControl->setObjectName(QStringLiteral("BannaControl"));
        BannaControl->resize(797, 430);
        BannaControl->setStyleSheet(QLatin1String("QWidget,QFrame\n"
"{\n"
"background-color: #DEF0FE;\n"
"}"));
        gridLayout = new QGridLayout(BannaControl);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widgetImage = new QWidget(BannaControl);
        widgetImage->setObjectName(QStringLiteral("widgetImage"));
        widgetImage->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-radius:6px;\n"
"}"));
        labelFirst = new QLabel(widgetImage);
        labelFirst->setObjectName(QStringLiteral("labelFirst"));
        labelFirst->setGeometry(QRect(20, 100, 320, 200));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelFirst->sizePolicy().hasHeightForWidth());
        labelFirst->setSizePolicy(sizePolicy);
        labelSecond = new QLabel(widgetImage);
        labelSecond->setObjectName(QStringLiteral("labelSecond"));
        labelSecond->setGeometry(QRect(70, 70, 400, 250));
        sizePolicy.setHeightForWidth(labelSecond->sizePolicy().hasHeightForWidth());
        labelSecond->setSizePolicy(sizePolicy);
        labelThird = new QLabel(widgetImage);
        labelThird->setObjectName(QStringLiteral("labelThird"));
        labelThird->setGeometry(QRect(150, 50, 480, 300));
        sizePolicy.setHeightForWidth(labelThird->sizePolicy().hasHeightForWidth());
        labelThird->setSizePolicy(sizePolicy);
        labelFourth = new QLabel(widgetImage);
        labelFourth->setObjectName(QStringLiteral("labelFourth"));
        labelFourth->setGeometry(QRect(330, 70, 400, 250));
        sizePolicy.setHeightForWidth(labelFourth->sizePolicy().hasHeightForWidth());
        labelFourth->setSizePolicy(sizePolicy);
        labelFifth = new QLabel(widgetImage);
        labelFifth->setObjectName(QStringLiteral("labelFifth"));
        labelFifth->setGeometry(QRect(470, 100, 320, 200));
        sizePolicy.setHeightForWidth(labelFifth->sizePolicy().hasHeightForWidth());
        labelFifth->setSizePolicy(sizePolicy);
        pushButtonLeft = new QPushButton(widgetImage);
        pushButtonLeft->setObjectName(QStringLiteral("pushButtonLeft"));
        pushButtonLeft->setGeometry(QRect(20, 180, 48, 48));
        sizePolicy.setHeightForWidth(pushButtonLeft->sizePolicy().hasHeightForWidth());
        pushButtonLeft->setSizePolicy(sizePolicy);
        pushButtonLeft->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-image: url(:/res/res/image/other/less_than.png);"));
        pushButtonRight = new QPushButton(widgetImage);
        pushButtonRight->setObjectName(QStringLiteral("pushButtonRight"));
        pushButtonRight->setGeometry(QRect(740, 180, 48, 48));
        sizePolicy.setHeightForWidth(pushButtonRight->sizePolicy().hasHeightForWidth());
        pushButtonRight->setSizePolicy(sizePolicy);
        pushButtonRight->setStyleSheet(QLatin1String("background-color: transparent;background-color: transparent;\n"
"border-image: url(:/res/res/image/other/more_than.png);"));

        gridLayout->addWidget(widgetImage, 0, 0, 1, 1);

        frameDot = new QFrame(BannaControl);
        frameDot->setObjectName(QStringLiteral("frameDot"));
        frameDot->setMinimumSize(QSize(0, 30));
        frameDot->setMaximumSize(QSize(16777215, 80));
        frameDot->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-image: url(:/res/res/image/other/normal_gray.png);\n"
"}\n"
"\n"
"QPushButton:checked\n"
"{\n"
"border-image: url(:/res/res/image/other/hover_blue.png);\n"
"}"));
        frameDot->setFrameShape(QFrame::StyledPanel);
        frameDot->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frameDot);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 25, 0, 35);
        horizontalSpacer = new QSpacerItem(287, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButtonFirst = new QPushButton(frameDot);
        pushButtonFirst->setObjectName(QStringLiteral("pushButtonFirst"));
        pushButtonFirst->setMinimumSize(QSize(16, 16));
        pushButtonFirst->setMaximumSize(QSize(16, 16));
        pushButtonFirst->setCheckable(true);

        gridLayout_2->addWidget(pushButtonFirst, 0, 1, 1, 1);

        pushButtonSecond = new QPushButton(frameDot);
        pushButtonSecond->setObjectName(QStringLiteral("pushButtonSecond"));
        pushButtonSecond->setMinimumSize(QSize(16, 16));
        pushButtonSecond->setMaximumSize(QSize(16, 16));
        pushButtonSecond->setCheckable(true);

        gridLayout_2->addWidget(pushButtonSecond, 0, 2, 1, 1);

        pushButtonThird = new QPushButton(frameDot);
        pushButtonThird->setObjectName(QStringLiteral("pushButtonThird"));
        pushButtonThird->setMinimumSize(QSize(16, 16));
        pushButtonThird->setMaximumSize(QSize(16, 16));
        pushButtonThird->setCheckable(true);
        pushButtonThird->setChecked(true);

        gridLayout_2->addWidget(pushButtonThird, 0, 3, 1, 1);

        pushButtonFourth = new QPushButton(frameDot);
        pushButtonFourth->setObjectName(QStringLiteral("pushButtonFourth"));
        pushButtonFourth->setMinimumSize(QSize(16, 16));
        pushButtonFourth->setMaximumSize(QSize(16, 16));
        pushButtonFourth->setCheckable(true);

        gridLayout_2->addWidget(pushButtonFourth, 0, 4, 1, 1);

        pushButtonFifth = new QPushButton(frameDot);
        pushButtonFifth->setObjectName(QStringLiteral("pushButtonFifth"));
        pushButtonFifth->setMinimumSize(QSize(16, 16));
        pushButtonFifth->setMaximumSize(QSize(16, 16));
        pushButtonFifth->setCheckable(true);

        gridLayout_2->addWidget(pushButtonFifth, 0, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(287, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 6, 1, 1);


        gridLayout->addWidget(frameDot, 1, 0, 1, 1);


        retranslateUi(BannaControl);

        QMetaObject::connectSlotsByName(BannaControl);
    } // setupUi

    void retranslateUi(QWidget *BannaControl)
    {
        BannaControl->setWindowTitle(QApplication::translate("BannaControl", "BannaWidget", Q_NULLPTR));
        labelFirst->setText(QString());
        labelSecond->setText(QString());
        labelThird->setText(QString());
        labelFourth->setText(QString());
        labelFifth->setText(QString());
        pushButtonLeft->setText(QString());
        pushButtonRight->setText(QString());
        pushButtonFirst->setText(QString());
        pushButtonSecond->setText(QString());
        pushButtonThird->setText(QString());
        pushButtonFourth->setText(QString());
        pushButtonFifth->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BannaControl: public Ui_BannaControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANNACONTROL_H
