/********************************************************************************
** Form generated from reading UI file 'changepw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPW_H
#define UI_CHANGEPW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include <mylineedit.h>

QT_BEGIN_NAMESPACE

class Ui_ChangePW
{
public:
    QStackedWidget *stackedWidget;
    QWidget *changePW1;
    QPushButton *btn_CloseC;
    MyLineEdit *lineEdit_password2C;
    QPushButton *btn_MinC;
    QPushButton *btn_CommitC;
    QLabel *label_picLoveC;
    MyLineEdit *lineEdit_password1C;
    QLabel *label_picBluekidC;
    QLabel *label_2C;
    QLabel *label_errC;
    MyLineEdit *lineEdit_CurrentPW;
    QLabel *label_CurrentPW;
    QLabel *label_passwordC1;
    QLabel *label_passwordC2;
    QPushButton *btn_password1;
    QPushButton *btn_CurrentPW;
    QPushButton *btn_password2;
    QWidget *changePW2;

    void setupUi(QWidget *ChangePW)
    {
        if (ChangePW->objectName().isEmpty())
            ChangePW->setObjectName(QStringLiteral("ChangePW"));
        ChangePW->resize(911, 484);
        ChangePW->setStyleSheet(QLatin1String("QWidget#ChangePW{\n"
"border-radius:10px;\n"
"}"));
        stackedWidget = new QStackedWidget(ChangePW);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 911, 484));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(9);
        stackedWidget->setFont(font);
        changePW1 = new QWidget();
        changePW1->setObjectName(QStringLiteral("changePW1"));
        btn_CloseC = new QPushButton(changePW1);
        btn_CloseC->setObjectName(QStringLiteral("btn_CloseC"));
        btn_CloseC->setGeometry(QRect(858, 17, 35, 35));
        btn_CloseC->setFocusPolicy(Qt::NoFocus);
        btn_CloseC->setStyleSheet(QLatin1String("QPushButton#btn_CloseC\n"
"{\n"
"      border-image: url(:/changepw/images/changepw_image/Close01.png);\n"
"}\n"
"QPushButton:hover#btn_CloseC\n"
"{\n"
"      border-image: url(:/changepw/images/changepw_image/Close_hover.png);\n"
"}"));
        lineEdit_password2C = new MyLineEdit(changePW1);
        lineEdit_password2C->setObjectName(QStringLiteral("lineEdit_password2C"));
        lineEdit_password2C->setGeometry(QRect(518, 267, 317, 45));
        lineEdit_password2C->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_password2C{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_password2C{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        btn_MinC = new QPushButton(changePW1);
        btn_MinC->setObjectName(QStringLiteral("btn_MinC"));
        btn_MinC->setGeometry(QRect(823, 17, 35, 35));
        btn_MinC->setFocusPolicy(Qt::NoFocus);
        btn_MinC->setStyleSheet(QLatin1String("QPushButton#btn_MinC\n"
"{\n"
"     border-image:url(:/changepw/images/changepw_image/Min01.png);\n"
"}\n"
"QPushButton:hover#btn_MinC\n"
"{\n"
"     border-image:url(:/changepw/images/changepw_image/Min_hover.png);\n"
"}"));
        btn_CommitC = new QPushButton(changePW1);
        btn_CommitC->setObjectName(QStringLiteral("btn_CommitC"));
        btn_CommitC->setGeometry(QRect(518, 360, 317, 48));
        QFont font1;
        btn_CommitC->setFont(font1);
        btn_CommitC->setFocusPolicy(Qt::NoFocus);
        btn_CommitC->setStyleSheet(QLatin1String("QPushButton{\n"
"	font-size:24px;\n"
"}\n"
"QPushButton#btn_CommitC{\n"
"background-color:rgb(255,174,81);\n"
"color: rgb(254, 245, 237);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:hover#btn_CommitC{\n"
"background-color:rgb(255,115,65);\n"
"color: rgb(254, 245, 237);\n"
"border-radius:5px;\n"
"}\n"
""));
        label_picLoveC = new QLabel(changePW1);
        label_picLoveC->setObjectName(QStringLiteral("label_picLoveC"));
        label_picLoveC->setGeometry(QRect(36, 26, 113, 44));
        label_picLoveC->setStyleSheet(QLatin1String("border-image: url(:/changepw/images/changepw_image/Loveyyyy.png);\n"
""));
        lineEdit_password1C = new MyLineEdit(changePW1);
        lineEdit_password1C->setObjectName(QStringLiteral("lineEdit_password1C"));
        lineEdit_password1C->setGeometry(QRect(518, 222, 317, 45));
        lineEdit_password1C->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_password1C{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_password1C{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        label_picBluekidC = new QLabel(changePW1);
        label_picBluekidC->setObjectName(QStringLiteral("label_picBluekidC"));
        label_picBluekidC->setGeometry(QRect(96, 138, 304, 351));
        label_picBluekidC->setStyleSheet(QStringLiteral("border-image: url(:/changepw/images/changepw_image/blue_pants.png);"));
        label_picBluekidC->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2C = new QLabel(changePW1);
        label_2C->setObjectName(QStringLiteral("label_2C"));
        label_2C->setGeometry(QRect(508, 90, 131, 27));
        label_2C->setFont(font1);
        label_2C->setStyleSheet(QLatin1String("color: rgb(110, 110, 110);\n"
"font-size:27px;"));
        label_errC = new QLabel(changePW1);
        label_errC->setObjectName(QStringLiteral("label_errC"));
        label_errC->setGeometry(QRect(508, 138, 250, 31));
        label_errC->setFont(font1);
        label_errC->setStyleSheet(QLatin1String("color: rgb(251, 173, 88);\n"
"font-size:16px;"));
        lineEdit_CurrentPW = new MyLineEdit(changePW1);
        lineEdit_CurrentPW->setObjectName(QStringLiteral("lineEdit_CurrentPW"));
        lineEdit_CurrentPW->setGeometry(QRect(518, 177, 317, 45));
        lineEdit_CurrentPW->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font-size:20px;\n"
"}\n"
"QLineEdit#lineEdit_CurrentPW{\n"
"border:1px solid rgb(211,211,211);\n"
"}\n"
"QLineEdit:hover#lineEdit_CurrentPW{\n"
"border:1px solid rgb(255,170,0);\n"
"}"));
        label_CurrentPW = new QLabel(changePW1);
        label_CurrentPW->setObjectName(QStringLiteral("label_CurrentPW"));
        label_CurrentPW->setGeometry(QRect(408, 177, 100, 45));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_CurrentPW->setFont(font2);
        label_CurrentPW->setStyleSheet(QLatin1String("font:bold \"Agency FB\";\n"
"font-size:18px;\n"
"color: rgb(110, 110, 110);"));
        label_CurrentPW->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_passwordC1 = new QLabel(changePW1);
        label_passwordC1->setObjectName(QStringLiteral("label_passwordC1"));
        label_passwordC1->setGeometry(QRect(408, 222, 100, 45));
        label_passwordC1->setFont(font2);
        label_passwordC1->setStyleSheet(QLatin1String("font:bold \"Agency FB\";\n"
"font-size:18px;\n"
"color: rgb(110, 110, 110);"));
        label_passwordC1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_passwordC2 = new QLabel(changePW1);
        label_passwordC2->setObjectName(QStringLiteral("label_passwordC2"));
        label_passwordC2->setGeometry(QRect(408, 267, 100, 45));
        label_passwordC2->setFont(font2);
        label_passwordC2->setStyleSheet(QLatin1String("font:bold \"Agency FB\";\n"
"font-size:18px;\n"
"color: rgb(110, 110, 110);"));
        label_passwordC2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btn_password1 = new QPushButton(changePW1);
        btn_password1->setObjectName(QStringLiteral("btn_password1"));
        btn_password1->setGeometry(QRect(794, 224, 40, 41));
        btn_password1->setStyleSheet(QLatin1String(" QPushButton {\n"
"    width:  16px;\n"
"    height: 16px;\n"
"    qproperty-flat: true;\n"
"    margin-right: 4px;\n"
"    border: none;\n"
"    border-width: 0;\n"
"    background: transparent;    \n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/changepw/images/changepw_image/btn_kejian2.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/changepw/images/changepw_image/btn_bukejian2.png"), QSize(), QIcon::Normal, QIcon::On);
        btn_password1->setIcon(icon);
        btn_password1->setIconSize(QSize(32, 32));
        btn_CurrentPW = new QPushButton(changePW1);
        btn_CurrentPW->setObjectName(QStringLiteral("btn_CurrentPW"));
        btn_CurrentPW->setGeometry(QRect(794, 179, 40, 41));
        btn_CurrentPW->setAutoFillBackground(false);
        btn_CurrentPW->setStyleSheet(QLatin1String(" QPushButton {\n"
"    width:  16px;\n"
"    height: 16px;\n"
"    qproperty-flat: true;\n"
"    margin-right: 4px;\n"
"    border: none;\n"
"    border-width: 0;\n"
"    background: transparent;    \n"
"}"));
        btn_CurrentPW->setIconSize(QSize(32, 32));
        btn_password2 = new QPushButton(changePW1);
        btn_password2->setObjectName(QStringLiteral("btn_password2"));
        btn_password2->setGeometry(QRect(794, 269, 40, 41));
        btn_password2->setStyleSheet(QLatin1String(" QPushButton {\n"
"    width:  16px;\n"
"    height: 16px;\n"
"    qproperty-flat: true;\n"
"    margin-right: 4px;\n"
"    border: none;\n"
"    border-width: 0;\n"
"    background: transparent;    \n"
"}"));
        btn_password2->setIcon(icon);
        btn_password2->setIconSize(QSize(32, 32));
        stackedWidget->addWidget(changePW1);
        changePW2 = new QWidget();
        changePW2->setObjectName(QStringLiteral("changePW2"));
        stackedWidget->addWidget(changePW2);
        QWidget::setTabOrder(lineEdit_CurrentPW, lineEdit_password1C);
        QWidget::setTabOrder(lineEdit_password1C, lineEdit_password2C);

        retranslateUi(ChangePW);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ChangePW);
    } // setupUi

    void retranslateUi(QWidget *ChangePW)
    {
        ChangePW->setWindowTitle(QApplication::translate("ChangePW", "Form", Q_NULLPTR));
        btn_CloseC->setText(QString());
        lineEdit_password2C->setText(QString());
        btn_MinC->setText(QString());
        btn_CommitC->setText(QApplication::translate("ChangePW", "\346\217\220\344\272\244\347\224\263\350\257\267", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn_CommitC->setShortcut(QApplication::translate("ChangePW", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_picLoveC->setText(QString());
        lineEdit_password1C->setText(QString());
        label_picBluekidC->setText(QString());
        label_2C->setText(QApplication::translate("ChangePW", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label_errC->setText(QString());
        lineEdit_CurrentPW->setText(QString());
        label_CurrentPW->setText(QApplication::translate("ChangePW", "\345\275\223\345\211\215\345\257\206\347\240\201", Q_NULLPTR));
        label_passwordC1->setText(QApplication::translate("ChangePW", "\346\226\260\345\257\206\347\240\201", Q_NULLPTR));
        label_passwordC2->setText(QApplication::translate("ChangePW", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        btn_password1->setText(QString());
        btn_CurrentPW->setText(QString());
        btn_password2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChangePW: public Ui_ChangePW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPW_H
