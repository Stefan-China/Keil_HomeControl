/********************************************************************************
** Form generated from reading UI file 'exerc.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXERC_H
#define UI_EXERC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "exerc_btn.h"

QT_BEGIN_NAMESPACE

class Ui_exerc
{
public:
    QGridLayout *gridLayout_3;
    QWidget *up_widget;
    QGridLayout *gridLayout;
    QLabel *qla_video;
    QHBoxLayout *layout_video;
    QVBoxLayout *layout_video_left;
    QPushButton *btn_video_0;
    QLabel *qla_video_01;
    QLabel *qla_video_02;
    QHBoxLayout *layout_video_right;
    QVBoxLayout *layout_video_1;
    QPushButton *btn_video_1;
    QLabel *qla_video_11;
    QLabel *qla_video_12;
    QPushButton *btn_video_2;
    QLabel *qla_video_21;
    QLabel *qla_video_22;
    QVBoxLayout *layout_video_2;
    QPushButton *btn_video_3;
    QLabel *qla_video_31;
    QLabel *qla_video_32;
    QPushButton *btn_video_4;
    QLabel *qla_video_41;
    QLabel *qla_video_42;
    QVBoxLayout *layout_video_3;
    QPushButton *btn_video_5;
    QLabel *qla_video_51;
    QLabel *qla_video_52;
    QPushButton *btn_video_6;
    QLabel *qla_video_61;
    QLabel *qla_video_62;
    QWidget *down_widget_2;
    QGridLayout *gridLayout_2;
    QLabel *qla_exerc;
    QHBoxLayout *layout_exerc;
    game_btn_web *btn_oper_web;
    QLabel *tc_001;
    game_btn_bird *btn_oper_exerc;
    QLabel *tc_002;
    game_btn_llk *btn_oper_game_llk;
    QLabel *tc_003;
    QPushButton *btn_oper_game_llk_2;

    void setupUi(QWidget *exerc)
    {
        if (exerc->objectName().isEmpty())
            exerc->setObjectName(QStringLiteral("exerc"));
        exerc->resize(1085, 665);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exerc->sizePolicy().hasHeightForWidth());
        exerc->setSizePolicy(sizePolicy);
        exerc->setMinimumSize(QSize(1085, 665));
        gridLayout_3 = new QGridLayout(exerc);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(40);
        gridLayout_3->setContentsMargins(34, 30, 34, 35);
        up_widget = new QWidget(exerc);
        up_widget->setObjectName(QStringLiteral("up_widget"));
        up_widget->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(up_widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        qla_video = new QLabel(up_widget);
        qla_video->setObjectName(QStringLiteral("qla_video"));
        sizePolicy.setHeightForWidth(qla_video->sizePolicy().hasHeightForWidth());
        qla_video->setSizePolicy(sizePolicy);
        qla_video->setMinimumSize(QSize(965, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        qla_video->setFont(font);

        gridLayout->addWidget(qla_video, 0, 0, 1, 1);

        layout_video = new QHBoxLayout();
        layout_video->setSpacing(55);
        layout_video->setObjectName(QStringLiteral("layout_video"));
        layout_video_left = new QVBoxLayout();
        layout_video_left->setSpacing(0);
        layout_video_left->setObjectName(QStringLiteral("layout_video_left"));
        btn_video_0 = new QPushButton(up_widget);
        btn_video_0->setObjectName(QStringLiteral("btn_video_0"));
        sizePolicy.setHeightForWidth(btn_video_0->sizePolicy().hasHeightForWidth());
        btn_video_0->setSizePolicy(sizePolicy);
        btn_video_0->setMinimumSize(QSize(355, 205));
        btn_video_0->setCursor(QCursor(Qt::PointingHandCursor));
        btn_video_0->setStyleSheet(QStringLiteral(""));

        layout_video_left->addWidget(btn_video_0);

        qla_video_01 = new QLabel(up_widget);
        qla_video_01->setObjectName(QStringLiteral("qla_video_01"));
        sizePolicy.setHeightForWidth(qla_video_01->sizePolicy().hasHeightForWidth());
        qla_video_01->setSizePolicy(sizePolicy);
        qla_video_01->setMinimumSize(QSize(355, 50));
        qla_video_01->setFont(font);
        qla_video_01->setStyleSheet(QLatin1String("\n"
"/*background-color:rgb(200,100,100);*/"));

        layout_video_left->addWidget(qla_video_01);

        qla_video_02 = new QLabel(up_widget);
        qla_video_02->setObjectName(QStringLiteral("qla_video_02"));
        sizePolicy.setHeightForWidth(qla_video_02->sizePolicy().hasHeightForWidth());
        qla_video_02->setSizePolicy(sizePolicy);
        qla_video_02->setMinimumSize(QSize(355, 35));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(9);
        qla_video_02->setFont(font1);
        qla_video_02->setStyleSheet(QLatin1String("/*background-color:rgb(200,100,100);*/\n"
""));

        layout_video_left->addWidget(qla_video_02);

        layout_video_left->setStretch(0, 205);
        layout_video_left->setStretch(1, 50);
        layout_video_left->setStretch(2, 35);

        layout_video->addLayout(layout_video_left);

        layout_video_right = new QHBoxLayout();
        layout_video_right->setSpacing(45);
        layout_video_right->setObjectName(QStringLiteral("layout_video_right"));
        layout_video_1 = new QVBoxLayout();
        layout_video_1->setSpacing(0);
        layout_video_1->setObjectName(QStringLiteral("layout_video_1"));
        btn_video_1 = new QPushButton(up_widget);
        btn_video_1->setObjectName(QStringLiteral("btn_video_1"));
        sizePolicy.setHeightForWidth(btn_video_1->sizePolicy().hasHeightForWidth());
        btn_video_1->setSizePolicy(sizePolicy);
        btn_video_1->setMinimumSize(QSize(155, 90));
        btn_video_1->setCursor(QCursor(Qt::PointingHandCursor));

        layout_video_1->addWidget(btn_video_1);

        qla_video_11 = new QLabel(up_widget);
        qla_video_11->setObjectName(QStringLiteral("qla_video_11"));
        sizePolicy.setHeightForWidth(qla_video_11->sizePolicy().hasHeightForWidth());
        qla_video_11->setSizePolicy(sizePolicy);
        qla_video_11->setMinimumSize(QSize(155, 30));
        qla_video_11->setFont(font);
        qla_video_11->setStyleSheet(QStringLiteral("/*background-color:rgb(200,100,100);*/"));

        layout_video_1->addWidget(qla_video_11);

        qla_video_12 = new QLabel(up_widget);
        qla_video_12->setObjectName(QStringLiteral("qla_video_12"));
        sizePolicy.setHeightForWidth(qla_video_12->sizePolicy().hasHeightForWidth());
        qla_video_12->setSizePolicy(sizePolicy);
        qla_video_12->setMinimumSize(QSize(155, 25));
        qla_video_12->setFont(font1);
        qla_video_12->setStyleSheet(QStringLiteral("/*background-color:rgb(200,100,100);*/"));

        layout_video_1->addWidget(qla_video_12);

        btn_video_2 = new QPushButton(up_widget);
        btn_video_2->setObjectName(QStringLiteral("btn_video_2"));
        sizePolicy.setHeightForWidth(btn_video_2->sizePolicy().hasHeightForWidth());
        btn_video_2->setSizePolicy(sizePolicy);
        btn_video_2->setMinimumSize(QSize(155, 90));
        btn_video_2->setCursor(QCursor(Qt::PointingHandCursor));

        layout_video_1->addWidget(btn_video_2);

        qla_video_21 = new QLabel(up_widget);
        qla_video_21->setObjectName(QStringLiteral("qla_video_21"));
        sizePolicy.setHeightForWidth(qla_video_21->sizePolicy().hasHeightForWidth());
        qla_video_21->setSizePolicy(sizePolicy);
        qla_video_21->setMinimumSize(QSize(155, 30));
        qla_video_21->setFont(font);
        qla_video_21->setStyleSheet(QStringLiteral("/*background-color:rgb(200,100,100);*/"));

        layout_video_1->addWidget(qla_video_21);

        qla_video_22 = new QLabel(up_widget);
        qla_video_22->setObjectName(QStringLiteral("qla_video_22"));
        sizePolicy.setHeightForWidth(qla_video_22->sizePolicy().hasHeightForWidth());
        qla_video_22->setSizePolicy(sizePolicy);
        qla_video_22->setMinimumSize(QSize(155, 25));
        qla_video_22->setFont(font1);
        qla_video_22->setStyleSheet(QStringLiteral("/*background-color:rgb(200,100,100);*/"));

        layout_video_1->addWidget(qla_video_22);

        layout_video_1->setStretch(0, 90);
        layout_video_1->setStretch(1, 30);
        layout_video_1->setStretch(2, 25);
        layout_video_1->setStretch(3, 90);
        layout_video_1->setStretch(4, 30);
        layout_video_1->setStretch(5, 25);

        layout_video_right->addLayout(layout_video_1);

        layout_video_2 = new QVBoxLayout();
        layout_video_2->setSpacing(0);
        layout_video_2->setObjectName(QStringLiteral("layout_video_2"));
        btn_video_3 = new QPushButton(up_widget);
        btn_video_3->setObjectName(QStringLiteral("btn_video_3"));
        sizePolicy.setHeightForWidth(btn_video_3->sizePolicy().hasHeightForWidth());
        btn_video_3->setSizePolicy(sizePolicy);
        btn_video_3->setMinimumSize(QSize(155, 90));
        btn_video_3->setCursor(QCursor(Qt::PointingHandCursor));

        layout_video_2->addWidget(btn_video_3);

        qla_video_31 = new QLabel(up_widget);
        qla_video_31->setObjectName(QStringLiteral("qla_video_31"));
        sizePolicy.setHeightForWidth(qla_video_31->sizePolicy().hasHeightForWidth());
        qla_video_31->setSizePolicy(sizePolicy);
        qla_video_31->setMinimumSize(QSize(155, 30));
        qla_video_31->setFont(font);
        qla_video_31->setStyleSheet(QStringLiteral("/*background-color:rgb(200,100,100);*/"));

        layout_video_2->addWidget(qla_video_31);

        qla_video_32 = new QLabel(up_widget);
        qla_video_32->setObjectName(QStringLiteral("qla_video_32"));
        sizePolicy.setHeightForWidth(qla_video_32->sizePolicy().hasHeightForWidth());
        qla_video_32->setSizePolicy(sizePolicy);
        qla_video_32->setMinimumSize(QSize(155, 25));
        qla_video_32->setFont(font1);
        qla_video_32->setStyleSheet(QStringLiteral("/*background-color:rgb(200,100,100);*/"));

        layout_video_2->addWidget(qla_video_32);

        btn_video_4 = new QPushButton(up_widget);
        btn_video_4->setObjectName(QStringLiteral("btn_video_4"));
        sizePolicy.setHeightForWidth(btn_video_4->sizePolicy().hasHeightForWidth());
        btn_video_4->setSizePolicy(sizePolicy);
        btn_video_4->setMinimumSize(QSize(155, 90));
        btn_video_4->setCursor(QCursor(Qt::PointingHandCursor));

        layout_video_2->addWidget(btn_video_4);

        qla_video_41 = new QLabel(up_widget);
        qla_video_41->setObjectName(QStringLiteral("qla_video_41"));
        sizePolicy.setHeightForWidth(qla_video_41->sizePolicy().hasHeightForWidth());
        qla_video_41->setSizePolicy(sizePolicy);
        qla_video_41->setMinimumSize(QSize(155, 30));
        qla_video_41->setFont(font);
        qla_video_41->setStyleSheet(QStringLiteral("/*background-color:rgb(200,100,100);*/"));

        layout_video_2->addWidget(qla_video_41);

        qla_video_42 = new QLabel(up_widget);
        qla_video_42->setObjectName(QStringLiteral("qla_video_42"));
        sizePolicy.setHeightForWidth(qla_video_42->sizePolicy().hasHeightForWidth());
        qla_video_42->setSizePolicy(sizePolicy);
        qla_video_42->setMinimumSize(QSize(155, 25));
        qla_video_42->setFont(font1);
        qla_video_42->setStyleSheet(QStringLiteral("/*background-color:rgb(200,100,100);*/"));

        layout_video_2->addWidget(qla_video_42);

        layout_video_2->setStretch(0, 90);
        layout_video_2->setStretch(1, 30);
        layout_video_2->setStretch(2, 25);
        layout_video_2->setStretch(3, 90);
        layout_video_2->setStretch(4, 30);
        layout_video_2->setStretch(5, 25);

        layout_video_right->addLayout(layout_video_2);

        layout_video_3 = new QVBoxLayout();
        layout_video_3->setSpacing(0);
        layout_video_3->setObjectName(QStringLiteral("layout_video_3"));
        btn_video_5 = new QPushButton(up_widget);
        btn_video_5->setObjectName(QStringLiteral("btn_video_5"));
        sizePolicy.setHeightForWidth(btn_video_5->sizePolicy().hasHeightForWidth());
        btn_video_5->setSizePolicy(sizePolicy);
        btn_video_5->setMinimumSize(QSize(155, 90));
        btn_video_5->setCursor(QCursor(Qt::PointingHandCursor));

        layout_video_3->addWidget(btn_video_5);

        qla_video_51 = new QLabel(up_widget);
        qla_video_51->setObjectName(QStringLiteral("qla_video_51"));
        sizePolicy.setHeightForWidth(qla_video_51->sizePolicy().hasHeightForWidth());
        qla_video_51->setSizePolicy(sizePolicy);
        qla_video_51->setMinimumSize(QSize(155, 30));
        qla_video_51->setFont(font);
        qla_video_51->setStyleSheet(QStringLiteral("/*background-color:rgb(200,100,100);*/"));

        layout_video_3->addWidget(qla_video_51);

        qla_video_52 = new QLabel(up_widget);
        qla_video_52->setObjectName(QStringLiteral("qla_video_52"));
        sizePolicy.setHeightForWidth(qla_video_52->sizePolicy().hasHeightForWidth());
        qla_video_52->setSizePolicy(sizePolicy);
        qla_video_52->setMinimumSize(QSize(155, 25));
        qla_video_52->setFont(font1);
        qla_video_52->setStyleSheet(QStringLiteral("/*background-color:rgb(200,100,100);*/"));

        layout_video_3->addWidget(qla_video_52);

        btn_video_6 = new QPushButton(up_widget);
        btn_video_6->setObjectName(QStringLiteral("btn_video_6"));
        sizePolicy.setHeightForWidth(btn_video_6->sizePolicy().hasHeightForWidth());
        btn_video_6->setSizePolicy(sizePolicy);
        btn_video_6->setMinimumSize(QSize(155, 90));
        btn_video_6->setCursor(QCursor(Qt::PointingHandCursor));

        layout_video_3->addWidget(btn_video_6);

        qla_video_61 = new QLabel(up_widget);
        qla_video_61->setObjectName(QStringLiteral("qla_video_61"));
        sizePolicy.setHeightForWidth(qla_video_61->sizePolicy().hasHeightForWidth());
        qla_video_61->setSizePolicy(sizePolicy);
        qla_video_61->setMinimumSize(QSize(155, 30));
        qla_video_61->setFont(font);
        qla_video_61->setStyleSheet(QStringLiteral("/*background-color:rgb(200,100,100);*/"));

        layout_video_3->addWidget(qla_video_61);

        qla_video_62 = new QLabel(up_widget);
        qla_video_62->setObjectName(QStringLiteral("qla_video_62"));
        sizePolicy.setHeightForWidth(qla_video_62->sizePolicy().hasHeightForWidth());
        qla_video_62->setSizePolicy(sizePolicy);
        qla_video_62->setMinimumSize(QSize(155, 25));
        qla_video_62->setFont(font1);
        qla_video_62->setStyleSheet(QStringLiteral("/*background-color:rgb(200,100,100);*/"));

        layout_video_3->addWidget(qla_video_62);

        layout_video_3->setStretch(0, 90);
        layout_video_3->setStretch(1, 30);
        layout_video_3->setStretch(2, 25);
        layout_video_3->setStretch(3, 90);
        layout_video_3->setStretch(4, 30);
        layout_video_3->setStretch(5, 25);

        layout_video_right->addLayout(layout_video_3);

        layout_video_right->setStretch(0, 155);
        layout_video_right->setStretch(1, 155);
        layout_video_right->setStretch(2, 155);

        layout_video->addLayout(layout_video_right);

        layout_video->setStretch(0, 355);
        layout_video->setStretch(1, 555);

        gridLayout->addLayout(layout_video, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 40);
        gridLayout->setRowStretch(1, 290);

        gridLayout_3->addWidget(up_widget, 0, 0, 1, 1);

        down_widget_2 = new QWidget(exerc);
        down_widget_2->setObjectName(QStringLiteral("down_widget_2"));
        sizePolicy.setHeightForWidth(down_widget_2->sizePolicy().hasHeightForWidth());
        down_widget_2->setSizePolicy(sizePolicy);
        down_widget_2->setStyleSheet(QLatin1String("/*background-color:rgba(255,200,200,0.8);*/\n"
""));
        gridLayout_2 = new QGridLayout(down_widget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(25);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        qla_exerc = new QLabel(down_widget_2);
        qla_exerc->setObjectName(QStringLiteral("qla_exerc"));
        sizePolicy.setHeightForWidth(qla_exerc->sizePolicy().hasHeightForWidth());
        qla_exerc->setSizePolicy(sizePolicy);
        qla_exerc->setMinimumSize(QSize(965, 40));
        qla_exerc->setFont(font);

        gridLayout_2->addWidget(qla_exerc, 0, 0, 1, 1);

        layout_exerc = new QHBoxLayout();
        layout_exerc->setSpacing(0);
        layout_exerc->setObjectName(QStringLiteral("layout_exerc"));
        btn_oper_web = new game_btn_web(down_widget_2);
        btn_oper_web->setObjectName(QStringLiteral("btn_oper_web"));
        sizePolicy.setHeightForWidth(btn_oper_web->sizePolicy().hasHeightForWidth());
        btn_oper_web->setSizePolicy(sizePolicy);
        btn_oper_web->setMinimumSize(QSize(230, 145));
        btn_oper_web->setCursor(QCursor(Qt::PointingHandCursor));

        layout_exerc->addWidget(btn_oper_web);

        tc_001 = new QLabel(down_widget_2);
        tc_001->setObjectName(QStringLiteral("tc_001"));
        sizePolicy.setHeightForWidth(tc_001->sizePolicy().hasHeightForWidth());
        tc_001->setSizePolicy(sizePolicy);
        tc_001->setMinimumSize(QSize(31, 145));
        tc_001->setStyleSheet(QStringLiteral(""));

        layout_exerc->addWidget(tc_001);

        btn_oper_exerc = new game_btn_bird(down_widget_2);
        btn_oper_exerc->setObjectName(QStringLiteral("btn_oper_exerc"));
        sizePolicy.setHeightForWidth(btn_oper_exerc->sizePolicy().hasHeightForWidth());
        btn_oper_exerc->setSizePolicy(sizePolicy);
        btn_oper_exerc->setMinimumSize(QSize(230, 145));
        btn_oper_exerc->setCursor(QCursor(Qt::PointingHandCursor));

        layout_exerc->addWidget(btn_oper_exerc);

        tc_002 = new QLabel(down_widget_2);
        tc_002->setObjectName(QStringLiteral("tc_002"));
        sizePolicy.setHeightForWidth(tc_002->sizePolicy().hasHeightForWidth());
        tc_002->setSizePolicy(sizePolicy);
        tc_002->setMinimumSize(QSize(31, 145));
        tc_002->setStyleSheet(QStringLiteral(""));

        layout_exerc->addWidget(tc_002);

        btn_oper_game_llk = new game_btn_llk(down_widget_2);
        btn_oper_game_llk->setObjectName(QStringLiteral("btn_oper_game_llk"));
        sizePolicy.setHeightForWidth(btn_oper_game_llk->sizePolicy().hasHeightForWidth());
        btn_oper_game_llk->setSizePolicy(sizePolicy);
        btn_oper_game_llk->setMinimumSize(QSize(230, 145));
        btn_oper_game_llk->setCursor(QCursor(Qt::PointingHandCursor));

        layout_exerc->addWidget(btn_oper_game_llk);

        tc_003 = new QLabel(down_widget_2);
        tc_003->setObjectName(QStringLiteral("tc_003"));
        sizePolicy.setHeightForWidth(tc_003->sizePolicy().hasHeightForWidth());
        tc_003->setSizePolicy(sizePolicy);
        tc_003->setMinimumSize(QSize(31, 145));
        tc_003->setStyleSheet(QStringLiteral(""));

        layout_exerc->addWidget(tc_003);

        btn_oper_game_llk_2 = new QPushButton(down_widget_2);
        btn_oper_game_llk_2->setObjectName(QStringLiteral("btn_oper_game_llk_2"));
        btn_oper_game_llk_2->setEnabled(false);
        sizePolicy.setHeightForWidth(btn_oper_game_llk_2->sizePolicy().hasHeightForWidth());
        btn_oper_game_llk_2->setSizePolicy(sizePolicy);
        btn_oper_game_llk_2->setMinimumSize(QSize(230, 145));
        btn_oper_game_llk_2->setCursor(QCursor(Qt::PointingHandCursor));

        layout_exerc->addWidget(btn_oper_game_llk_2);

        layout_exerc->setStretch(0, 230);
        layout_exerc->setStretch(1, 30);
        layout_exerc->setStretch(2, 230);
        layout_exerc->setStretch(3, 30);
        layout_exerc->setStretch(4, 230);
        layout_exerc->setStretch(5, 30);
        layout_exerc->setStretch(6, 230);

        gridLayout_2->addLayout(layout_exerc, 1, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 40);
        gridLayout_2->setRowStretch(1, 145);

        gridLayout_3->addWidget(down_widget_2, 1, 0, 1, 1);

        gridLayout_3->setRowStretch(0, 340);
        gridLayout_3->setRowStretch(1, 210);

        retranslateUi(exerc);

        QMetaObject::connectSlotsByName(exerc);
    } // setupUi

    void retranslateUi(QWidget *exerc)
    {
        exerc->setWindowTitle(QApplication::translate("exerc", "Form", Q_NULLPTR));
        qla_video->setText(QApplication::translate("exerc", "\346\225\231\345\255\246\350\247\206\351\242\221", Q_NULLPTR));
        btn_video_0->setText(QString());
        qla_video_01->setText(QApplication::translate("exerc", "\350\204\221\346\216\247\350\275\256\346\244\205", Q_NULLPTR));
        qla_video_02->setText(QApplication::translate("exerc", "\350\204\221\346\216\247\350\275\256\346\244\205\347\233\270\345\205\263\347\256\200\345\215\225\346\217\217\350\277\260\350\204\221\346\216\247\350\275\256\346\244\205\351\227\262\351\200\233\347\256\200\345\215\225\346\217\217\350\277\260", Q_NULLPTR));
        btn_video_1->setText(QString());
        qla_video_11->setText(QApplication::translate("exerc", "\350\204\221\346\216\247\350\275\256\346\244\205", Q_NULLPTR));
        qla_video_12->setText(QApplication::translate("exerc", "\350\204\221\346\216\247\350\275\256\346\244\205\347\233\270\345\205\263\347\256\200\345\215\225\346\217\217\350\277\260\350\204\221\346\216\247\350\275\256\346\244\205\351\227\262\351\200\233\347\256\200\345\215\225\346\217\217\350\277\260", Q_NULLPTR));
        btn_video_2->setText(QString());
        qla_video_21->setText(QApplication::translate("exerc", "\350\204\221\346\216\247\350\275\256\346\244\205", Q_NULLPTR));
        qla_video_22->setText(QApplication::translate("exerc", "\350\204\221\346\216\247\350\275\256\346\244\205\347\233\270\345\205\263\347\256\200\345\215\225\346\217\217\350\277\260\350\204\221\346\216\247\350\275\256\346\244\205\351\227\262\351\200\233\347\256\200\345\215\225\346\217\217\350\277\260", Q_NULLPTR));
        btn_video_3->setText(QString());
        qla_video_31->setText(QApplication::translate("exerc", "\350\204\221\346\216\247\350\275\256\346\244\205", Q_NULLPTR));
        qla_video_32->setText(QApplication::translate("exerc", "\350\204\221\346\216\247\350\275\256\346\244\205\347\233\270\345\205\263\347\256\200\345\215\225\346\217\217\350\277\260\350\204\221\346\216\247\350\275\256\346\244\205\351\227\262\351\200\233\347\256\200\345\215\225\346\217\217\350\277\260", Q_NULLPTR));
        btn_video_4->setText(QString());
        qla_video_41->setText(QApplication::translate("exerc", "\350\204\221\346\216\247\350\275\256\346\244\205", Q_NULLPTR));
        qla_video_42->setText(QApplication::translate("exerc", "\350\204\221\346\216\247\350\275\256\346\244\205\347\233\270\345\205\263\347\256\200\345\215\225\346\217\217\350\277\260\350\204\221\346\216\247\350\275\256\346\244\205\351\227\262\351\200\233\347\256\200\345\215\225\346\217\217\350\277\260", Q_NULLPTR));
        btn_video_5->setText(QString());
        qla_video_51->setText(QApplication::translate("exerc", "\350\204\221\346\216\247\350\275\256\346\244\205", Q_NULLPTR));
        qla_video_52->setText(QApplication::translate("exerc", "\350\204\221\346\216\247\350\275\256\346\244\205\347\233\270\345\205\263\347\256\200\345\215\225\346\217\217\350\277\260\350\204\221\346\216\247\350\275\256\346\244\205\351\227\262\351\200\233\347\256\200\345\215\225\346\217\217\350\277\260", Q_NULLPTR));
        btn_video_6->setText(QString());
        qla_video_61->setText(QApplication::translate("exerc", "\350\204\221\346\216\247\350\275\256\346\244\205", Q_NULLPTR));
        qla_video_62->setText(QApplication::translate("exerc", "\350\204\221\346\216\247\350\275\256\346\244\205\347\233\270\345\205\263\347\256\200\345\215\225\346\217\217\350\277\260\350\204\221\346\216\247\350\275\256\346\244\205\351\227\262\351\200\233\347\256\200\345\215\225\346\217\217\350\277\260", Q_NULLPTR));
        qla_exerc->setText(QApplication::translate("exerc", " \346\223\215\344\275\234\347\206\237\347\273\203\345\272\246\350\256\255\347\273\203", Q_NULLPTR));
        btn_oper_web->setText(QApplication::translate("exerc", "\347\275\221\351\241\265\346\265\217\350\247\210\345\231\250", Q_NULLPTR));
        tc_001->setText(QString());
        btn_oper_exerc->setText(QApplication::translate("exerc", "\346\223\215\344\275\234\350\256\255\347\273\203", Q_NULLPTR));
        tc_002->setText(QString());
        btn_oper_game_llk->setText(QApplication::translate("exerc", "\350\277\236\350\277\236\347\234\213", Q_NULLPTR));
        tc_003->setText(QString());
        btn_oper_game_llk_2->setText(QApplication::translate("exerc", "\346\225\254\350\257\267\346\234\237\345\276\205", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class exerc: public Ui_exerc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERC_H
