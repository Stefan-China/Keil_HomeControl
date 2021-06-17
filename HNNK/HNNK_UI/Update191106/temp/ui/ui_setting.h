/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setting
{
public:
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_setting;
    QGridLayout *gridLayout_3;
    QSpacerItem *th;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *th_01;
    QWidget *widget_left;
    QGridLayout *gridLayout;
    QHBoxLayout *layout_hor_00;
    QLabel *qla_setting_normal;
    QLabel *tc_qla_00;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *layout_hor_01;
    QLabel *qla_setting_keyboard_skin;
    QLabel *tc_qla_01;
    QComboBox *comboBox_skin;
    QLabel *tc_qla_02;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *layout_hor_02;
    QLabel *qla_setting_keyboard_size;
    QLabel *tc_qla_03;
    QRadioButton *radio_btn_big;
    QLabel *tc_qla_04;
    QRadioButton *radio_btn_medium;
    QLabel *tc_qla_05;
    QRadioButton *radio_btn_small;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *qla_setting_hoverwindow;
    QLabel *tc_qla_11;
    QPushButton *btn_change_ShowNotShow;
    QLabel *tc_qla_14;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *layout_hor_04;
    QLabel *qla_setting_shortcut;
    QLabel *tc_qla_08;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *layout_hor_05;
    QLabel *qla_setting_align;
    QLabel *tc_qla_09;
    QComboBox *comboBox_shortcut;
    QLabel *tc_qla_10;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *qla_setting_changepassword;
    QLabel *tc_qla_9;
    QPushButton *btn_change_PW;
    QLabel *tc_qla_13;
    QSpacerItem *th_02;
    QWidget *widget_right;
    QGridLayout *layout_right;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *qla_show_setting;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *th_03;
    QSpacerItem *th_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_ok;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *th_3;
    QWidget *page_update;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_setting;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btn_update;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QFrame *line_2;

    void setupUi(QWidget *setting)
    {
        if (setting->objectName().isEmpty())
            setting->setObjectName(QStringLiteral("setting"));
        setting->resize(1085, 655);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(setting->sizePolicy().hasHeightForWidth());
        setting->setSizePolicy(sizePolicy);
        setting->setMinimumSize(QSize(1085, 655));
        setting->setMaximumSize(QSize(10855, 16777215));
        gridLayout_2 = new QGridLayout(setting);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(setting);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(1085, 577));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page_setting = new QWidget();
        page_setting->setObjectName(QStringLiteral("page_setting"));
        gridLayout_3 = new QGridLayout(page_setting);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        th = new QSpacerItem(20, 64, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(th, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        th_01 = new QSpacerItem(64, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(th_01);

        widget_left = new QWidget(page_setting);
        widget_left->setObjectName(QStringLiteral("widget_left"));
        sizePolicy.setHeightForWidth(widget_left->sizePolicy().hasHeightForWidth());
        widget_left->setSizePolicy(sizePolicy);
        widget_left->setMinimumSize(QSize(327, 370));
        widget_left->setMaximumSize(QSize(16777215, 16777215));
        widget_left->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(widget_left);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        layout_hor_00 = new QHBoxLayout();
        layout_hor_00->setSpacing(0);
        layout_hor_00->setObjectName(QStringLiteral("layout_hor_00"));
        qla_setting_normal = new QLabel(widget_left);
        qla_setting_normal->setObjectName(QStringLiteral("qla_setting_normal"));
        sizePolicy.setHeightForWidth(qla_setting_normal->sizePolicy().hasHeightForWidth());
        qla_setting_normal->setSizePolicy(sizePolicy);
        qla_setting_normal->setMinimumSize(QSize(72, 20));
        QFont font;
        font.setPointSize(10);
        qla_setting_normal->setFont(font);
        qla_setting_normal->setStyleSheet(QStringLiteral(""));
        qla_setting_normal->setAlignment(Qt::AlignCenter);

        layout_hor_00->addWidget(qla_setting_normal);

        tc_qla_00 = new QLabel(widget_left);
        tc_qla_00->setObjectName(QStringLiteral("tc_qla_00"));
        sizePolicy.setHeightForWidth(tc_qla_00->sizePolicy().hasHeightForWidth());
        tc_qla_00->setSizePolicy(sizePolicy);
        tc_qla_00->setMinimumSize(QSize(255, 20));
        tc_qla_00->setLayoutDirection(Qt::LeftToRight);
        tc_qla_00->setStyleSheet(QStringLiteral(""));
        tc_qla_00->setAlignment(Qt::AlignCenter);

        layout_hor_00->addWidget(tc_qla_00);

        layout_hor_00->setStretch(0, 72);
        layout_hor_00->setStretch(1, 255);

        gridLayout->addLayout(layout_hor_00, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 1, 0, 1, 1);

        layout_hor_01 = new QHBoxLayout();
        layout_hor_01->setSpacing(0);
        layout_hor_01->setObjectName(QStringLiteral("layout_hor_01"));
        layout_hor_01->setContentsMargins(-1, -1, 0, -1);
        qla_setting_keyboard_skin = new QLabel(widget_left);
        qla_setting_keyboard_skin->setObjectName(QStringLiteral("qla_setting_keyboard_skin"));
        sizePolicy.setHeightForWidth(qla_setting_keyboard_skin->sizePolicy().hasHeightForWidth());
        qla_setting_keyboard_skin->setSizePolicy(sizePolicy);
        qla_setting_keyboard_skin->setMinimumSize(QSize(72, 20));
        qla_setting_keyboard_skin->setFont(font);
        qla_setting_keyboard_skin->setStyleSheet(QStringLiteral(""));
        qla_setting_keyboard_skin->setAlignment(Qt::AlignCenter);

        layout_hor_01->addWidget(qla_setting_keyboard_skin);

        tc_qla_01 = new QLabel(widget_left);
        tc_qla_01->setObjectName(QStringLiteral("tc_qla_01"));
        sizePolicy.setHeightForWidth(tc_qla_01->sizePolicy().hasHeightForWidth());
        tc_qla_01->setSizePolicy(sizePolicy);
        tc_qla_01->setMinimumSize(QSize(45, 20));
        tc_qla_01->setLayoutDirection(Qt::LeftToRight);
        tc_qla_01->setStyleSheet(QStringLiteral(""));
        tc_qla_01->setAlignment(Qt::AlignCenter);

        layout_hor_01->addWidget(tc_qla_01);

        comboBox_skin = new QComboBox(widget_left);
        comboBox_skin->setObjectName(QStringLiteral("comboBox_skin"));
        sizePolicy.setHeightForWidth(comboBox_skin->sizePolicy().hasHeightForWidth());
        comboBox_skin->setSizePolicy(sizePolicy);
        comboBox_skin->setMinimumSize(QSize(75, 20));
        QFont font1;
        font1.setPointSize(9);
        comboBox_skin->setFont(font1);
        comboBox_skin->setLayoutDirection(Qt::LeftToRight);
        comboBox_skin->setStyleSheet(QStringLiteral(""));

        layout_hor_01->addWidget(comboBox_skin);

        tc_qla_02 = new QLabel(widget_left);
        tc_qla_02->setObjectName(QStringLiteral("tc_qla_02"));
        sizePolicy.setHeightForWidth(tc_qla_02->sizePolicy().hasHeightForWidth());
        tc_qla_02->setSizePolicy(sizePolicy);
        tc_qla_02->setMinimumSize(QSize(135, 20));
        tc_qla_02->setLayoutDirection(Qt::LeftToRight);
        tc_qla_02->setStyleSheet(QStringLiteral(""));
        tc_qla_02->setAlignment(Qt::AlignCenter);

        layout_hor_01->addWidget(tc_qla_02);

        layout_hor_01->setStretch(0, 72);
        layout_hor_01->setStretch(1, 45);
        layout_hor_01->setStretch(2, 75);
        layout_hor_01->setStretch(3, 135);

        gridLayout->addLayout(layout_hor_01, 2, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 3, 0, 1, 1);

        layout_hor_02 = new QHBoxLayout();
        layout_hor_02->setSpacing(0);
        layout_hor_02->setObjectName(QStringLiteral("layout_hor_02"));
        qla_setting_keyboard_size = new QLabel(widget_left);
        qla_setting_keyboard_size->setObjectName(QStringLiteral("qla_setting_keyboard_size"));
        sizePolicy.setHeightForWidth(qla_setting_keyboard_size->sizePolicy().hasHeightForWidth());
        qla_setting_keyboard_size->setSizePolicy(sizePolicy);
        qla_setting_keyboard_size->setMinimumSize(QSize(72, 20));
        qla_setting_keyboard_size->setFont(font);
        qla_setting_keyboard_size->setStyleSheet(QStringLiteral(""));
        qla_setting_keyboard_size->setAlignment(Qt::AlignCenter);

        layout_hor_02->addWidget(qla_setting_keyboard_size);

        tc_qla_03 = new QLabel(widget_left);
        tc_qla_03->setObjectName(QStringLiteral("tc_qla_03"));
        sizePolicy.setHeightForWidth(tc_qla_03->sizePolicy().hasHeightForWidth());
        tc_qla_03->setSizePolicy(sizePolicy);
        tc_qla_03->setMinimumSize(QSize(45, 20));
        tc_qla_03->setLayoutDirection(Qt::LeftToRight);
        tc_qla_03->setStyleSheet(QStringLiteral(""));
        tc_qla_03->setAlignment(Qt::AlignCenter);

        layout_hor_02->addWidget(tc_qla_03);

        radio_btn_big = new QRadioButton(widget_left);
        radio_btn_big->setObjectName(QStringLiteral("radio_btn_big"));
        sizePolicy.setHeightForWidth(radio_btn_big->sizePolicy().hasHeightForWidth());
        radio_btn_big->setSizePolicy(sizePolicy);
        radio_btn_big->setMinimumSize(QSize(50, 20));
        radio_btn_big->setFont(font);
        radio_btn_big->setStyleSheet(QStringLiteral(""));

        layout_hor_02->addWidget(radio_btn_big);

        tc_qla_04 = new QLabel(widget_left);
        tc_qla_04->setObjectName(QStringLiteral("tc_qla_04"));
        sizePolicy.setHeightForWidth(tc_qla_04->sizePolicy().hasHeightForWidth());
        tc_qla_04->setSizePolicy(sizePolicy);
        tc_qla_04->setMinimumSize(QSize(30, 20));
        tc_qla_04->setLayoutDirection(Qt::LeftToRight);
        tc_qla_04->setStyleSheet(QStringLiteral(""));
        tc_qla_04->setAlignment(Qt::AlignCenter);

        layout_hor_02->addWidget(tc_qla_04);

        radio_btn_medium = new QRadioButton(widget_left);
        radio_btn_medium->setObjectName(QStringLiteral("radio_btn_medium"));
        sizePolicy.setHeightForWidth(radio_btn_medium->sizePolicy().hasHeightForWidth());
        radio_btn_medium->setSizePolicy(sizePolicy);
        radio_btn_medium->setMinimumSize(QSize(50, 20));
        radio_btn_medium->setFont(font);
        radio_btn_medium->setStyleSheet(QStringLiteral(""));

        layout_hor_02->addWidget(radio_btn_medium);

        tc_qla_05 = new QLabel(widget_left);
        tc_qla_05->setObjectName(QStringLiteral("tc_qla_05"));
        sizePolicy.setHeightForWidth(tc_qla_05->sizePolicy().hasHeightForWidth());
        tc_qla_05->setSizePolicy(sizePolicy);
        tc_qla_05->setMinimumSize(QSize(30, 20));
        tc_qla_05->setLayoutDirection(Qt::LeftToRight);
        tc_qla_05->setStyleSheet(QStringLiteral(""));
        tc_qla_05->setAlignment(Qt::AlignCenter);

        layout_hor_02->addWidget(tc_qla_05);

        radio_btn_small = new QRadioButton(widget_left);
        radio_btn_small->setObjectName(QStringLiteral("radio_btn_small"));
        sizePolicy.setHeightForWidth(radio_btn_small->sizePolicy().hasHeightForWidth());
        radio_btn_small->setSizePolicy(sizePolicy);
        radio_btn_small->setMinimumSize(QSize(50, 20));
        radio_btn_small->setFont(font);
        radio_btn_small->setStyleSheet(QStringLiteral(""));

        layout_hor_02->addWidget(radio_btn_small);

        layout_hor_02->setStretch(0, 72);
        layout_hor_02->setStretch(1, 45);
        layout_hor_02->setStretch(2, 50);
        layout_hor_02->setStretch(3, 30);
        layout_hor_02->setStretch(4, 50);
        layout_hor_02->setStretch(5, 30);
        layout_hor_02->setStretch(6, 50);

        gridLayout->addLayout(layout_hor_02, 4, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_10, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        qla_setting_hoverwindow = new QLabel(widget_left);
        qla_setting_hoverwindow->setObjectName(QStringLiteral("qla_setting_hoverwindow"));
        sizePolicy.setHeightForWidth(qla_setting_hoverwindow->sizePolicy().hasHeightForWidth());
        qla_setting_hoverwindow->setSizePolicy(sizePolicy);
        qla_setting_hoverwindow->setMinimumSize(QSize(72, 20));
        qla_setting_hoverwindow->setFont(font);
        qla_setting_hoverwindow->setStyleSheet(QStringLiteral(""));
        qla_setting_hoverwindow->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(qla_setting_hoverwindow);

        tc_qla_11 = new QLabel(widget_left);
        tc_qla_11->setObjectName(QStringLiteral("tc_qla_11"));
        sizePolicy.setHeightForWidth(tc_qla_11->sizePolicy().hasHeightForWidth());
        tc_qla_11->setSizePolicy(sizePolicy);
        tc_qla_11->setMinimumSize(QSize(45, 20));
        tc_qla_11->setLayoutDirection(Qt::LeftToRight);
        tc_qla_11->setStyleSheet(QStringLiteral(""));
        tc_qla_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(tc_qla_11);

        btn_change_ShowNotShow = new QPushButton(widget_left);
        btn_change_ShowNotShow->setObjectName(QStringLiteral("btn_change_ShowNotShow"));
        sizePolicy.setHeightForWidth(btn_change_ShowNotShow->sizePolicy().hasHeightForWidth());
        btn_change_ShowNotShow->setSizePolicy(sizePolicy);
        btn_change_ShowNotShow->setMinimumSize(QSize(75, 20));

        horizontalLayout_6->addWidget(btn_change_ShowNotShow);

        tc_qla_14 = new QLabel(widget_left);
        tc_qla_14->setObjectName(QStringLiteral("tc_qla_14"));
        sizePolicy.setHeightForWidth(tc_qla_14->sizePolicy().hasHeightForWidth());
        tc_qla_14->setSizePolicy(sizePolicy);
        tc_qla_14->setMinimumSize(QSize(135, 20));
        tc_qla_14->setLayoutDirection(Qt::LeftToRight);
        tc_qla_14->setStyleSheet(QStringLiteral(""));
        tc_qla_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(tc_qla_14);

        horizontalLayout_6->setStretch(0, 72);
        horizontalLayout_6->setStretch(1, 45);
        horizontalLayout_6->setStretch(2, 75);
        horizontalLayout_6->setStretch(3, 133);

        gridLayout->addLayout(horizontalLayout_6, 6, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 7, 0, 1, 1);

        layout_hor_04 = new QHBoxLayout();
        layout_hor_04->setSpacing(0);
        layout_hor_04->setObjectName(QStringLiteral("layout_hor_04"));
        qla_setting_shortcut = new QLabel(widget_left);
        qla_setting_shortcut->setObjectName(QStringLiteral("qla_setting_shortcut"));
        sizePolicy.setHeightForWidth(qla_setting_shortcut->sizePolicy().hasHeightForWidth());
        qla_setting_shortcut->setSizePolicy(sizePolicy);
        qla_setting_shortcut->setMinimumSize(QSize(90, 20));
        qla_setting_shortcut->setFont(font);
        qla_setting_shortcut->setStyleSheet(QStringLiteral(""));
        qla_setting_shortcut->setAlignment(Qt::AlignCenter);

        layout_hor_04->addWidget(qla_setting_shortcut);

        tc_qla_08 = new QLabel(widget_left);
        tc_qla_08->setObjectName(QStringLiteral("tc_qla_08"));
        sizePolicy.setHeightForWidth(tc_qla_08->sizePolicy().hasHeightForWidth());
        tc_qla_08->setSizePolicy(sizePolicy);
        tc_qla_08->setMinimumSize(QSize(237, 20));
        tc_qla_08->setLayoutDirection(Qt::LeftToRight);
        tc_qla_08->setStyleSheet(QStringLiteral(""));
        tc_qla_08->setAlignment(Qt::AlignCenter);

        layout_hor_04->addWidget(tc_qla_08);

        layout_hor_04->setStretch(0, 90);
        layout_hor_04->setStretch(1, 237);

        gridLayout->addLayout(layout_hor_04, 8, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 9, 0, 1, 1);

        layout_hor_05 = new QHBoxLayout();
        layout_hor_05->setSpacing(0);
        layout_hor_05->setObjectName(QStringLiteral("layout_hor_05"));
        qla_setting_align = new QLabel(widget_left);
        qla_setting_align->setObjectName(QStringLiteral("qla_setting_align"));
        sizePolicy.setHeightForWidth(qla_setting_align->sizePolicy().hasHeightForWidth());
        qla_setting_align->setSizePolicy(sizePolicy);
        qla_setting_align->setMinimumSize(QSize(72, 20));
        qla_setting_align->setFont(font);
        qla_setting_align->setStyleSheet(QStringLiteral(""));
        qla_setting_align->setAlignment(Qt::AlignCenter);

        layout_hor_05->addWidget(qla_setting_align);

        tc_qla_09 = new QLabel(widget_left);
        tc_qla_09->setObjectName(QStringLiteral("tc_qla_09"));
        sizePolicy.setHeightForWidth(tc_qla_09->sizePolicy().hasHeightForWidth());
        tc_qla_09->setSizePolicy(sizePolicy);
        tc_qla_09->setMinimumSize(QSize(45, 20));
        tc_qla_09->setLayoutDirection(Qt::LeftToRight);
        tc_qla_09->setStyleSheet(QStringLiteral(""));
        tc_qla_09->setAlignment(Qt::AlignCenter);

        layout_hor_05->addWidget(tc_qla_09);

        comboBox_shortcut = new QComboBox(widget_left);
        comboBox_shortcut->setObjectName(QStringLiteral("comboBox_shortcut"));
        sizePolicy.setHeightForWidth(comboBox_shortcut->sizePolicy().hasHeightForWidth());
        comboBox_shortcut->setSizePolicy(sizePolicy);
        comboBox_shortcut->setMinimumSize(QSize(45, 20));
        comboBox_shortcut->setFont(font);

        layout_hor_05->addWidget(comboBox_shortcut);

        tc_qla_10 = new QLabel(widget_left);
        tc_qla_10->setObjectName(QStringLiteral("tc_qla_10"));
        sizePolicy.setHeightForWidth(tc_qla_10->sizePolicy().hasHeightForWidth());
        tc_qla_10->setSizePolicy(sizePolicy);
        tc_qla_10->setMinimumSize(QSize(165, 20));
        tc_qla_10->setLayoutDirection(Qt::LeftToRight);
        tc_qla_10->setStyleSheet(QStringLiteral(""));
        tc_qla_10->setAlignment(Qt::AlignCenter);

        layout_hor_05->addWidget(tc_qla_10);

        layout_hor_05->setStretch(0, 72);
        layout_hor_05->setStretch(1, 45);
        layout_hor_05->setStretch(2, 45);
        layout_hor_05->setStretch(3, 165);

        gridLayout->addLayout(layout_hor_05, 10, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 11, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        qla_setting_changepassword = new QLabel(widget_left);
        qla_setting_changepassword->setObjectName(QStringLiteral("qla_setting_changepassword"));
        sizePolicy.setHeightForWidth(qla_setting_changepassword->sizePolicy().hasHeightForWidth());
        qla_setting_changepassword->setSizePolicy(sizePolicy);
        qla_setting_changepassword->setMinimumSize(QSize(72, 20));
        qla_setting_changepassword->setFont(font);
        qla_setting_changepassword->setStyleSheet(QStringLiteral(""));
        qla_setting_changepassword->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(qla_setting_changepassword);

        tc_qla_9 = new QLabel(widget_left);
        tc_qla_9->setObjectName(QStringLiteral("tc_qla_9"));
        sizePolicy.setHeightForWidth(tc_qla_9->sizePolicy().hasHeightForWidth());
        tc_qla_9->setSizePolicy(sizePolicy);
        tc_qla_9->setMinimumSize(QSize(45, 20));
        tc_qla_9->setLayoutDirection(Qt::LeftToRight);
        tc_qla_9->setStyleSheet(QStringLiteral(""));
        tc_qla_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(tc_qla_9);

        btn_change_PW = new QPushButton(widget_left);
        btn_change_PW->setObjectName(QStringLiteral("btn_change_PW"));
        sizePolicy.setHeightForWidth(btn_change_PW->sizePolicy().hasHeightForWidth());
        btn_change_PW->setSizePolicy(sizePolicy);
        btn_change_PW->setMinimumSize(QSize(75, 20));

        horizontalLayout_5->addWidget(btn_change_PW);

        tc_qla_13 = new QLabel(widget_left);
        tc_qla_13->setObjectName(QStringLiteral("tc_qla_13"));
        sizePolicy.setHeightForWidth(tc_qla_13->sizePolicy().hasHeightForWidth());
        tc_qla_13->setSizePolicy(sizePolicy);
        tc_qla_13->setMinimumSize(QSize(135, 20));
        tc_qla_13->setLayoutDirection(Qt::LeftToRight);
        tc_qla_13->setStyleSheet(QStringLiteral(""));
        tc_qla_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(tc_qla_13);

        horizontalLayout_5->setStretch(0, 72);
        horizontalLayout_5->setStretch(1, 45);
        horizontalLayout_5->setStretch(2, 75);
        horizontalLayout_5->setStretch(3, 133);

        gridLayout->addLayout(horizontalLayout_5, 12, 0, 1, 1);


        horizontalLayout_2->addWidget(widget_left);

        th_02 = new QSpacerItem(260, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(th_02);

        widget_right = new QWidget(page_setting);
        widget_right->setObjectName(QStringLiteral("widget_right"));
        sizePolicy.setHeightForWidth(widget_right->sizePolicy().hasHeightForWidth());
        widget_right->setSizePolicy(sizePolicy);
        widget_right->setStyleSheet(QLatin1String("background-color:rgb(255,255,255);\n"
"\n"
""));
        layout_right = new QGridLayout(widget_right);
        layout_right->setSpacing(0);
        layout_right->setObjectName(QStringLiteral("layout_right"));
        layout_right->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        qla_show_setting = new QLabel(widget_right);
        qla_show_setting->setObjectName(QStringLiteral("qla_show_setting"));
        sizePolicy.setHeightForWidth(qla_show_setting->sizePolicy().hasHeightForWidth());
        qla_show_setting->setSizePolicy(sizePolicy);
        qla_show_setting->setMinimumSize(QSize(300, 300));
        QFont font2;
        font2.setPointSize(60);
        qla_show_setting->setFont(font2);
        qla_show_setting->setStyleSheet(QLatin1String("background-color:rgb(0,0,0);\n"
"color:rgb(255,255,255);\n"
"\n"
""));
        qla_show_setting->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(qla_show_setting);

        verticalSpacer_2 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(0, 35);
        verticalLayout->setStretch(1, 300);
        verticalLayout->setStretch(2, 35);

        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 35);
        horizontalLayout->setStretch(1, 300);
        horizontalLayout->setStretch(2, 35);

        layout_right->addLayout(horizontalLayout, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(widget_right);

        th_03 = new QSpacerItem(64, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(th_03);

        horizontalLayout_2->setStretch(0, 64);
        horizontalLayout_2->setStretch(2, 260);
        horizontalLayout_2->setStretch(3, 370);
        horizontalLayout_2->setStretch(4, 64);

        gridLayout_3->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        th_2 = new QSpacerItem(1064, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(th_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(471, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btn_ok = new QPushButton(page_setting);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        sizePolicy.setHeightForWidth(btn_ok->sizePolicy().hasHeightForWidth());
        btn_ok->setSizePolicy(sizePolicy);
        btn_ok->setMinimumSize(QSize(100, 43));
        QFont font3;
        font3.setPointSize(12);
        btn_ok->setFont(font3);

        horizontalLayout_3->addWidget(btn_ok);

        horizontalSpacer_4 = new QSpacerItem(514, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_3->setStretch(0, 471);
        horizontalLayout_3->setStretch(1, 100);
        horizontalLayout_3->setStretch(2, 514);

        gridLayout_3->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        th_3 = new QSpacerItem(1064, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(th_3, 4, 0, 1, 1);

        gridLayout_3->setRowStretch(0, 64);
        gridLayout_3->setRowStretch(1, 370);
        gridLayout_3->setRowStretch(2, 20);
        gridLayout_3->setRowStretch(3, 30);
        gridLayout_3->setRowStretch(4, 20);
        stackedWidget->addWidget(page_setting);
        page_update = new QWidget();
        page_update->setObjectName(QStringLiteral("page_update"));
        label = new QLabel(page_update);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 220, 341, 211));
        label->setStyleSheet(QStringLiteral("image: url(:/image/resource/line100.png);"));
        stackedWidget->addWidget(page_update);

        gridLayout_2->addWidget(stackedWidget, 1, 0, 1, 1);

        widget = new QWidget(setting);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(1085, 78));
        widget->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        btn_setting = new QPushButton(widget);
        btn_setting->setObjectName(QStringLiteral("btn_setting"));
        sizePolicy.setHeightForWidth(btn_setting->sizePolicy().hasHeightForWidth());
        btn_setting->setSizePolicy(sizePolicy);
        btn_setting->setMinimumSize(QSize(100, 38));
        btn_setting->setFont(font3);

        horizontalLayout_4->addWidget(btn_setting);

        horizontalSpacer_6 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        btn_update = new QPushButton(widget);
        btn_update->setObjectName(QStringLiteral("btn_update"));
        sizePolicy.setHeightForWidth(btn_update->sizePolicy().hasHeightForWidth());
        btn_update->setSizePolicy(sizePolicy);
        btn_update->setMinimumSize(QSize(100, 38));
        btn_update->setFont(font3);

        horizontalLayout_4->addWidget(btn_update);

        horizontalSpacer_7 = new QSpacerItem(725, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        horizontalLayout_4->setStretch(0, 60);
        horizontalLayout_4->setStretch(1, 100);
        horizontalLayout_4->setStretch(2, 100);
        horizontalLayout_4->setStretch(3, 100);
        horizontalLayout_4->setStretch(4, 725);

        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setStyleSheet(QLatin1String("QFrame{\n"
"border-top: 1px solid;\n"
"	border-top-color: rgb(227, 227, 227);\n"
"}"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(line_2);

        verticalLayout_3->setStretch(0, 20);
        verticalLayout_3->setStretch(1, 38);
        verticalLayout_3->setStretch(2, 17);
        verticalLayout_3->setStretch(3, 3);

        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 78);
        gridLayout_2->setRowStretch(1, 577);

        retranslateUi(setting);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(setting);
    } // setupUi

    void retranslateUi(QWidget *setting)
    {
        setting->setWindowTitle(QApplication::translate("setting", "Form", Q_NULLPTR));
        qla_setting_normal->setText(QApplication::translate("setting", "\345\270\270\350\247\204\350\256\276\347\275\256", Q_NULLPTR));
        tc_qla_00->setText(QString());
        qla_setting_keyboard_skin->setText(QApplication::translate("setting", "\351\224\256\347\233\230\347\232\256\350\202\244", Q_NULLPTR));
        tc_qla_01->setText(QString());
        comboBox_skin->clear();
        comboBox_skin->insertItems(0, QStringList()
         << QApplication::translate("setting", "\345\204\277\347\253\245\347\211\210", Q_NULLPTR)
         << QApplication::translate("setting", "\347\247\221\346\212\200\347\211\210", Q_NULLPTR)
         << QApplication::translate("setting", "\345\225\206\345\212\241\347\211\210", Q_NULLPTR)
         << QApplication::translate("setting", "\346\260\264\345\242\250\347\211\210", Q_NULLPTR)
        );
        tc_qla_02->setText(QString());
        qla_setting_keyboard_size->setText(QApplication::translate("setting", "\351\224\256\347\233\230\345\244\247\345\260\217", Q_NULLPTR));
        tc_qla_03->setText(QString());
        radio_btn_big->setText(QApplication::translate("setting", "\345\244\247", Q_NULLPTR));
        tc_qla_04->setText(QString());
        radio_btn_medium->setText(QApplication::translate("setting", "\344\270\255", Q_NULLPTR));
        tc_qla_05->setText(QString());
        radio_btn_small->setText(QApplication::translate("setting", "\345\260\217", Q_NULLPTR));
        qla_setting_hoverwindow->setText(QApplication::translate("setting", "\346\202\254\346\265\256\347\252\227  ", Q_NULLPTR));
        tc_qla_11->setText(QString());
        btn_change_ShowNotShow->setText(QString());
        tc_qla_14->setText(QString());
        qla_setting_shortcut->setText(QApplication::translate("setting", "\345\277\253\346\215\267\351\224\256\350\256\276\347\275\256", Q_NULLPTR));
        tc_qla_08->setText(QString());
        qla_setting_align->setText(QApplication::translate("setting", "\350\207\252\345\212\250\346\240\241\345\207\206", Q_NULLPTR));
        tc_qla_09->setText(QString());
        comboBox_shortcut->clear();
        comboBox_shortcut->insertItems(0, QStringList()
         << QApplication::translate("setting", "A", Q_NULLPTR)
         << QApplication::translate("setting", "F", Q_NULLPTR)
         << QApplication::translate("setting", "J", Q_NULLPTR)
         << QApplication::translate("setting", "L", Q_NULLPTR)
        );
        tc_qla_10->setText(QString());
        qla_setting_changepassword->setText(QApplication::translate("setting", "\350\264\246\346\210\267\350\256\276\347\275\256", Q_NULLPTR));
        tc_qla_9->setText(QString());
        btn_change_PW->setText(QApplication::translate("setting", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        tc_qla_13->setText(QString());
        qla_show_setting->setText(QApplication::translate("setting", "\346\230\216\345\244\251\n"
"\344\275\240\345\245\275", Q_NULLPTR));
        btn_ok->setText(QApplication::translate("setting", "\347\241\256\345\256\232", Q_NULLPTR));
        label->setText(QString());
        btn_setting->setText(QApplication::translate("setting", "\345\237\272\346\234\254\350\256\276\347\275\256", Q_NULLPTR));
        btn_update->setText(QApplication::translate("setting", "\347\211\210\346\234\254\346\233\264\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class setting: public Ui_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
