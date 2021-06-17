/********************************************************************************
** Form generated from reading UI file 'exerc_web.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXERC_WEB_H
#define UI_EXERC_WEB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "exerc_web.h"

QT_BEGIN_NAMESPACE

class Ui_exerc_web
{
public:
    QGridLayout *gridLayout_3;
    title_widget *title;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *wangzhilan;
    QLineEdit *edit_address;
    QLabel *label;
    QPushButton *Btn_enter;
    QLabel *label_2;
    QLabel *exerc_title_info;
    QPushButton *Btn_HNNK;
    QLabel *qla_HNNK;
    QPushButton *Btn_baidu;
    QLabel *qla_baidu;
    QPushButton *Btn_taobao;
    QLabel *qla_taobao;
    QPushButton *Btn_jd;
    QLabel *qla_youku;
    QLabel *label_3;
    QPushButton *Btn_back;
    QLabel *label_4;
    QLabel *top_qla;
    QLabel *bottom_qla;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QWidget *widget;

    void setupUi(QWidget *exerc_web)
    {
        if (exerc_web->objectName().isEmpty())
            exerc_web->setObjectName(QStringLiteral("exerc_web"));
        exerc_web->resize(1282, 722);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exerc_web->sizePolicy().hasHeightForWidth());
        exerc_web->setSizePolicy(sizePolicy);
        exerc_web->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(exerc_web);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(1, 1, 1, 1);
        title = new title_widget(exerc_web);
        title->setObjectName(QStringLiteral("title"));
        sizePolicy.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy);
        title->setMinimumSize(QSize(1280, 48));
        title->setStyleSheet(QLatin1String("background-color:rgb(240,240,240);\n"
""));
        gridLayout = new QGridLayout(title);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        wangzhilan = new QLabel(title);
        wangzhilan->setObjectName(QStringLiteral("wangzhilan"));
        sizePolicy.setHeightForWidth(wangzhilan->sizePolicy().hasHeightForWidth());
        wangzhilan->setSizePolicy(sizePolicy);
        wangzhilan->setMinimumSize(QSize(60, 28));
        wangzhilan->setMaximumSize(QSize(16666666, 99999));
        QFont font;
        font.setPointSize(10);
        wangzhilan->setFont(font);
        wangzhilan->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(wangzhilan);

        edit_address = new QLineEdit(title);
        edit_address->setObjectName(QStringLiteral("edit_address"));
        sizePolicy.setHeightForWidth(edit_address->sizePolicy().hasHeightForWidth());
        edit_address->setSizePolicy(sizePolicy);
        edit_address->setMinimumSize(QSize(250, 28));
        edit_address->setMaximumSize(QSize(16666666, 99999));
        QFont font1;
        font1.setPointSize(14);
        edit_address->setFont(font1);

        horizontalLayout->addWidget(edit_address);

        label = new QLabel(title);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(16, 28));

        horizontalLayout->addWidget(label);

        Btn_enter = new QPushButton(title);
        Btn_enter->setObjectName(QStringLiteral("Btn_enter"));
        sizePolicy.setHeightForWidth(Btn_enter->sizePolicy().hasHeightForWidth());
        Btn_enter->setSizePolicy(sizePolicy);
        Btn_enter->setMinimumSize(QSize(28, 28));
        Btn_enter->setMaximumSize(QSize(16666666, 99999));
        Btn_enter->setCursor(QCursor(Qt::PointingHandCursor));
        Btn_enter->setStyleSheet(QStringLiteral("border-image: url(:/exerc_image/resource/image/web/web_ok.png);"));

        horizontalLayout->addWidget(Btn_enter);

        label_2 = new QLabel(title);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(16, 28));

        horizontalLayout->addWidget(label_2);

        exerc_title_info = new QLabel(title);
        exerc_title_info->setObjectName(QStringLiteral("exerc_title_info"));
        sizePolicy.setHeightForWidth(exerc_title_info->sizePolicy().hasHeightForWidth());
        exerc_title_info->setSizePolicy(sizePolicy);
        exerc_title_info->setMinimumSize(QSize(540, 28));
        exerc_title_info->setMaximumSize(QSize(16666666, 99999));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(10);
        exerc_title_info->setFont(font2);
        exerc_title_info->setStyleSheet(QStringLiteral(""));
        exerc_title_info->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(exerc_title_info);

        Btn_HNNK = new QPushButton(title);
        Btn_HNNK->setObjectName(QStringLiteral("Btn_HNNK"));
        sizePolicy.setHeightForWidth(Btn_HNNK->sizePolicy().hasHeightForWidth());
        Btn_HNNK->setSizePolicy(sizePolicy);
        Btn_HNNK->setMinimumSize(QSize(28, 28));
        Btn_HNNK->setMaximumSize(QSize(16666666, 99999));
        Btn_HNNK->setFont(font);
        Btn_HNNK->setCursor(QCursor(Qt::PointingHandCursor));
        Btn_HNNK->setStyleSheet(QStringLiteral("border-image: url(:/exerc_image/resource/image/web/web_HNNK.png);"));

        horizontalLayout->addWidget(Btn_HNNK);

        qla_HNNK = new QLabel(title);
        qla_HNNK->setObjectName(QStringLiteral("qla_HNNK"));
        sizePolicy.setHeightForWidth(qla_HNNK->sizePolicy().hasHeightForWidth());
        qla_HNNK->setSizePolicy(sizePolicy);
        qla_HNNK->setMinimumSize(QSize(50, 28));
        qla_HNNK->setMaximumSize(QSize(16666666, 99999));
        qla_HNNK->setFont(font2);
        qla_HNNK->setStyleSheet(QStringLiteral(""));
        qla_HNNK->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(qla_HNNK);

        Btn_baidu = new QPushButton(title);
        Btn_baidu->setObjectName(QStringLiteral("Btn_baidu"));
        sizePolicy.setHeightForWidth(Btn_baidu->sizePolicy().hasHeightForWidth());
        Btn_baidu->setSizePolicy(sizePolicy);
        Btn_baidu->setMinimumSize(QSize(28, 28));
        Btn_baidu->setMaximumSize(QSize(16666666, 99999));
        Btn_baidu->setCursor(QCursor(Qt::PointingHandCursor));
        Btn_baidu->setStyleSheet(QStringLiteral("border-image: url(:/exerc_image/resource/image/web/web_baidu.png);"));

        horizontalLayout->addWidget(Btn_baidu);

        qla_baidu = new QLabel(title);
        qla_baidu->setObjectName(QStringLiteral("qla_baidu"));
        sizePolicy.setHeightForWidth(qla_baidu->sizePolicy().hasHeightForWidth());
        qla_baidu->setSizePolicy(sizePolicy);
        qla_baidu->setMinimumSize(QSize(50, 28));
        qla_baidu->setMaximumSize(QSize(16666666, 99999));
        qla_baidu->setFont(font2);
        qla_baidu->setStyleSheet(QStringLiteral(""));
        qla_baidu->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(qla_baidu);

        Btn_taobao = new QPushButton(title);
        Btn_taobao->setObjectName(QStringLiteral("Btn_taobao"));
        sizePolicy.setHeightForWidth(Btn_taobao->sizePolicy().hasHeightForWidth());
        Btn_taobao->setSizePolicy(sizePolicy);
        Btn_taobao->setMinimumSize(QSize(28, 28));
        Btn_taobao->setMaximumSize(QSize(16666666, 99999));
        Btn_taobao->setCursor(QCursor(Qt::PointingHandCursor));
        Btn_taobao->setStyleSheet(QStringLiteral("border-image: url(:/exerc_image/resource/image/web/web_taobao.png);"));

        horizontalLayout->addWidget(Btn_taobao);

        qla_taobao = new QLabel(title);
        qla_taobao->setObjectName(QStringLiteral("qla_taobao"));
        sizePolicy.setHeightForWidth(qla_taobao->sizePolicy().hasHeightForWidth());
        qla_taobao->setSizePolicy(sizePolicy);
        qla_taobao->setMinimumSize(QSize(50, 28));
        qla_taobao->setMaximumSize(QSize(16666666, 99999));
        qla_taobao->setFont(font2);
        qla_taobao->setStyleSheet(QStringLiteral(""));
        qla_taobao->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(qla_taobao);

        Btn_jd = new QPushButton(title);
        Btn_jd->setObjectName(QStringLiteral("Btn_jd"));
        sizePolicy.setHeightForWidth(Btn_jd->sizePolicy().hasHeightForWidth());
        Btn_jd->setSizePolicy(sizePolicy);
        Btn_jd->setMinimumSize(QSize(28, 28));
        Btn_jd->setMaximumSize(QSize(16666666, 99999));
        Btn_jd->setCursor(QCursor(Qt::PointingHandCursor));
        Btn_jd->setStyleSheet(QStringLiteral("border-image: url(:/exerc_image/resource/image/web/web_youku.png);"));

        horizontalLayout->addWidget(Btn_jd);

        qla_youku = new QLabel(title);
        qla_youku->setObjectName(QStringLiteral("qla_youku"));
        sizePolicy.setHeightForWidth(qla_youku->sizePolicy().hasHeightForWidth());
        qla_youku->setSizePolicy(sizePolicy);
        qla_youku->setMinimumSize(QSize(50, 28));
        qla_youku->setMaximumSize(QSize(16666666, 99999));
        qla_youku->setFont(font2);
        qla_youku->setStyleSheet(QStringLiteral(""));
        qla_youku->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(qla_youku);

        label_3 = new QLabel(title);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(16, 28));

        horizontalLayout->addWidget(label_3);

        Btn_back = new QPushButton(title);
        Btn_back->setObjectName(QStringLiteral("Btn_back"));
        sizePolicy.setHeightForWidth(Btn_back->sizePolicy().hasHeightForWidth());
        Btn_back->setSizePolicy(sizePolicy);
        Btn_back->setMinimumSize(QSize(28, 28));
        Btn_back->setMaximumSize(QSize(16666666, 99999));
        Btn_back->setCursor(QCursor(Qt::PointingHandCursor));
        Btn_back->setStyleSheet(QStringLiteral("border-image: url(:/exerc_image/resource/image/web/web_back.png);"));

        horizontalLayout->addWidget(Btn_back);

        label_4 = new QLabel(title);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(16, 28));

        horizontalLayout->addWidget(label_4);

        horizontalLayout->setStretch(0, 60);
        horizontalLayout->setStretch(1, 250);
        horizontalLayout->setStretch(2, 16);
        horizontalLayout->setStretch(3, 28);
        horizontalLayout->setStretch(4, 16);
        horizontalLayout->setStretch(5, 540);
        horizontalLayout->setStretch(6, 28);
        horizontalLayout->setStretch(7, 50);
        horizontalLayout->setStretch(8, 28);
        horizontalLayout->setStretch(9, 50);
        horizontalLayout->setStretch(10, 28);
        horizontalLayout->setStretch(11, 50);
        horizontalLayout->setStretch(12, 28);
        horizontalLayout->setStretch(13, 50);
        horizontalLayout->setStretch(14, 16);
        horizontalLayout->setStretch(15, 28);
        horizontalLayout->setStretch(16, 16);

        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        top_qla = new QLabel(title);
        top_qla->setObjectName(QStringLiteral("top_qla"));
        sizePolicy.setHeightForWidth(top_qla->sizePolicy().hasHeightForWidth());
        top_qla->setSizePolicy(sizePolicy);
        top_qla->setMinimumSize(QSize(1280, 10));
        top_qla->setStyleSheet(QStringLiteral(""));
        top_qla->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(top_qla, 0, 0, 1, 1);

        bottom_qla = new QLabel(title);
        bottom_qla->setObjectName(QStringLiteral("bottom_qla"));
        sizePolicy.setHeightForWidth(bottom_qla->sizePolicy().hasHeightForWidth());
        bottom_qla->setSizePolicy(sizePolicy);
        bottom_qla->setMinimumSize(QSize(1280, 10));
        bottom_qla->setStyleSheet(QStringLiteral(""));
        bottom_qla->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(bottom_qla, 2, 0, 1, 1);

        gridLayout->setRowStretch(0, 10);
        gridLayout->setRowStretch(1, 28);
        gridLayout->setRowStretch(2, 10);

        gridLayout_3->addWidget(title, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(exerc_web);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(1280, 672));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(page);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(1280, 672));
        widget->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        stackedWidget->addWidget(page);

        gridLayout_3->addWidget(stackedWidget, 1, 0, 1, 1);

        gridLayout_3->setRowStretch(0, 48);
        gridLayout_3->setRowStretch(1, 672);

        retranslateUi(exerc_web);

        QMetaObject::connectSlotsByName(exerc_web);
    } // setupUi

    void retranslateUi(QWidget *exerc_web)
    {
        exerc_web->setWindowTitle(QApplication::translate("exerc_web", "Form", Q_NULLPTR));
        wangzhilan->setText(QApplication::translate("exerc_web", "\347\275\221\345\235\200\346\240\217", Q_NULLPTR));
        edit_address->setText(QApplication::translate("exerc_web", "baidu.com", Q_NULLPTR));
        label->setText(QString());
        Btn_enter->setText(QString());
        label_2->setText(QString());
        exerc_title_info->setText(QApplication::translate("exerc_web", "\345\267\246\344\276\247\344\270\272\347\275\221\345\235\200\346\240\217\343\200\201\347\241\256\350\256\244\346\214\211\351\222\256\357\274\214\345\217\263\344\276\247\344\270\272\345\270\270\347\224\250\347\275\221\345\235\200\345\222\214\351\200\200\345\207\272", Q_NULLPTR));
        Btn_HNNK->setText(QString());
        qla_HNNK->setText(QApplication::translate("exerc_web", "HNNK", Q_NULLPTR));
        Btn_baidu->setText(QString());
        qla_baidu->setText(QApplication::translate("exerc_web", "\347\231\276\345\272\246", Q_NULLPTR));
        Btn_taobao->setText(QString());
        qla_taobao->setText(QApplication::translate("exerc_web", "\346\267\230\345\256\235", Q_NULLPTR));
        Btn_jd->setText(QString());
        qla_youku->setText(QApplication::translate("exerc_web", "\344\274\230\351\205\267", Q_NULLPTR));
        label_3->setText(QString());
        Btn_back->setText(QString());
        label_4->setText(QString());
        top_qla->setText(QString());
        bottom_qla->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class exerc_web: public Ui_exerc_web {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERC_WEB_H
