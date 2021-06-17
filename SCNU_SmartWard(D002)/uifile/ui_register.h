/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "mylineedit.h"

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QStackedWidget *stackedWidget;
    QWidget *rg;
    QPushButton *btn_MinR;
    MyLineEdit *lineEdit_CheckR;
    QLabel *label_star3;
    QLabel *label_picLoveR;
    QLabel *label_2R;
    QLabel *label_star2;
    QPushButton *btn_RegisterR;
    QLabel *label_errR;
    MyLineEdit *lineEdit_password1R;
    QLabel *label_star4;
    MyLineEdit *lineEdit_password2R;
    QLabel *label_star1;
    QPushButton *btn_CloseR;
    MyLineEdit *lineEdit_AccountR;
    QPushButton *btn_Change1;
    QPushButton *btn_Change2;
    QPushButton *btn_getCheckNum;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QWidget *rs;
    QPushButton *min_rs;
    QPushButton *close_rs;
    QLabel *label_gx;
    QLabel *label_success;
    QLabel *label_right;
    QPushButton *btn_gotologin;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(911, 484);
        QFont font;
        font.setPointSize(9);
        Register->setFont(font);
        Register->setStyleSheet(QLatin1String("QWidget#Register{\n"
"border-radius:10px;\n"
"}"));
        stackedWidget = new QStackedWidget(Register);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 910, 484));
        rg = new QWidget();
        rg->setObjectName(QStringLiteral("rg"));
        btn_MinR = new QPushButton(rg);
        btn_MinR->setObjectName(QStringLiteral("btn_MinR"));
        btn_MinR->setGeometry(QRect(823, 17, 35, 35));
        btn_MinR->setFocusPolicy(Qt::NoFocus);
        btn_MinR->setStyleSheet(QLatin1String("QPushButton#btn_MinR\n"
"{\n"
"     border-image:url(:/image/Min01.png);\n"
"}\n"
"QPushButton:hover#btn_MinR\n"
"{\n"
"     border-image:url(:/image/Min_hover.png);\n"
"}"));
        lineEdit_CheckR = new MyLineEdit(rg);
        lineEdit_CheckR->setObjectName(QStringLiteral("lineEdit_CheckR"));
        lineEdit_CheckR->setGeometry(QRect(518, 312, 317, 45));
        lineEdit_CheckR->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_CheckR{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_CheckR{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        label_star3 = new QLabel(rg);
        label_star3->setObjectName(QStringLiteral("label_star3"));
        label_star3->setGeometry(QRect(850, 287, 6, 6));
        label_star3->setFont(font);
        label_star3->setStyleSheet(QStringLiteral("color: rgb(251, 173, 88);"));
        label_picLoveR = new QLabel(rg);
        label_picLoveR->setObjectName(QStringLiteral("label_picLoveR"));
        label_picLoveR->setGeometry(QRect(36, 26, 220, 55));
        label_picLoveR->setMinimumSize(QSize(220, 55));
        label_picLoveR->setStyleSheet(QStringLiteral("border-image: url(:/image/life_ring2.png);"));
        label_2R = new QLabel(rg);
        label_2R->setObjectName(QStringLiteral("label_2R"));
        label_2R->setGeometry(QRect(518, 90, 131, 27));
        QFont font1;
        label_2R->setFont(font1);
        label_2R->setStyleSheet(QLatin1String("font-size:27px;\n"
"color: rgb(110, 110, 110);"));
        label_star2 = new QLabel(rg);
        label_star2->setObjectName(QStringLiteral("label_star2"));
        label_star2->setGeometry(QRect(850, 244, 6, 6));
        label_star2->setFont(font);
        label_star2->setStyleSheet(QStringLiteral("color: rgb(251, 173, 88);"));
        btn_RegisterR = new QPushButton(rg);
        btn_RegisterR->setObjectName(QStringLiteral("btn_RegisterR"));
        btn_RegisterR->setGeometry(QRect(523, 389, 317, 48));
        btn_RegisterR->setFont(font1);
        btn_RegisterR->setFocusPolicy(Qt::TabFocus);
        btn_RegisterR->setStyleSheet(QLatin1String("QPushButton{\n"
"	font-size:24px;\n"
"}\n"
"QPushButton:hover#btn_RegisterR{\n"
"background-color:#A9E2F3;\n"
"color: rgb(255, 245, 237);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#btn_RegisterR{\n"
"background-color:#58ACFA;\n"
"color: rgb(255, 245, 237);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        label_errR = new QLabel(rg);
        label_errR->setObjectName(QStringLiteral("label_errR"));
        label_errR->setGeometry(QRect(518, 138, 250, 31));
        label_errR->setFont(font1);
        label_errR->setStyleSheet(QLatin1String("font-size:16px;\n"
"color: rgb(251, 173, 88);"));
        lineEdit_password1R = new MyLineEdit(rg);
        lineEdit_password1R->setObjectName(QStringLiteral("lineEdit_password1R"));
        lineEdit_password1R->setGeometry(QRect(518, 222, 317, 45));
        lineEdit_password1R->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_password1R{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_password1R{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        label_star4 = new QLabel(rg);
        label_star4->setObjectName(QStringLiteral("label_star4"));
        label_star4->setGeometry(QRect(850, 333, 6, 6));
        label_star4->setFont(font);
        label_star4->setStyleSheet(QStringLiteral("color: rgb(251, 173, 88);"));
        lineEdit_password2R = new MyLineEdit(rg);
        lineEdit_password2R->setObjectName(QStringLiteral("lineEdit_password2R"));
        lineEdit_password2R->setGeometry(QRect(518, 267, 317, 45));
        lineEdit_password2R->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_password2R{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_password2R{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        label_star1 = new QLabel(rg);
        label_star1->setObjectName(QStringLiteral("label_star1"));
        label_star1->setGeometry(QRect(850, 193, 6, 6));
        label_star1->setFont(font);
        label_star1->setStyleSheet(QStringLiteral("color: rgb(251, 173, 88);"));
        btn_CloseR = new QPushButton(rg);
        btn_CloseR->setObjectName(QStringLiteral("btn_CloseR"));
        btn_CloseR->setGeometry(QRect(858, 17, 35, 35));
        btn_CloseR->setTabletTracking(false);
        btn_CloseR->setFocusPolicy(Qt::NoFocus);
        btn_CloseR->setStyleSheet(QLatin1String("QPushButton#btn_CloseR\n"
"{\n"
"      border-image: url(:/image/Close01.png);\n"
"}\n"
"QPushButton:hover#btn_CloseR\n"
"{\n"
"      border-image: url(:/image/Close_hover.png);\n"
"}"));
        lineEdit_AccountR = new MyLineEdit(rg);
        lineEdit_AccountR->setObjectName(QStringLiteral("lineEdit_AccountR"));
        lineEdit_AccountR->setGeometry(QRect(518, 177, 317, 45));
        lineEdit_AccountR->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_AccountR{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_AccountR{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        btn_Change1 = new QPushButton(rg);
        btn_Change1->setObjectName(QStringLiteral("btn_Change1"));
        btn_Change1->setGeometry(QRect(794, 224, 40, 41));
        btn_Change1->setStyleSheet(QLatin1String("QPushbutton{\n"
"\n"
"width:  16px;\n"
"height: 16px;\n"
"qproperty-flat: true;\n"
"margin-right: 4px;\n"
"border: none;\n"
"border-width: 0;\n"
"background: transparent;\n"
"}"));
        btn_Change1->setIconSize(QSize(32, 32));
        btn_Change1->setAutoDefault(false);
        btn_Change2 = new QPushButton(rg);
        btn_Change2->setObjectName(QStringLiteral("btn_Change2"));
        btn_Change2->setGeometry(QRect(794, 269, 40, 41));
        btn_Change2->setStyleSheet(QLatin1String("QPushbutton{\n"
"background: transparent;\n"
"width:  16px;\n"
"height: 16px;\n"
"qproperty-flat: true;\n"
"margin-right: 4px;\n"
"border: none;\n"
"border-width: 0;\n"
"}"));
        btn_Change2->setIconSize(QSize(32, 32));
        btn_Change2->setAutoDefault(false);
        btn_getCheckNum = new QPushButton(rg);
        btn_getCheckNum->setObjectName(QStringLiteral("btn_getCheckNum"));
        btn_getCheckNum->setGeometry(QRect(720, 312, 115, 45));
        btn_getCheckNum->setStyleSheet(QLatin1String("QPushButton:hover{font-size:16px;\n"
"color: rgb(255, 245, 237);\n"
"background-color:#A9E2F3;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton{\n"
"background-color:#58ACFA;\n"
"color: rgb(255, 245, 237);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        label_2 = new QLabel(rg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(408, 177, 100, 45));
        label_2->setStyleSheet(QLatin1String("font:bold \"Agency FB\";\n"
"font-size:18px;\n"
"color: rgb(110, 110, 110);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(rg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(408, 267, 100, 45));
        label_3->setStyleSheet(QLatin1String("font:bold \"Agency FB\";\n"
"font-size:18px;\n"
"color: rgb(110, 110, 110);"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(rg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(408, 312, 100, 45));
        label->setStyleSheet(QLatin1String("font:bold \"Agency FB\";\n"
"font-size:18px;\n"
"color: rgb(110, 110, 110);"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(rg);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(408, 222, 100, 45));
        label_4->setStyleSheet(QLatin1String("font:bold \"Agency FB\";\n"
"font-size:18px;\n"
"color: rgb(110, 110, 110);"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        stackedWidget->addWidget(rg);
        lineEdit_password1R->raise();
        btn_MinR->raise();
        lineEdit_CheckR->raise();
        label_star3->raise();
        label_picLoveR->raise();
        label_2R->raise();
        label_star2->raise();
        btn_RegisterR->raise();
        label_errR->raise();
        label_star4->raise();
        lineEdit_password2R->raise();
        label_star1->raise();
        btn_CloseR->raise();
        lineEdit_AccountR->raise();
        btn_Change1->raise();
        btn_Change2->raise();
        btn_getCheckNum->raise();
        label_2->raise();
        label_3->raise();
        label->raise();
        label_4->raise();
        rs = new QWidget();
        rs->setObjectName(QStringLiteral("rs"));
        min_rs = new QPushButton(rs);
        min_rs->setObjectName(QStringLiteral("min_rs"));
        min_rs->setGeometry(QRect(823, 17, 35, 35));
        min_rs->setFocusPolicy(Qt::NoFocus);
        min_rs->setStyleSheet(QLatin1String("QPushButton#min_rs{\n"
"border-image: url(:/image/Min01.png);\n"
"}\n"
"QPushButton:hover#min_rs{\n"
"border-image:url(:/image/Min_hover.png);\n"
"}"));
        close_rs = new QPushButton(rs);
        close_rs->setObjectName(QStringLiteral("close_rs"));
        close_rs->setGeometry(QRect(858, 17, 35, 35));
        close_rs->setFocusPolicy(Qt::NoFocus);
        close_rs->setStyleSheet(QLatin1String("QPushButton#close_rs\n"
"{\n"
"      border-image: url(:/image/Close01.png);\n"
"}\n"
"QPushButton:hover#close_rs\n"
"{\n"
"      border-image: url(:/image/Close_hover.png);\n"
"}"));
        label_gx = new QLabel(rs);
        label_gx->setObjectName(QStringLiteral("label_gx"));
        label_gx->setGeometry(QRect(122, 155, 431, 24));
        label_gx->setFont(font1);
        label_gx->setStyleSheet(QLatin1String("font-size:26px;\n"
"color: rgb(115, 115, 115);"));
        label_success = new QLabel(rs);
        label_success->setObjectName(QStringLiteral("label_success"));
        label_success->setGeometry(QRect(121, 200, 214, 54));
        label_success->setFont(font1);
        label_success->setStyleSheet(QLatin1String("font-size:52px;\n"
"color: rgb(229, 141, 62);"));
        label_right = new QLabel(rs);
        label_right->setObjectName(QStringLiteral("label_right"));
        label_right->setGeometry(QRect(638, 159, 204, 204));
        label_right->setStyleSheet(QStringLiteral("border-image: url(:/image/RegisterSuccess.png);"));
        btn_gotologin = new QPushButton(rs);
        btn_gotologin->setObjectName(QStringLiteral("btn_gotologin"));
        btn_gotologin->setGeometry(QRect(120, 339, 237, 48));
        btn_gotologin->setFont(font1);
        btn_gotologin->setFocusPolicy(Qt::NoFocus);
        btn_gotologin->setStyleSheet(QLatin1String("QPushButton#btn_gotologin{\n"
"font-size:24px;\n"
"background-color:rgb(251,173,88);\n"
"color: rgb(254, 245, 237);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:hover#btn_gotologin{\n"
"background-color:rgb(255,115,65);\n"
"color: rgb(254, 245, 237);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        stackedWidget->addWidget(rs);
        QWidget::setTabOrder(lineEdit_AccountR, lineEdit_password1R);
        QWidget::setTabOrder(lineEdit_password1R, lineEdit_password2R);
        QWidget::setTabOrder(lineEdit_password2R, lineEdit_CheckR);
        QWidget::setTabOrder(lineEdit_CheckR, btn_RegisterR);
        QWidget::setTabOrder(btn_RegisterR, min_rs);
        QWidget::setTabOrder(min_rs, close_rs);
        QWidget::setTabOrder(close_rs, btn_gotologin);

        retranslateUi(Register);

        stackedWidget->setCurrentIndex(0);
        btn_Change1->setDefault(false);
        btn_Change2->setDefault(false);


        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Form", Q_NULLPTR));
        btn_MinR->setText(QString());
        lineEdit_CheckR->setText(QString());
        label_star3->setText(QApplication::translate("Register", "*", Q_NULLPTR));
        label_picLoveR->setText(QString());
        label_2R->setText(QApplication::translate("Register", "\347\224\250\346\210\267\346\263\250\345\206\214", Q_NULLPTR));
        label_star2->setText(QApplication::translate("Register", "*", Q_NULLPTR));
        btn_RegisterR->setText(QApplication::translate("Register", "\346\263\250\345\206\214", Q_NULLPTR));
        label_errR->setText(QString());
        lineEdit_password1R->setText(QString());
        label_star4->setText(QApplication::translate("Register", "*", Q_NULLPTR));
        lineEdit_password2R->setText(QString());
        label_star1->setText(QApplication::translate("Register", "*", Q_NULLPTR));
        btn_CloseR->setText(QString());
        lineEdit_AccountR->setText(QString());
        btn_Change1->setText(QString());
        btn_Change2->setText(QString());
        btn_getCheckNum->setText(QApplication::translate("Register", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("Register", "\350\264\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("Register", "\346\211\213\346\234\272\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("Register", "\345\257\206\347\240\201", Q_NULLPTR));
        min_rs->setText(QString());
        close_rs->setText(QString());
        label_gx->setText(QApplication::translate("Register", " \346\201\255\345\226\234\346\202\250", Q_NULLPTR));
        label_success->setText(QApplication::translate("Register", "\346\263\250\345\206\214\346\210\220\345\212\237", Q_NULLPTR));
        label_right->setText(QString());
        btn_gotologin->setText(QApplication::translate("Register", "\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
