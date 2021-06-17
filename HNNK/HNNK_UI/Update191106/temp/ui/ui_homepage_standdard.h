/********************************************************************************
** Form generated from reading UI file 'homepage_standdard.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_STANDDARD_H
#define UI_HOMEPAGE_STANDDARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "base_btn.h"

QT_BEGIN_NAMESPACE

class Ui_homepage_standdard
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *qla_BG;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_shortcut;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_4;
    btn_TJ *btn_add;
    QSpacerItem *verticalSpacer_5;
    btn_SC *btn_del;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *homepage_standdard)
    {
        if (homepage_standdard->objectName().isEmpty())
            homepage_standdard->setObjectName(QStringLiteral("homepage_standdard"));
        homepage_standdard->resize(1085, 655);
        gridLayout = new QGridLayout(homepage_standdard);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 33, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        qla_BG = new QLabel(homepage_standdard);
        qla_BG->setObjectName(QStringLiteral("qla_BG"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qla_BG->sizePolicy().hasHeightForWidth());
        qla_BG->setSizePolicy(sizePolicy);
        qla_BG->setMinimumSize(QSize(1014, 300));
        QFont font;
        font.setPointSize(150);
        qla_BG->setFont(font);
        qla_BG->setStyleSheet(QLatin1String("/*background-color:rgb(255,200,200);*/\n"
"\n"
""));
        qla_BG->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(qla_BG);

        verticalSpacer = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget_shortcut = new QWidget(homepage_standdard);
        widget_shortcut->setObjectName(QStringLiteral("widget_shortcut"));
        widget_shortcut->setStyleSheet(QStringLiteral("/*background-color:red;*/"));

        horizontalLayout->addWidget(widget_shortcut);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget = new QWidget(homepage_standdard);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(134, 259));
        widget->setStyleSheet(QStringLiteral("background-color:rgb(235,249,249);"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        btn_add = new btn_TJ(widget);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        sizePolicy.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy);
        btn_add->setMinimumSize(QSize(108, 40));
        btn_add->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_3->addWidget(btn_add);

        verticalSpacer_5 = new QSpacerItem(20, 97, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        btn_del = new btn_SC(widget);
        btn_del->setObjectName(QStringLiteral("btn_del"));
        sizePolicy.setHeightForWidth(btn_del->sizePolicy().hasHeightForWidth());
        btn_del->setSizePolicy(sizePolicy);
        btn_del->setMinimumSize(QSize(108, 40));

        verticalLayout_3->addWidget(btn_del);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        verticalLayout_3->setStretch(0, 40);
        verticalLayout_3->setStretch(1, 40);
        verticalLayout_3->setStretch(2, 97);
        verticalLayout_3->setStretch(3, 40);
        verticalLayout_3->setStretch(4, 40);

        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        horizontalLayout_3->setStretch(0, 13);
        horizontalLayout_3->setStretch(1, 108);
        horizontalLayout_3->setStretch(2, 13);

        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        horizontalLayout->addWidget(widget);

        horizontalLayout->setStretch(0, 850);
        horizontalLayout->setStretch(1, 30);
        horizontalLayout->setStretch(2, 134);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 36, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout_2->setStretch(0, 33);
        verticalLayout_2->setStretch(1, 300);
        verticalLayout_2->setStretch(2, 27);
        verticalLayout_2->setStretch(3, 259);
        verticalLayout_2->setStretch(4, 36);

        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout_2->setStretch(0, 38);
        horizontalLayout_2->setStretch(1, 1014);
        horizontalLayout_2->setStretch(2, 33);

        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(homepage_standdard);

        QMetaObject::connectSlotsByName(homepage_standdard);
    } // setupUi

    void retranslateUi(QWidget *homepage_standdard)
    {
        homepage_standdard->setWindowTitle(QApplication::translate("homepage_standdard", "Form", Q_NULLPTR));
        qla_BG->setText(QApplication::translate("homepage_standdard", "\342\200\224\342\200\224\342\200\224\342\200\224\346\250\252\345\271\205\342\200\224\342\200\224\342\200\224\342\200\224", Q_NULLPTR));
        btn_add->setText(QApplication::translate("homepage_standdard", "PushButton", Q_NULLPTR));
        btn_del->setText(QApplication::translate("homepage_standdard", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class homepage_standdard: public Ui_homepage_standdard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_STANDDARD_H
