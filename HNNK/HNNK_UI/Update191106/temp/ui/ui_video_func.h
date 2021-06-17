/********************************************************************************
** Form generated from reading UI file 'video_func.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEO_FUNC_H
#define UI_VIDEO_FUNC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_video_func
{
public:
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Btn_play;
    QVBoxLayout *verticalLayout;
    QSlider *Sli_time;
    QHBoxLayout *horizontalLayout;
    QPushButton *Btn_back;
    QLabel *qla_video_name;
    QPushButton *Btn_fore;
    QLabel *qla_video_process;
    QPushButton *Btn_down;
    QSlider *Sli_sound;
    QPushButton *Btn_up;
    QPushButton *Btn_back_to_menu;

    void setupUi(QWidget *video_func)
    {
        if (video_func->objectName().isEmpty())
            video_func->setObjectName(QStringLiteral("video_func"));
        video_func->resize(1280, 720);
        video_func->setStyleSheet(QStringLiteral("background-color:rgb(25,25,25);"));
        gridLayout_2 = new QGridLayout(video_func);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(video_func);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(1280, 620));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout = new QGridLayout(page_2);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        widget = new QWidget(video_func);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 0, 30, 0);
        Btn_play = new QPushButton(widget);
        Btn_play->setObjectName(QStringLiteral("Btn_play"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Btn_play->sizePolicy().hasHeightForWidth());
        Btn_play->setSizePolicy(sizePolicy1);
        Btn_play->setMinimumSize(QSize(50, 50));
        Btn_play->setMaximumSize(QSize(50, 50));

        horizontalLayout_2->addWidget(Btn_play);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 10, 20, 10);
        Sli_time = new QSlider(widget);
        Sli_time->setObjectName(QStringLiteral("Sli_time"));
        Sli_time->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Sli_time->sizePolicy().hasHeightForWidth());
        Sli_time->setSizePolicy(sizePolicy2);
        Sli_time->setMinimumSize(QSize(0, 15));
        Sli_time->setMaximumSize(QSize(16777215, 15));
        Sli_time->setStyleSheet(QLatin1String("QSlider{\n"
"border-color: #bcbcbc;\n"
"}\n"
"QSlider::groove:horizontal {                                \n"
"     border: 1px solid #999999;                             \n"
"     height: 1px;                                           \n"
"    margin: 0px 0;                                         \n"
"     left: 5px; right: 5px; \n"
" }\n"
"\n"
"QSlider::handle:horizontal {                               \n"
"     border: 0px ;                           \n"
"     border-image:url(: /exerc_image/resource/image/slider_point.png);\n"
"     width: 15px;                                           \n"
"     margin: -7px -7px -7px -7px;                  \n"
"} \n"
"\n"
"QSlider::add-page:horizontal{\n"
"background: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 #bcbcbc, stop:0.25 #bcbcbc, stop:0.5 #bcbcbc, stop:1 #bcbcbc); \n"
"}\n"
"\n"
"QSlider::sub-page:horizontal{                               \n"
" background: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 #439cf3, stop:0.25 #439cf3, stop"
                        ":0.5 #439cf3, stop:1 #439cf3);                     \n"
"}"));
        Sli_time->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(Sli_time);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, -1, 30, -1);
        Btn_back = new QPushButton(widget);
        Btn_back->setObjectName(QStringLiteral("Btn_back"));
        sizePolicy1.setHeightForWidth(Btn_back->sizePolicy().hasHeightForWidth());
        Btn_back->setSizePolicy(sizePolicy1);
        Btn_back->setMinimumSize(QSize(45, 45));
        Btn_back->setMaximumSize(QSize(45, 45));
        Btn_back->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(Btn_back);

        qla_video_name = new QLabel(widget);
        qla_video_name->setObjectName(QStringLiteral("qla_video_name"));
        sizePolicy1.setHeightForWidth(qla_video_name->sizePolicy().hasHeightForWidth());
        qla_video_name->setSizePolicy(sizePolicy1);
        qla_video_name->setMinimumSize(QSize(45, 45));
        qla_video_name->setMaximumSize(QSize(45, 45));
        qla_video_name->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
""));
        qla_video_name->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(qla_video_name);

        Btn_fore = new QPushButton(widget);
        Btn_fore->setObjectName(QStringLiteral("Btn_fore"));
        sizePolicy1.setHeightForWidth(Btn_fore->sizePolicy().hasHeightForWidth());
        Btn_fore->setSizePolicy(sizePolicy1);
        Btn_fore->setMinimumSize(QSize(45, 45));
        Btn_fore->setMaximumSize(QSize(45, 45));

        horizontalLayout->addWidget(Btn_fore);

        qla_video_process = new QLabel(widget);
        qla_video_process->setObjectName(QStringLiteral("qla_video_process"));
        sizePolicy2.setHeightForWidth(qla_video_process->sizePolicy().hasHeightForWidth());
        qla_video_process->setSizePolicy(sizePolicy2);
        qla_video_process->setMinimumSize(QSize(320, 40));
        qla_video_process->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:rgb(255,255,255);\n"
"background-color:rgb(0,0,0);\n"
"}"));
        qla_video_process->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(qla_video_process);

        Btn_down = new QPushButton(widget);
        Btn_down->setObjectName(QStringLiteral("Btn_down"));
        sizePolicy1.setHeightForWidth(Btn_down->sizePolicy().hasHeightForWidth());
        Btn_down->setSizePolicy(sizePolicy1);
        Btn_down->setMinimumSize(QSize(45, 45));
        Btn_down->setMaximumSize(QSize(45, 45));

        horizontalLayout->addWidget(Btn_down);

        Sli_sound = new QSlider(widget);
        Sli_sound->setObjectName(QStringLiteral("Sli_sound"));
        Sli_sound->setEnabled(true);
        sizePolicy1.setHeightForWidth(Sli_sound->sizePolicy().hasHeightForWidth());
        Sli_sound->setSizePolicy(sizePolicy1);
        Sli_sound->setMinimumSize(QSize(80, 10));
        Sli_sound->setMaximumSize(QSize(16777215, 15));
        Sli_sound->setStyleSheet(QLatin1String("QSlider{\n"
"border-color: #bcbcbc;\n"
"}\n"
"QSlider::groove:horizontal {                                \n"
"     border: 1px solid #999999;                             \n"
"     height: 1px;                                           \n"
"    margin: 0px 0;                                         \n"
"     left: 5px; right: 5px; \n"
" }\n"
"\n"
"QSlider::handle:horizontal {                               \n"
"     border: 0px ;                           \n"
"     border-image:url(: /exerc_image/resource/image/slider_point.png);\n"
"     width: 15px;                                           \n"
"     margin: -7px -7px -7px -7px;                  \n"
"} \n"
"\n"
"QSlider::add-page:horizontal{\n"
"background: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 #bcbcbc, stop:0.25 #bcbcbc, stop:0.5 #bcbcbc, stop:1 #bcbcbc); \n"
"}\n"
"\n"
"QSlider::sub-page:horizontal{                               \n"
" background: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 #439cf3, stop:0.25 #439cf3, stop"
                        ":0.5 #439cf3, stop:1 #439cf3);                     \n"
"}"));
        Sli_sound->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(Sli_sound);

        Btn_up = new QPushButton(widget);
        Btn_up->setObjectName(QStringLiteral("Btn_up"));
        sizePolicy1.setHeightForWidth(Btn_up->sizePolicy().hasHeightForWidth());
        Btn_up->setSizePolicy(sizePolicy1);
        Btn_up->setMinimumSize(QSize(45, 45));
        Btn_up->setMaximumSize(QSize(45, 45));

        horizontalLayout->addWidget(Btn_up);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 8);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 2);
        horizontalLayout->setStretch(6, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);

        horizontalLayout_2->addLayout(verticalLayout);

        Btn_back_to_menu = new QPushButton(widget);
        Btn_back_to_menu->setObjectName(QStringLiteral("Btn_back_to_menu"));
        sizePolicy.setHeightForWidth(Btn_back_to_menu->sizePolicy().hasHeightForWidth());
        Btn_back_to_menu->setSizePolicy(sizePolicy);
        Btn_back_to_menu->setMinimumSize(QSize(50, 50));
        Btn_back_to_menu->setMaximumSize(QSize(50, 50));

        horizontalLayout_2->addWidget(Btn_back_to_menu);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 10);
        horizontalLayout_2->setStretch(2, 1);

        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1200);
        gridLayout_2->setRowStretch(1, 80);

        retranslateUi(video_func);

        QMetaObject::connectSlotsByName(video_func);
    } // setupUi

    void retranslateUi(QWidget *video_func)
    {
        video_func->setWindowTitle(QApplication::translate("video_func", "Form", Q_NULLPTR));
        label->setText(QString());
        Btn_play->setText(QString());
        Btn_back->setText(QString());
        qla_video_name->setText(QApplication::translate("video_func", "\350\247\206\351\242\221", Q_NULLPTR));
        Btn_fore->setText(QString());
        qla_video_process->setText(QApplication::translate("video_func", "\350\277\233\345\272\246", Q_NULLPTR));
        Btn_down->setText(QString());
        Btn_up->setText(QString());
        Btn_back_to_menu->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class video_func: public Ui_video_func {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEO_FUNC_H
