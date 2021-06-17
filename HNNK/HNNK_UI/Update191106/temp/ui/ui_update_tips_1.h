/********************************************************************************
** Form generated from reading UI file 'update_tips_1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_TIPS_1_H
#define UI_UPDATE_TIPS_1_H

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

class Ui_update_tips_1
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QPushButton *update_soon;
    QPushButton *btn_close;
    QLabel *qla_tip_new;
    QLabel *qla_tip_current;

    void setupUi(QDialog *update_tips_1)
    {
        if (update_tips_1->objectName().isEmpty())
            update_tips_1->setObjectName(QStringLiteral("update_tips_1"));
        update_tips_1->resize(476, 281);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(update_tips_1->sizePolicy().hasHeightForWidth());
        update_tips_1->setSizePolicy(sizePolicy);
        update_tips_1->setMinimumSize(QSize(476, 281));
        update_tips_1->setMaximumSize(QSize(476, 281));
        gridLayout = new QGridLayout(update_tips_1);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(update_tips_1);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(476, 281));
        frame->setMaximumSize(QSize(476, 281));
        frame->setStyleSheet(QStringLiteral("QFrame#frame{border-image: url(:/image/pri_8_resource/update_tips_1.png);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        update_soon = new QPushButton(frame);
        update_soon->setObjectName(QStringLiteral("update_soon"));
        update_soon->setGeometry(QRect(178, 220, 120, 40));
        sizePolicy.setHeightForWidth(update_soon->sizePolicy().hasHeightForWidth());
        update_soon->setSizePolicy(sizePolicy);
        update_soon->setMinimumSize(QSize(120, 40));
        update_soon->setMaximumSize(QSize(120, 40));
        update_soon->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        btn_close->setGeometry(QRect(430, 10, 36, 36));
        sizePolicy.setHeightForWidth(btn_close->sizePolicy().hasHeightForWidth());
        btn_close->setSizePolicy(sizePolicy);
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
        qla_tip_new = new QLabel(frame);
        qla_tip_new->setObjectName(QStringLiteral("qla_tip_new"));
        qla_tip_new->setGeometry(QRect(126, 150, 224, 23));
        sizePolicy.setHeightForWidth(qla_tip_new->sizePolicy().hasHeightForWidth());
        qla_tip_new->setSizePolicy(sizePolicy);
        qla_tip_new->setMinimumSize(QSize(224, 23));
        qla_tip_new->setMaximumSize(QSize(224, 23));
        qla_tip_new->setStyleSheet(QStringLiteral("QLabel{color:#898989;font: 20px SimHei;}"));
        qla_tip_new->setAlignment(Qt::AlignCenter);
        qla_tip_current = new QLabel(frame);
        qla_tip_current->setObjectName(QStringLiteral("qla_tip_current"));
        qla_tip_current->setGeometry(QRect(126, 180, 224, 23));
        sizePolicy.setHeightForWidth(qla_tip_current->sizePolicy().hasHeightForWidth());
        qla_tip_current->setSizePolicy(sizePolicy);
        qla_tip_current->setMinimumSize(QSize(224, 23));
        qla_tip_current->setMaximumSize(QSize(224, 23));
        qla_tip_current->setStyleSheet(QStringLiteral("QLabel{color:#898989;font: 20px SimHei;}"));
        qla_tip_current->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(update_tips_1);

        QMetaObject::connectSlotsByName(update_tips_1);
    } // setupUi

    void retranslateUi(QDialog *update_tips_1)
    {
        update_tips_1->setWindowTitle(QApplication::translate("update_tips_1", "Dialog", Q_NULLPTR));
        update_soon->setText(QApplication::translate("update_tips_1", "\347\253\213\345\215\263\345\215\207\347\272\247", Q_NULLPTR));
        btn_close->setText(QString());
        qla_tip_new->setText(QApplication::translate("update_tips_1", "\346\234\211\346\226\260\347\211\210\346\234\254\345\217\257\344\276\233\346\233\264\346\226\260", Q_NULLPTR));
        qla_tip_current->setText(QApplication::translate("update_tips_1", "\346\254\242\350\277\216\344\275\277\347\224\250\345\275\223\345\211\215\347\211\210\346\234\254", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class update_tips_1: public Ui_update_tips_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_TIPS_1_H
