/********************************************************************************
** Form generated from reading UI file 'processcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSCONTROL_H
#define UI_PROCESSCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessControl
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameProcess;
    QHBoxLayout *horizontalLayout;
    QLabel *labelImage;
    QLabel *labelText;

    void setupUi(QWidget *ProcessControl)
    {
        if (ProcessControl->objectName().isEmpty())
            ProcessControl->setObjectName(QStringLiteral("ProcessControl"));
        ProcessControl->resize(139, 60);
        verticalLayout = new QVBoxLayout(ProcessControl);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameProcess = new QFrame(ProcessControl);
        frameProcess->setObjectName(QStringLiteral("frameProcess"));
        frameProcess->setFrameShape(QFrame::StyledPanel);
        frameProcess->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameProcess);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelImage = new QLabel(frameProcess);
        labelImage->setObjectName(QStringLiteral("labelImage"));
        labelImage->setMinimumSize(QSize(36, 36));
        labelImage->setMaximumSize(QSize(36, 36));
        labelImage->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        labelImage->setScaledContents(true);

        horizontalLayout->addWidget(labelImage);

        labelText = new QLabel(frameProcess);
        labelText->setObjectName(QStringLiteral("labelText"));
        labelText->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelText);


        verticalLayout->addWidget(frameProcess);


        retranslateUi(ProcessControl);

        QMetaObject::connectSlotsByName(ProcessControl);
    } // setupUi

    void retranslateUi(QWidget *ProcessControl)
    {
        ProcessControl->setWindowTitle(QApplication::translate("ProcessControl", "Form", Q_NULLPTR));
        labelImage->setText(QString());
        labelText->setText(QApplication::translate("ProcessControl", "\350\224\241\346\227\255\345\210\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProcessControl: public Ui_ProcessControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSCONTROL_H
