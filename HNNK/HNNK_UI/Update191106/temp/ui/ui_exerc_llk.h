/********************************************************************************
** Form generated from reading UI file 'exerc_llk.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXERC_LLK_H
#define UI_EXERC_LLK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "exerc_llk.h"

QT_BEGIN_NAMESPACE

class Ui_exerc_llk
{
public:
    QGridLayout *gridLayout;
    llk_title *title;
    QGridLayout *gridLayout_4;
    QLabel *logo;
    QLabel *logo_2;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QWidget *widget_4;
    QLabel *tc_2;
    QLabel *tc;
    QPushButton *btn_restart;
    QPushButton *btn_back;
    QLabel *qla_grade;
    QLabel *qla_time;

    void setupUi(QWidget *exerc_llk)
    {
        if (exerc_llk->objectName().isEmpty())
            exerc_llk->setObjectName(QStringLiteral("exerc_llk"));
        exerc_llk->resize(1282, 723);
        gridLayout = new QGridLayout(exerc_llk);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(1, 0, 1, 1);
        title = new llk_title(exerc_llk);
        title->setObjectName(QStringLiteral("title"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy);
        title->setMinimumSize(QSize(1280, 95));
        title->setStyleSheet(QStringLiteral(""));
        gridLayout_4 = new QGridLayout(title);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        logo = new QLabel(title);
        logo->setObjectName(QStringLiteral("logo"));
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMinimumSize(QSize(195, 95));
        logo->setLayoutDirection(Qt::LeftToRight);
        logo->setStyleSheet(QLatin1String("border-image: url(:/exerc_image/resource/image/LOGO.png);\n"
""));
        logo->setScaledContents(true);
        logo->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(logo, 0, 0, 1, 1);

        logo_2 = new QLabel(title);
        logo_2->setObjectName(QStringLiteral("logo_2"));
        sizePolicy.setHeightForWidth(logo_2->sizePolicy().hasHeightForWidth());
        logo_2->setSizePolicy(sizePolicy);
        logo_2->setMinimumSize(QSize(1085, 95));
        logo_2->setLayoutDirection(Qt::LeftToRight);
        logo_2->setStyleSheet(QStringLiteral(""));
        logo_2->setScaledContents(true);
        logo_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(logo_2, 0, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 195);
        gridLayout_4->setColumnStretch(1, 1085);

        gridLayout->addWidget(title, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        widget_3 = new QWidget(exerc_llk);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_3);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(639, 625));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(widget_3);

        widget_4 = new QWidget(exerc_llk);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setStyleSheet(QStringLiteral(""));
        tc_2 = new QLabel(widget_4);
        tc_2->setObjectName(QStringLiteral("tc_2"));
        tc_2->setGeometry(QRect(0, 0, 55, 625));
        sizePolicy.setHeightForWidth(tc_2->sizePolicy().hasHeightForWidth());
        tc_2->setSizePolicy(sizePolicy);
        tc_2->setMinimumSize(QSize(55, 625));
        tc_2->setStyleSheet(QStringLiteral(""));
        tc = new QLabel(widget_4);
        tc->setObjectName(QStringLiteral("tc"));
        tc->setGeometry(QRect(584, 0, 55, 625));
        sizePolicy.setHeightForWidth(tc->sizePolicy().hasHeightForWidth());
        tc->setSizePolicy(sizePolicy);
        tc->setMinimumSize(QSize(55, 625));
        tc->setStyleSheet(QStringLiteral(""));
        btn_restart = new QPushButton(widget_4);
        btn_restart->setObjectName(QStringLiteral("btn_restart"));
        btn_restart->setGeometry(QRect(175, 335, 290, 100));
        sizePolicy.setHeightForWidth(btn_restart->sizePolicy().hasHeightForWidth());
        btn_restart->setSizePolicy(sizePolicy);
        btn_restart->setMinimumSize(QSize(290, 90));
        QFont font;
        font.setPointSize(11);
        btn_restart->setFont(font);
        btn_restart->setCursor(QCursor(Qt::PointingHandCursor));
        btn_back = new QPushButton(widget_4);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setGeometry(QRect(175, 470, 290, 100));
        sizePolicy.setHeightForWidth(btn_back->sizePolicy().hasHeightForWidth());
        btn_back->setSizePolicy(sizePolicy);
        btn_back->setMinimumSize(QSize(290, 90));
        btn_back->setFont(font);
        btn_back->setCursor(QCursor(Qt::PointingHandCursor));
        btn_back->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/exerc_image/resource/image/Game/game_llk/back_0.png);}\n"
"QPushButton:hover{border-image: url(:/exerc_image/resource/image/Game/game_llk/back_1.png);}\n"
"/*QPushButton:clicked{border-image: url(:/exerc_image/resource/image/Game/game_llk/back_2.png);}*/\n"
""));
        qla_grade = new QLabel(widget_4);
        qla_grade->setObjectName(QStringLiteral("qla_grade"));
        qla_grade->setGeometry(QRect(175, 200, 290, 100));
        sizePolicy.setHeightForWidth(qla_grade->sizePolicy().hasHeightForWidth());
        qla_grade->setSizePolicy(sizePolicy);
        qla_grade->setMinimumSize(QSize(290, 90));
        qla_grade->setFont(font);
        qla_grade->setStyleSheet(QLatin1String("/*background-color:rgb(200,255,250);*/\n"
"border-image: url(:/exerc_image/resource/image/Game/game_llk/llk_grade.png);\n"
""));
        qla_grade->setAlignment(Qt::AlignCenter);
        qla_time = new QLabel(widget_4);
        qla_time->setObjectName(QStringLiteral("qla_time"));
        qla_time->setGeometry(QRect(175, 65, 290, 100));
        sizePolicy.setHeightForWidth(qla_time->sizePolicy().hasHeightForWidth());
        qla_time->setSizePolicy(sizePolicy);
        qla_time->setMinimumSize(QSize(290, 90));
        qla_time->setFont(font);
        qla_time->setStyleSheet(QLatin1String("\n"
"border-image: url(:/exerc_image/resource/image/Game/game_llk/llk_time.png);\n"
""));
        qla_time->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(widget_4);

        horizontalLayout_4->setStretch(0, 640);
        horizontalLayout_4->setStretch(1, 640);

        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 95);
        gridLayout->setRowStretch(1, 625);

        retranslateUi(exerc_llk);

        QMetaObject::connectSlotsByName(exerc_llk);
    } // setupUi

    void retranslateUi(QWidget *exerc_llk)
    {
        exerc_llk->setWindowTitle(QApplication::translate("exerc_llk", "Form", Q_NULLPTR));
        logo->setText(QString());
        logo_2->setText(QString());
        label->setText(QString());
        tc_2->setText(QString());
        tc->setText(QString());
        btn_restart->setText(QApplication::translate("exerc_llk", "\351\207\215\346\226\260\345\274\200\345\247\213", Q_NULLPTR));
        btn_back->setText(QApplication::translate("exerc_llk", "\350\277\224\345\233\236\344\270\212\347\272\247", Q_NULLPTR));
        qla_grade->setText(QApplication::translate("exerc_llk", "\346\210\220\347\273\251\357\274\232", Q_NULLPTR));
        qla_time->setText(QApplication::translate("exerc_llk", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class exerc_llk: public Ui_exerc_llk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERC_LLK_H
