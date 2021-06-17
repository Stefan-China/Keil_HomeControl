/********************************************************************************
** Form generated from reading UI file 'homeselect.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESELECT_H
#define UI_HOMESELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homeselect
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QFrame *line;
    QPushButton *Del_Btn_close;

    void setupUi(QWidget *homeselect)
    {
        if (homeselect->objectName().isEmpty())
            homeselect->setObjectName(QStringLiteral("homeselect"));
        homeselect->resize(674, 584);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(homeselect->sizePolicy().hasHeightForWidth());
        homeselect->setSizePolicy(sizePolicy);
        homeselect->setMinimumSize(QSize(674, 329));
        homeselect->setMaximumSize(QSize(674, 584));
        gridLayout = new QGridLayout(homeselect);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(homeselect);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(674, 329));
        frame->setMaximumSize(QSize(674, 584));
        frame->setStyleSheet(QStringLiteral("QFrame#frame{border-image: url(:/image/resource/BTN/ADD_DEL/BG_ADD.png);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(31, 65, 609, 1));
        line->setStyleSheet(QStringLiteral("background-color:rgb(131,191,195);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        Del_Btn_close = new QPushButton(frame);
        Del_Btn_close->setObjectName(QStringLiteral("Del_Btn_close"));
        Del_Btn_close->setGeometry(QRect(634, 16, 20, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Del_Btn_close->sizePolicy().hasHeightForWidth());
        Del_Btn_close->setSizePolicy(sizePolicy1);
        Del_Btn_close->setMinimumSize(QSize(20, 20));
        Del_Btn_close->setMaximumSize(QSize(20, 20));

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(homeselect);

        QMetaObject::connectSlotsByName(homeselect);
    } // setupUi

    void retranslateUi(QWidget *homeselect)
    {
        homeselect->setWindowTitle(QApplication::translate("homeselect", "Form", Q_NULLPTR));
        Del_Btn_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class homeselect: public Ui_homeselect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESELECT_H
