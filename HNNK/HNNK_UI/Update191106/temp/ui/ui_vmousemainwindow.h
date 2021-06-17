/********************************************************************************
** Form generated from reading UI file 'vmousemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VMOUSEMAINWINDOW_H
#define UI_VMOUSEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VMouseMainWindow
{
public:
    QWidget *centralWidget;

    void setupUi(QMainWindow *VMouseMainWindow)
    {
        if (VMouseMainWindow->objectName().isEmpty())
            VMouseMainWindow->setObjectName(QStringLiteral("VMouseMainWindow"));
        VMouseMainWindow->resize(30, 28);
        VMouseMainWindow->setStyleSheet(QStringLiteral("border-image: url(:/Image/mouse_pointer.png);"));
        centralWidget = new QWidget(VMouseMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        VMouseMainWindow->setCentralWidget(centralWidget);

        retranslateUi(VMouseMainWindow);

        QMetaObject::connectSlotsByName(VMouseMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *VMouseMainWindow)
    {
        VMouseMainWindow->setWindowTitle(QApplication::translate("VMouseMainWindow", "MyCursor", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VMouseMainWindow: public Ui_VMouseMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VMOUSEMAINWINDOW_H
