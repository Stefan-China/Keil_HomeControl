/********************************************************************************
** Form generated from reading UI file 'settingform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGFORM_H
#define UI_SETTINGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingForm
{
public:
    QPushButton *buttonClose;
    QLabel *label;
    QPushButton *buttonConfirm;
    QFrame *line;
    QLabel *label_2;
    QPushButton *buttonDelete;
    QFrame *line_2;
    QPushButton *buttonRename;
    QLineEdit *editDevice;

    void setupUi(QWidget *SettingForm)
    {
        if (SettingForm->objectName().isEmpty())
            SettingForm->setObjectName(QStringLiteral("SettingForm"));
        SettingForm->resize(720, 425);
        SettingForm->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"	background-color: rgb(255, 250, 248);\n"
"}\n"
"\n"
"QPushButton#buttonConfirm\n"
"{\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 170, 0);\n"
"	border-radius:10px\n"
"}\n"
"QPushButton:hover#buttonConfirm\n"
"{\n"
"    \n"
"	background-color: rgb(193, 255, 46);\n"
"}\n"
"QPushButton#buttonRename\n"
"{\n"
"	\n"
"	color: rgb(255, 170, 0);\n"
"	background:transparent;\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QPushButton:hover#buttonRename\n"
"{\n"
"	color: rgb(85, 170, 0);\n"
"	background:transparent;\n"
"	background-color: transparent;\n"
"}\n"
"QPushButton:pressed#buttonRename\n"
"{\n"
"	color: rgb(255, 85, 0);\n"
"	background:transparent;\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QPushButton#buttonDelete\n"
"{\n"
"	\n"
"	color: rgb(255, 170, 0);\n"
"	background:transparent;\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QPushButton:hover#buttonDelete\n"
"{\n"
"	color: rgb(85, 170, 0);\n"
"	background:transparent;\n"
"	background-color: transpar"
                        "ent;\n"
"}\n"
"QPushButton:pressed#buttonDelete\n"
"{\n"
"	color: rgb(255, 85, 0);\n"
"	background:transparent;\n"
"	background-color: transparent;\n"
"}\n"
"Line\n"
"{\n"
"	background-color: rgb(255, 250, 248);\n"
"}\n"
"QLineEdit\n"
"{\n"
"	background-color: transparent;\n"
"	border-width:0;\n"
"	border-style:outset\n"
"}"));
        buttonClose = new QPushButton(SettingForm);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));
        buttonClose->setGeometry(QRect(610, 20, 75, 31));
        label = new QLabel(SettingForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 121, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(16);
        label->setFont(font);
        buttonConfirm = new QPushButton(SettingForm);
        buttonConfirm->setObjectName(QStringLiteral("buttonConfirm"));
        buttonConfirm->setGeometry(QRect(290, 330, 140, 50));
        QFont font1;
        font1.setPointSize(12);
        buttonConfirm->setFont(font1);
        line = new QFrame(SettingForm);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(60, 170, 600, 31));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(SettingForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 140, 101, 40));
        label_2->setFont(font1);
        buttonDelete = new QPushButton(SettingForm);
        buttonDelete->setObjectName(QStringLiteral("buttonDelete"));
        buttonDelete->setGeometry(QRect(550, 140, 120, 40));
        line_2 = new QFrame(SettingForm);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(60, 265, 600, 31));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        buttonRename = new QPushButton(SettingForm);
        buttonRename->setObjectName(QStringLiteral("buttonRename"));
        buttonRename->setGeometry(QRect(550, 235, 120, 40));
        buttonRename->setFont(font1);
        editDevice = new QLineEdit(SettingForm);
        editDevice->setObjectName(QStringLiteral("editDevice"));
        editDevice->setGeometry(QRect(60, 235, 113, 40));
        editDevice->setFont(font1);

        retranslateUi(SettingForm);

        QMetaObject::connectSlotsByName(SettingForm);
    } // setupUi

    void retranslateUi(QWidget *SettingForm)
    {
        SettingForm->setWindowTitle(QApplication::translate("SettingForm", "Form", Q_NULLPTR));
        buttonClose->setText(QApplication::translate("SettingForm", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("SettingForm", "\350\256\276\347\275\256\344\277\256\346\224\271", Q_NULLPTR));
        buttonConfirm->setText(QApplication::translate("SettingForm", "\347\241\256\350\256\244", Q_NULLPTR));
        label_2->setText(QApplication::translate("SettingForm", "\345\210\240\351\231\244\345\275\223\345\211\215\350\256\276\345\244\207", Q_NULLPTR));
        buttonDelete->setText(QApplication::translate("SettingForm", "\345\210\240\351\231\244", Q_NULLPTR));
        buttonRename->setText(QApplication::translate("SettingForm", "\347\202\271\345\207\273\344\277\256\346\224\271", Q_NULLPTR));
        editDevice->setText(QApplication::translate("SettingForm", "\347\224\265\351\245\255\347\205\262", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingForm: public Ui_SettingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGFORM_H
