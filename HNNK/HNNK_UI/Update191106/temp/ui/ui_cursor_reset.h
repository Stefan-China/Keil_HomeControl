/********************************************************************************
** Form generated from reading UI file 'cursor_reset.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURSOR_RESET_H
#define UI_CURSOR_RESET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_cursor_reset
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *qla_stare;
    QSpacerItem *verticalSpacer_3;
    QLabel *qla_tips;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *cursor_reset)
    {
        if (cursor_reset->objectName().isEmpty())
            cursor_reset->setObjectName(QStringLiteral("cursor_reset"));
        cursor_reset->resize(918, 722);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cursor_reset->sizePolicy().hasHeightForWidth());
        cursor_reset->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(cursor_reset);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        qla_stare = new QLabel(cursor_reset);
        qla_stare->setObjectName(QStringLiteral("qla_stare"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qla_stare->sizePolicy().hasHeightForWidth());
        qla_stare->setSizePolicy(sizePolicy1);
        qla_stare->setMinimumSize(QSize(350, 350));
        qla_stare->setMaximumSize(QSize(350, 350));
        qla_stare->setStyleSheet(QStringLiteral("border-image: url(:/tupiantupian/resource/image/cursor_reset.png);"));

        verticalLayout->addWidget(qla_stare);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        qla_tips = new QLabel(cursor_reset);
        qla_tips->setObjectName(QStringLiteral("qla_tips"));
        sizePolicy1.setHeightForWidth(qla_tips->sizePolicy().hasHeightForWidth());
        qla_tips->setSizePolicy(sizePolicy1);
        qla_tips->setMinimumSize(QSize(350, 39));
        qla_tips->setMaximumSize(QSize(350, 39));
        qla_tips->setStyleSheet(QStringLiteral("border-image: url(:/tupiantupian/resource/image/cursor_reset_1.png);"));
        qla_tips->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(qla_tips);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(4, 1);

        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(cursor_reset);

        QMetaObject::connectSlotsByName(cursor_reset);
    } // setupUi

    void retranslateUi(QDialog *cursor_reset)
    {
        cursor_reset->setWindowTitle(QApplication::translate("cursor_reset", "Dialog", Q_NULLPTR));
        qla_stare->setText(QString());
        qla_tips->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class cursor_reset: public Ui_cursor_reset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURSOR_RESET_H
