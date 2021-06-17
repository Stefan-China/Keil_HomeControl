/********************************************************************************
** Form generated from reading UI file 'update_tips_2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_TIPS_2_H
#define UI_UPDATE_TIPS_2_H

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

class Ui_update_tips_2
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QPushButton *btn_known;
    QPushButton *btn_close;
    QLabel *qla_tip;

    void setupUi(QDialog *update_tips_2)
    {
        if (update_tips_2->objectName().isEmpty())
            update_tips_2->setObjectName(QStringLiteral("update_tips_2"));
        update_tips_2->resize(476, 281);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(update_tips_2->sizePolicy().hasHeightForWidth());
        update_tips_2->setSizePolicy(sizePolicy);
        update_tips_2->setMinimumSize(QSize(476, 281));
        update_tips_2->setMaximumSize(QSize(476, 281));
        gridLayout = new QGridLayout(update_tips_2);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(update_tips_2);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(476, 281));
        frame->setMaximumSize(QSize(476, 281));
        frame->setStyleSheet(QStringLiteral("QFrame#frame{border-image: url(:/image/pri_8_resource/update_tips_2.png);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btn_known = new QPushButton(frame);
        btn_known->setObjectName(QStringLiteral("btn_known"));
        btn_known->setGeometry(QRect(178, 220, 120, 40));
        sizePolicy.setHeightForWidth(btn_known->sizePolicy().hasHeightForWidth());
        btn_known->setSizePolicy(sizePolicy);
        btn_known->setMinimumSize(QSize(120, 40));
        btn_known->setMaximumSize(QSize(120, 40));
        btn_known->setCursor(QCursor(Qt::PointingHandCursor));
        btn_known->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        btn_close = new QPushButton(frame);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setGeometry(QRect(420, 20, 36, 36));
        btn_close->setMinimumSize(QSize(36, 36));
        btn_close->setMaximumSize(QSize(36, 36));
        btn_close->setStyleSheet(QLatin1String("QPushButton#btn_close\n"
"{\n"
"      border-image: url(:/image/Close01.png);\n"
"}\n"
"QPushButton:hover#btn_close\n"
"{\n"
"      border-image: url(:/image/Close_hover.png);\n"
"}"));
        qla_tip = new QLabel(frame);
        qla_tip->setObjectName(QStringLiteral("qla_tip"));
        qla_tip->setGeometry(QRect(136, 160, 204, 46));
        qla_tip->setStyleSheet(QStringLiteral("QLabel{color:#898989;font: 20px SimHei;}"));
        qla_tip->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(update_tips_2);

        QMetaObject::connectSlotsByName(update_tips_2);
    } // setupUi

    void retranslateUi(QDialog *update_tips_2)
    {
        update_tips_2->setWindowTitle(QApplication::translate("update_tips_2", "Dialog", Q_NULLPTR));
        btn_known->setText(QApplication::translate("update_tips_2", "\347\237\245\351\201\223\344\272\206", Q_NULLPTR));
        btn_close->setText(QString());
        qla_tip->setText(QApplication::translate("update_tips_2", "\345\267\262\346\230\257\346\234\200\346\226\260\347\211\210\346\234\254\357\274\214\346\227\240\346\233\264\346\226\260\n"
"\345\275\223\345\211\215\347\211\210\346\234\254", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class update_tips_2: public Ui_update_tips_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_TIPS_2_H
