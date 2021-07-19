/********************************************************************************
** Form generated from reading UI file 'processwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSWIDGET_H
#define UI_PROCESSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameBackground;

    void setupUi(QWidget *ProcessWidget)
    {
        if (ProcessWidget->objectName().isEmpty())
            ProcessWidget->setObjectName(QStringLiteral("ProcessWidget"));
        ProcessWidget->resize(400, 300);
        ProcessWidget->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(ProcessWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameBackground = new QFrame(ProcessWidget);
        frameBackground->setObjectName(QStringLiteral("frameBackground"));
        frameBackground->setFrameShape(QFrame::StyledPanel);
        frameBackground->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frameBackground);


        retranslateUi(ProcessWidget);

        QMetaObject::connectSlotsByName(ProcessWidget);
    } // setupUi

    void retranslateUi(QWidget *ProcessWidget)
    {
        ProcessWidget->setWindowTitle(QApplication::translate("ProcessWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProcessWidget: public Ui_ProcessWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSWIDGET_H
