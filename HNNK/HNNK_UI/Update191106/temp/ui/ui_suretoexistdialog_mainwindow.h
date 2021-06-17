/********************************************************************************
** Form generated from reading UI file 'suretoexistdialog_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SURETOEXISTDIALOG_MAINWINDOW_H
#define UI_SURETOEXISTDIALOG_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SureToExistDialog_mainwindow
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *label;
    QPushButton *btn_close;
    QPushButton *btn_yes;
    QPushButton *btn_no;
    QLabel *label_2;

    void setupUi(QDialog *SureToExistDialog_mainwindow)
    {
        if (SureToExistDialog_mainwindow->objectName().isEmpty())
            SureToExistDialog_mainwindow->setObjectName(QStringLiteral("SureToExistDialog_mainwindow"));
        SureToExistDialog_mainwindow->resize(476, 280);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SureToExistDialog_mainwindow->sizePolicy().hasHeightForWidth());
        SureToExistDialog_mainwindow->setSizePolicy(sizePolicy);
        SureToExistDialog_mainwindow->setMinimumSize(QSize(476, 280));
        SureToExistDialog_mainwindow->setMaximumSize(QSize(476, 280));
        gridLayout = new QGridLayout(SureToExistDialog_mainwindow);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(SureToExistDialog_mainwindow);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(476, 280));
        frame->setMaximumSize(QSize(476, 280));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(185, 30, 106, 106));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(106, 106));
        label->setMaximumSize(QSize(106, 106));
        label->setStyleSheet(QLatin1String("QLabel#label\n"
"{\n"
"      border-image: url(:/image/images/yellow_warning188.png);\n"
"}"));
        btn_close = new QPushButton(frame);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setGeometry(QRect(430, 10, 36, 36));
        sizePolicy.setHeightForWidth(btn_close->sizePolicy().hasHeightForWidth());
        btn_close->setSizePolicy(sizePolicy);
        btn_close->setMinimumSize(QSize(36, 36));
        btn_close->setMaximumSize(QSize(36, 36));
        btn_close->setCursor(QCursor(Qt::PointingHandCursor));
        btn_close->setFocusPolicy(Qt::NoFocus);
        btn_close->setStyleSheet(QLatin1String("QPushButton#btn_close\n"
"{\n"
"      border-image: url(:/image/Close01.png);\n"
"}\n"
"QPushButton:hover#btn_close\n"
"{\n"
"      border-image: url(:/image/Close_hover.png);\n"
"}"));
        btn_yes = new QPushButton(frame);
        btn_yes->setObjectName(QStringLiteral("btn_yes"));
        btn_yes->setGeometry(QRect(40, 216, 99, 40));
        sizePolicy.setHeightForWidth(btn_yes->sizePolicy().hasHeightForWidth());
        btn_yes->setSizePolicy(sizePolicy);
        btn_yes->setMinimumSize(QSize(99, 40));
        btn_yes->setMaximumSize(QSize(99, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        btn_yes->setFont(font);
        btn_yes->setCursor(QCursor(Qt::PointingHandCursor));
        btn_yes->setFocusPolicy(Qt::NoFocus);
        btn_yes->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/images/btn_SaveInfo_normal.png);\n"
"background:transparent;\n"
"color:white;\n"
"font: 20px \"\351\273\221\344\275\223\";\n"
"}\n"
"QPushButton::hover{\n"
"	border-image: url(:/image/images/btn_SaveInfo_hover.png);\n"
"}\n"
"QPushButton::pressed{\n"
"	border-image: url(:/image/images/btn_SaveInfo_pressed.png);\n"
"}"));
        btn_no = new QPushButton(frame);
        btn_no->setObjectName(QStringLiteral("btn_no"));
        btn_no->setGeometry(QRect(343, 216, 99, 40));
        sizePolicy.setHeightForWidth(btn_no->sizePolicy().hasHeightForWidth());
        btn_no->setSizePolicy(sizePolicy);
        btn_no->setMinimumSize(QSize(99, 40));
        btn_no->setMaximumSize(QSize(99, 40));
        btn_no->setFont(font);
        btn_no->setCursor(QCursor(Qt::PointingHandCursor));
        btn_no->setFocusPolicy(Qt::NoFocus);
        btn_no->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/images/btn_SaveInfo_normal.png);\n"
"background:transparent;\n"
"color:white;\n"
"font: 20px \"\351\273\221\344\275\223\";\n"
"}\n"
"QPushButton::hover{\n"
"	border-image: url(:/image/images/btn_SaveInfo_hover.png);\n"
"}\n"
"QPushButton::pressed{\n"
"	border-image: url(:/image/images/btn_SaveInfo_pressed.png);\n"
"}\n"
""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(106, 140, 265, 76));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(265, 76));
        label_2->setMaximumSize(QSize(265, 76));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("color: rgb(251, 173, 88);\n"
"QLabel{color:#898989;font: 25px SimHei;}"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(SureToExistDialog_mainwindow);

        QMetaObject::connectSlotsByName(SureToExistDialog_mainwindow);
    } // setupUi

    void retranslateUi(QDialog *SureToExistDialog_mainwindow)
    {
        SureToExistDialog_mainwindow->setWindowTitle(QApplication::translate("SureToExistDialog_mainwindow", "Dialog", Q_NULLPTR));
        label->setText(QString());
        btn_close->setText(QString());
        btn_yes->setText(QApplication::translate("SureToExistDialog_mainwindow", "\346\230\257", Q_NULLPTR));
        btn_no->setText(QApplication::translate("SureToExistDialog_mainwindow", "\345\220\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("SureToExistDialog_mainwindow", "\345\205\263\351\227\255\345\220\216\346\202\250\345\260\206\346\227\240\346\263\225\344\275\277\347\224\250\n"
"\345\244\264\347\216\257\357\274\214\346\230\257\345\220\246\351\200\200\345\207\272\357\274\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SureToExistDialog_mainwindow: public Ui_SureToExistDialog_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SURETOEXISTDIALOG_MAINWINDOW_H
