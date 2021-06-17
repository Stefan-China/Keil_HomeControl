/********************************************************************************
** Form generated from reading UI file 'bannawidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANNAWIDGET_H
#define UI_BANNAWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <maincontent/controlwidget/bannacontrol/bannacontrol.h>

QT_BEGIN_NAMESPACE

class Ui_BannaWidget
{
public:
    QGridLayout *gridLayout;
    QFrame *frameBackground;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    BannaControl *widgetBanna;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *BannaWidget)
    {
        if (BannaWidget->objectName().isEmpty())
            BannaWidget->setObjectName(QStringLiteral("BannaWidget"));
        BannaWidget->resize(941, 590);
        BannaWidget->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(BannaWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frameBackground = new QFrame(BannaWidget);
        frameBackground->setObjectName(QStringLiteral("frameBackground"));
        frameBackground->setFrameShape(QFrame::StyledPanel);
        frameBackground->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frameBackground);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);

        widgetBanna = new BannaControl(frameBackground);
        widgetBanna->setObjectName(QStringLiteral("widgetBanna"));
        widgetBanna->setMinimumSize(QSize(797, 430));
        widgetBanna->setMaximumSize(QSize(797, 430));

        gridLayout_3->addWidget(widgetBanna, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 77, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 1);


        gridLayout->addWidget(frameBackground, 0, 0, 1, 1);


        retranslateUi(BannaWidget);

        QMetaObject::connectSlotsByName(BannaWidget);
    } // setupUi

    void retranslateUi(QWidget *BannaWidget)
    {
        BannaWidget->setWindowTitle(QApplication::translate("BannaWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BannaWidget: public Ui_BannaWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANNAWIDGET_H
