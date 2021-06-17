/********************************************************************************
** Form generated from reading UI file 'suretoexistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SURETOEXISTDIALOG_H
#define UI_SURETOEXISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SureToExistDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QLabel *label;
    QPushButton *btn_yes;
    QLabel *label_2;
    QPushButton *btn_no;
    QPushButton *btn_close;

    void setupUi(QDialog *SureToExistDialog)
    {
        if (SureToExistDialog->objectName().isEmpty())
            SureToExistDialog->setObjectName(QStringLiteral("SureToExistDialog"));
        SureToExistDialog->resize(476, 281);
        SureToExistDialog->setMinimumSize(QSize(476, 281));
        verticalLayout = new QVBoxLayout(SureToExistDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(SureToExistDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(476, 281));
        frame->setStyleSheet(QLatin1String("QFrame#frame1{background-color: #fff6e8;\n"
"border-radius: 20px;\n"
"border: 1px solid  #f39700;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 50, 88, 88));
        label->setStyleSheet(QLatin1String("QLabel#label\n"
"{\n"
"      border-image: url(:/image/images/yellow_warning188.png);\n"
"}"));
        btn_yes = new QPushButton(frame);
        btn_yes->setObjectName(QStringLiteral("btn_yes"));
        btn_yes->setGeometry(QRect(60, 210, 116, 37));
        QFont font;
        font.setFamily(QStringLiteral("SimHei"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        btn_yes->setFont(font);
        btn_yes->setFocusPolicy(Qt::NoFocus);
        btn_yes->setStyleSheet(QLatin1String("QPushButton{\n"
"border-image: url(:/image/images/btn_SaveInfo_normal.png);\n"
"background:transparent;\n"
"color:white;\n"
"font: 20px SimHei;\n"
"}\n"
"QPushButton::hover{\n"
"	border-image: url(:/image/images/btn_SaveInfo_hover.png);\n"
"}\n"
"QPushButton::pressed{\n"
"	border-image: url(:/image/images/btn_SaveInfo_pressed.png);\n"
"}\n"
"                     QPushButton{}"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 160, 280, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("QLabel{color:#898989;font: 25px SimHei;}"));
        label_2->setAlignment(Qt::AlignCenter);
        btn_no = new QPushButton(frame);
        btn_no->setObjectName(QStringLiteral("btn_no"));
        btn_no->setGeometry(QRect(300, 210, 116, 37));
        btn_no->setFont(font);
        btn_no->setFocusPolicy(Qt::NoFocus);
        btn_no->setStyleSheet(QLatin1String("QPushButton{\n"
"border-image: url(:/image/images/btn_SaveInfo_normal.png);\n"
"background:transparent;\n"
"color:white;\n"
"font: 20px SimHei;\n"
"}\n"
"QPushButton::hover{\n"
"	border-image: url(:/image/images/btn_SaveInfo_hover.png);\n"
"}\n"
"QPushButton::pressed{\n"
"	border-image: url(:/image/images/btn_SaveInfo_pressed.png);\n"
"}\n"
""));
        btn_close = new QPushButton(frame);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setGeometry(QRect(430, 10, 36, 36));
        btn_close->setFocusPolicy(Qt::NoFocus);
        btn_close->setStyleSheet(QLatin1String("QPushButton#btn_close\n"
"{\n"
"      border-image: url(:/image/images/close_hover.png);\n"
"}\n"
"QPushButton:hover#btn_close\n"
"{\n"
"      border-image: url(:/image/images/close_pressed.png);\n"
"}\n"
"QPushButton:pressed#btn_close\n"
"{\n"
"      border-image: url(:/image/images/close_normal.png);\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(frame);


        retranslateUi(SureToExistDialog);

        QMetaObject::connectSlotsByName(SureToExistDialog);
    } // setupUi

    void retranslateUi(QDialog *SureToExistDialog)
    {
        SureToExistDialog->setWindowTitle(QApplication::translate("SureToExistDialog", "Dialog", Q_NULLPTR));
        label->setText(QString());
        btn_yes->setText(QApplication::translate("SureToExistDialog", "\346\230\257", Q_NULLPTR));
        label_2->setText(QApplication::translate("SureToExistDialog", "\346\230\257\345\220\246\351\200\200\345\207\272\357\274\237", Q_NULLPTR));
        btn_no->setText(QApplication::translate("SureToExistDialog", "\345\220\246", Q_NULLPTR));
        btn_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SureToExistDialog: public Ui_SureToExistDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SURETOEXISTDIALOG_H
