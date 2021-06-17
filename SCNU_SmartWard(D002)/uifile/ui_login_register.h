/********************************************************************************
** Form generated from reading UI file 'login_register.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_REGISTER_H
#define UI_LOGIN_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "combobox.h"
#include "mylineedit.h"

QT_BEGIN_NAMESPACE

class Ui_Login_Register
{
public:
    QPushButton *btn_Min;
    QPushButton *btn_Close;
    QLabel *label_err;
    ComboBox *combo_account;
    MyLineEdit *lineEdit_password;
    QCheckBox *checkBox_autoLogin;
    QPushButton *btn_Login;
    QLabel *label_RegisterAccount;
    QLabel *label_ForgetPW;
    QLabel *label_picLove;
    QPushButton *btn_GotoOfficialWeb;
    QLabel *label_2;

    void setupUi(QWidget *Login_Register)
    {
        if (Login_Register->objectName().isEmpty())
            Login_Register->setObjectName(QStringLiteral("Login_Register"));
        Login_Register->resize(911, 484);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login_Register->sizePolicy().hasHeightForWidth());
        Login_Register->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        Login_Register->setFont(font);
        Login_Register->setStyleSheet(QLatin1String("QWidget#Login_Register{\n"
"border-radius:10px;\n"
"}"));
        btn_Min = new QPushButton(Login_Register);
        btn_Min->setObjectName(QStringLiteral("btn_Min"));
        btn_Min->setGeometry(QRect(820, 17, 35, 35));
        btn_Min->setFocusPolicy(Qt::NoFocus);
        btn_Min->setStyleSheet(QLatin1String("QPushButton#btn_Min\n"
"{\n"
"     border-image:url(:/image/Min01.png);\n"
"}\n"
"QPushButton:hover#btn_Min\n"
"{\n"
"     border-image:url(:/image/Min_hover.png);\n"
"}"));
        btn_Close = new QPushButton(Login_Register);
        btn_Close->setObjectName(QStringLiteral("btn_Close"));
        btn_Close->setGeometry(QRect(858, 17, 35, 35));
        btn_Close->setFocusPolicy(Qt::NoFocus);
        btn_Close->setStyleSheet(QLatin1String("QPushButton#btn_Close\n"
"{\n"
"      border-image: url(:/image/Close01.png);\n"
"}\n"
"QPushButton:hover#btn_Close\n"
"{\n"
"      border-image: url(:/image/Close_hover.png);\n"
"}"));
        label_err = new QLabel(Login_Register);
        label_err->setObjectName(QStringLiteral("label_err"));
        label_err->setGeometry(QRect(508, 138, 250, 31));
        QFont font1;
        label_err->setFont(font1);
        label_err->setStyleSheet(QLatin1String("color: rgb(251, 173, 88);\n"
"font-size:16px;"));
        combo_account = new ComboBox(Login_Register);
        combo_account->setObjectName(QStringLiteral("combo_account"));
        combo_account->setGeometry(QRect(508, 177, 317, 45));
        combo_account->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	font-size:20px;\n"
"}\n"
"QComboBox#combo_account{\n"
"border:1px solid rgb(211,211,211);\n"
"height: 50px;\n"
"}\n"
"QComboBox:hover#combo_account{\n"
"border:1px solid rgb(255,170,0);\n"
"}\n"
"QComboBox::down-arrow#combo_account{\n"
"background-image: url(:/image/comboBox_btn (2).png);\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"height:5px;\n"
"width:12px;\n"
"}\n"
"QComboBox::down-arrow:hover#combo_account{\n"
"background-image: url(:/image/comboBox_btn (1).png);\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"height:5px;\n"
"width:12px;\n"
"}\n"
"QComboBox::down-arrow:checked#combo_account{\n"
"background-image: url(:/image/comboBox_btn (3).png);\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"height:5px;\n"
"width:12px;\n"
"}\n"
"QComboBox::drop-down{\n"
"	background-color: rgb(255,255,255);\n"
"}   \n"
"\n"
"QComboBox QAbstractItemView::item {\n"
"    height: 45px;   \n"
"/* \351\241\271\347\232\204\351\253\230\345\272\246"
                        "\357\274\210\350\256\276\347\275\256pComboBox->setView(new QListView());\345\220\216\357\274\214\350\257\245\351\241\271\346\211\215\350\265\267\344\275\234\347\224\250\357\274\211 */\n"
"}\n"
"\n"
"/* QComboBox\344\270\255\347\232\204\345\236\202\347\233\264\346\273\232\345\212\250\346\235\241 */\n"
"QComboBox QAbstractScrollArea QScrollBar:vertical {\n"
"    width: 10px;\n"
"    background-color: #d0d2d4;   /* \347\251\272\347\231\275\345\214\272\345\237\237\347\232\204\350\203\214\346\231\257\350\211\262  \347\201\260\350\211\262green */\n"
"}\n"
" \n"
"QComboBox QAbstractScrollArea QScrollBar::handle:vertical {\n"
"    border-radius: 5px;   /* \345\234\206\350\247\222 */\n"
"    background: rgb(160,160,160);   /* \345\260\217\346\226\271\345\235\227\347\232\204\350\203\214\346\231\257\350\211\262\346\267\261\347\201\260lightblue */\n"
"}\n"
" \n"
"QComboBox QAbstractScrollArea QScrollBar::handle:vertical:hover {\n"
"    background: rgb(90, 91, 93);   /* \350\266\212\350\277\207\345\260\217\346\226\271\345\235"
                        "\227\347\232\204\350\203\214\346\231\257\350\211\262yellow */\n"
