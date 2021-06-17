/********************************************************************************
** Form generated from reading UI file 'forgetpassword_1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPASSWORD_1_H
#define UI_FORGETPASSWORD_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "mylineedit.h"

QT_BEGIN_NAMESPACE

class Ui_ForgetPassword_1
{
public:
    QPushButton *btn_MinR;
    QLabel *label_picLoveR;
    QPushButton *btn_SubmitF1;
    QPushButton *btn_CloseR;
    MyLineEdit *lineEdit_CheckRF1;
    MyLineEdit *lineEdit_PhoneF1;
    QLabel *label_2R;
    QLabel *label_errRF1;
    MyLineEdit *lineEdit_Password1;
    MyLineEdit *lineEdit_Password2;
    QPushButton *btn_Change1;
    QPushButton *btn_Change2;
    QPushButton *btn_getCheckNumF1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;

    void setupUi(QWidget *ForgetPassword_1)
    {
        if (ForgetPassword_1->objectName().isEmpty())
            ForgetPassword_1->setObjectName(QStringLiteral("ForgetPassword_1"));
        ForgetPassword_1->resize(911, 484);
        ForgetPassword_1->setStyleSheet(QLatin1String("QWidget#ForgetPassword_1{\n"
"border-radius:10px;\n"
"}"));
        btn_MinR = new QPushButton(ForgetPassword_1);
        btn_MinR->setObjectName(QStringLiteral("btn_MinR"));
        btn_MinR->setGeometry(QRect(820, 17, 35, 35));
        btn_MinR->setFocusPolicy(Qt::NoFocus);
        btn_MinR->setStyleSheet(QLatin1String("QPushButton#btn_MinR\n"
"{\n"
"     border-image:url(:/image/Min01.png);\n"
"}\n"
"QPushButton:hover#btn_MinR\n"
"{\n"
"     border-image:url(:/image/Min_hover.png);\n"
"}"));
        label_picLoveR = new QLabel(ForgetPassword_1);
        label_picLoveR->setObjectName(QStringLiteral("label_picLoveR"));
        label_picLoveR->setGeometry(QRect(36, 26, 220, 55));
        label_picLoveR->setMinimumSize(QSize(220, 55));
        label_picLoveR->setStyleSheet(QStringLiteral("border-image: url(:/image/life_ring2.png);"));
        btn_SubmitF1 = new QPushButton(ForgetPassword_1);
        btn_SubmitF1->setObjectName(QStringLiteral("btn_SubmitF1"));
        btn_SubmitF1->setGeometry(QRect(509, 390, 317, 48));
        QFont font;
        btn_SubmitF1->setFont(font);
        btn_SubmitF1->setFocusPolicy(Qt::TabFocus);
        btn_SubmitF1->setStyleSheet(QLatin1String("QPushButton{\n"
"	font-size:24px;\n"
"}\n"
"QPushButton:hover#btn_SubmitF1{\n"
"background-color:#A9E2F3;\n"
"color: rgb(254, 245, 237);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#btn_SubmitF1{\n"
"background-color:#58ACFA;\n"
"color: rgb(254, 245, 237);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        btn_CloseR = new QPushButton(ForgetPassword_1);
        btn_CloseR->setObjectName(QStringLiteral("btn_CloseR"));
        btn_CloseR->setGeometry(QRect(858, 17, 35, 35));
        btn_CloseR->setFocusPolicy(Qt::NoFocus);
        btn_CloseR->setStyleSheet(QLatin1String("QPushButton#btn_CloseR\n"
"{\n"
"      border-image: url(:/image/Close01.png);\n"
"}\n"
"QPushButton:hover#btn_CloseR\n"
"{\n"
"      border-image: url(:/image/Close_hover.png);\n"
"}"));
        lineEdit_CheckRF1 = new MyLineEdit(ForgetPassword_1);
        lineEdit_CheckRF1->setObjectName(QStringLiteral("lineEdit_CheckRF1"));
        lineEdit_CheckRF1->setGeometry(QRect(518, 312, 317, 45));
        lineEdit_CheckRF1->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_CheckRF1{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_CheckRF1{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        lineEdit_PhoneF1 = new MyLineEdit(ForgetPassword_1);
        lineEdit_PhoneF1->setObjectName(QStringLiteral("lineEdit_PhoneF1"));
        lineEdit_PhoneF1->setGeometry(QRect(518, 177, 317, 45));
        lineEdit_PhoneF1->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_PhoneF1{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_PhoneF1{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        label_2R = new QLabel(ForgetPassword_1);
        label_2R->setObjectName(QStringLiteral("label_2R"));
        label_2R->setGeometry(QRect(518, 90, 131, 27));
        label_2R->setFont(font);
        label_2R->setStyleSheet(QLatin1String("font-size:27px;\n"
"color: rgb(110, 110, 110);"));
        label_errRF1 = new QLabel(ForgetPassword_1);
        label_errRF1->setObjectName(QStringLiteral("label_errRF1"));
        label_errRF1->setGeometry(QRect(518, 138, 250, 31));
        label_errRF1->setFont(font);
        label_errRF1->setStyleSheet(QLatin1String("font-size:16px;\n"
"color: rgb(251, 173, 88);"));
        lineEdit_Password1 = new MyLineEdit(ForgetPassword_1);
        lineEdit_Password1->setObjectName(QStringLiteral("lineEdit_Password1"));
        lineEdit_Password1->setGeometry(QRect(518, 222, 317, 45));
        lineEdit_Password1->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_Password1{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_Password1{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        lineEdit_Password2 = new MyLineEdit(ForgetPassword_1);
        lineEdit_Password2->setObjectName(QStringLiteral("lineEdit_Password2"));
        lineEdit_Password2->setGeometry(QRect(518, 267, 317, 45));
        lineEdit_Password2->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_Password2{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_Password2{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        btn_Change1 = new QPushButton(ForgetPassword_1);
        btn_Change1->setObjectName(QStringLiteral("btn_Change1"));
        btn_Change1->setGeometry(QRect(794, 224, 40, 41));
        btn_Change1->setIconSize(QSize(32, 32));
        btn_Change2 = new QPushButton(ForgetPassword_1);
        btn_Change2->setObjectName(QStringLiteral("btn_Change2"));
        btn_Change2->setGeometry(QRect(794, 269, 40, 41));
        btn_Change2->setIconSize(QSize(32, 32));
        btn_getCheckNumF1 = new QPushButton(ForgetPassword_1);
        btn_getCheckNumF1->setObjectName(QStringLiteral("btn_getCheckNumF1"));
        btn_getCheckNumF1->setGeometry(QRect(720, 312, 115, 45));
        btn_getCheckNumF1->setStyleSheet(QLatin1String("QPushButton:hover{font-size:16px;\n"
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
        label_2 = new QLabel(ForgetPassword_1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 177, 100, 45));
        label_2->setStyleSheet(QLatin1String("font:bold \"Agency FB\";\n"
"font-size:18px;\n"
"color: rgb(110, 110, 110);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(ForgetPassword_1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(400, 267, 100, 45));
        label_3->setStyleSheet(QLatin1String("font:bold \"Agency FB\";\n"
"font-size:18px;\n"
"color: rgb(110, 110, 110);"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(ForgetPassword_1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 312, 100, 45));
        label->setStyleSheet(QLatin1String("font:bold \"Agency FB\";\n"
"font-size:18px;\n"
"color: rgb(110, 110, 110);"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(ForgetPassword_1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(400, 222, 100, 45));
        label_4->setStyleSheet(QLatin1String("font:bold \"Agency FB\";\n"
"font-size:18px;\n"
"color: rgb(110, 110, 110);"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        QWidget::setTabOrder(lineEdit_PhoneF1, lineEdit_Password1);
        QWidget::setTabOrder(lineEdit_Password1, lineEdit_Password2);
        QWidget::setTabOrder(lineEdit_Password2, lineEdit_CheckRF1);
        QWidget::setTabOrder(lineEdit_CheckRF1, btn_SubmitF1);

        retranslateUi(ForgetPassword_1);

        QMetaObject::connectSlotsByName(ForgetPassword_1);
    } // setupUi

    void retranslateUi(QWidget *ForgetPassword_1)
    {
        ForgetPassword_1->setWindowTitle(QApplication::translate("ForgetPassword_1", "Form", Q_NULLPTR));
        btn_MinR->setText(QString());
        label_picLoveR->setText(QString());
        btn_SubmitF1->setText(QApplication::translate("ForgetPassword_1", "\346\217\220\344\272\244\347\224\263\350\257\267", Q_NULLPTR));
        btn_CloseR->setText(QString());
        lineEdit_CheckRF1->setText(QString());
        lineEdit_PhoneF1->setText(QString());
        label_2R->setText(QApplication::translate("ForgetPassword_1", "\345\277\230\350\256\260\345\257\206\347\240\201", Q_NULLPTR));
        label_errRF1->setText(QString());
        lineEdit_Password1->setText(QString());
        lineEdit_Password2->setText(QString());
        btn_Change1->setText(QString());
        btn_Change2->setText(QString());
        btn_getCheckNumF1->setText(QApplication::translate("ForgetPassword_1", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("ForgetPassword_1", "\350\264\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("ForgetPassword_1", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("ForgetPassword_1", "\346\211\213\346\234\272\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("ForgetPassword_1", "\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ForgetPassword_1: public Ui_ForgetPassword_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPASSWORD_1_H