"}\n"
""));
        combo_account->setEditable(true);
        lineEdit_password = new MyLineEdit(Login_Register);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(508, 222, 317, 46));
        lineEdit_password->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_password{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_password{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        checkBox_autoLogin = new QCheckBox(Login_Register);
        checkBox_autoLogin->setObjectName(QStringLiteral("checkBox_autoLogin"));
        checkBox_autoLogin->setGeometry(QRect(508, 290, 141, 16));
        checkBox_autoLogin->setFont(font1);
        checkBox_autoLogin->setFocusPolicy(Qt::TabFocus);
        checkBox_autoLogin->setStyleSheet(QLatin1String("QCheckBox{\n"
"	font-size:18px;\n"
"}\n"
"QCheckBox::indicator:unchecked{\n"
"    image:url(:/image/unchecked_1.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover{\n"
"    image:url(:/image/unchecked_2.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked{\n"
"    image:url(:/image/checked_1.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover{\n"
"    image:url(:/image/checked_2.png);\n"
"}"));
        btn_Login = new QPushButton(Login_Register);
        btn_Login->setObjectName(QStringLiteral("btn_Login"));
        btn_Login->setGeometry(QRect(508, 320, 317, 45));
        btn_Login->setFont(font1);
        btn_Login->setFocusPolicy(Qt::TabFocus);
        btn_Login->setStyleSheet(QLatin1String("QPushButton{\n"
"	font-size:24px;\n"
"}\n"
"QPushButton#btn_Login{\n"
"background-color:#58ACFA;\n"
"color: rgb(255, 245, 237);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:hover#btn_Login{\n"
"background-color:#A9E2F3;\n"
"color: rgb(255, 245, 237);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        label_RegisterAccount = new QLabel(Login_Register);
        label_RegisterAccount->setObjectName(QStringLiteral("label_RegisterAccount"));
        label_RegisterAccount->setGeometry(QRect(508, 410, 91, 18));
        label_RegisterAccount->setFont(font1);
        label_RegisterAccount->setStyleSheet(QLatin1String("QLabel{\n"
"	font-size:20px;\n"
"}\n"
"QLabel#label_RegisterAccount\n"
"{\n"
"color: #0080FF;\n"
"}\n"
"QLabel:hover#label_RegisterAccount\n"
"{\n"
"color: #01DFD7;\n"
"}"));
        label_ForgetPW = new QLabel(Login_Register);
        label_ForgetPW->setObjectName(QStringLiteral("label_ForgetPW"));
        label_ForgetPW->setGeometry(QRect(760, 410, 101, 18));
        label_ForgetPW->setFont(font1);
        label_ForgetPW->setStyleSheet(QLatin1String("QLabel{\n"
"	font-size:20px;\n"
"}\n"
"QLabel#label_ForgetPW\n"
"{\n"
"color: #0080FF;\n"
"}\n"
"QLabel:hover#label_ForgetPW\n"
"{\n"
"color:#01DFD7;\n"
"}"));
        label_picLove = new QLabel(Login_Register);
        label_picLove->setObjectName(QStringLiteral("label_picLove"));
        label_picLove->setGeometry(QRect(36, 26, 220, 55));
        label_picLove->setMinimumSize(QSize(220, 55));
        label_picLove->setStyleSheet(QStringLiteral("border-image: url(:/image/life_ring2.png);"));
        btn_GotoOfficialWeb = new QPushButton(Login_Register);
        btn_GotoOfficialWeb->setObjectName(QStringLiteral("btn_GotoOfficialWeb"));
        btn_GotoOfficialWeb->setGeometry(QRect(5, 340, 140, 48));
        btn_GotoOfficialWeb->setFont(font1);
        btn_GotoOfficialWeb->setFocusPolicy(Qt::NoFocus);
        btn_GotoOfficialWeb->setStyleSheet(QLatin1String("QPushButton{\n"
"	font-size:20px;\n"
"}\n"
"QPushButton#btn_GotoOfficialWeb{\n"
"border-top-right-radius:20px;\n"
"border-bottom-right-radius:20px;\n"
"background-color:#CEE3F6;\n"
"color: #0080FF;\n"
"\n"
"}\n"
"QPushButton:hover#btn_GotoOfficialWeb{\n"
"\n"
"color: #01DFD7;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        label_2 = new QLabel(Login_Register);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(508, 90, 131, 27));
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("color: rgb(110, 110, 110);\n"
"font-size:27px;"));

        retranslateUi(Login_Register);

        QMetaObject::connectSlotsByName(Login_Register);
    } // setupUi

    void retranslateUi(QWidget *Login_Register)
    {
        Login_Register->setWindowTitle(QApplication::translate("Login_Register", "Login_Register", Q_NULLPTR));
        btn_Min->setText(QString());
        btn_Close->setText(QString());
        label_err->setText(QString());
        lineEdit_password->setText(QString());
        checkBox_autoLogin->setText(QApplication::translate("Login_Register", "\344\270\213\346\254\241\350\207\252\345\212\250\347\231\273\345\275\225", Q_NULLPTR));
        btn_Login->setText(QApplication::translate("Login_Register", "\347\231\273\345\275\225", Q_NULLPTR));
        label_RegisterAccount->setText(QApplication::translate("Login_Register", "\346\263\250\345\206\214\350\264\246\345\217\267", Q_NULLPTR));
        label_ForgetPW->setText(QApplication::translate("Login_Register", "\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237", Q_NULLPTR));
        label_picLove->setText(QString());
        btn_GotoOfficialWeb->setText(QApplication::translate("Login_Register", "\345\211\215\345\276\200\345\256\230\347\275\221", Q_NULLPTR));
        label_2->setText(QApplication::translate("Login_Register", "\347\224\250\346\210\267\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login_Register: public Ui_Login_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_REGISTER_H
