/********************************************************************************
** Form generated from reading UI file 'homestackedwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESTACKEDWIDGET_H
#define UI_HOMESTACKEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeStackedWidget
{
public:

    void setupUi(QStackedWidget *HomeStackedWidget)
    {
        if (HomeStackedWidget->objectName().isEmpty())
            HomeStackedWidget->setObjectName(QStringLiteral("HomeStackedWidget"));
        HomeStackedWidget->resize(1085, 655);
        HomeStackedWidget->setStyleSheet(QLatin1String("QLabel#labelBanner\n"
"{\n"
"border-image: url(:/home/sh_resources/home_images/banner.png);\n"
"}"));

        retranslateUi(HomeStackedWidget);

        QMetaObject::connectSlotsByName(HomeStackedWidget);
    } // setupUi

    void retranslateUi(QStackedWidget *HomeStackedWidget)
    {
        HomeStackedWidget->setWindowTitle(QApplication::translate("HomeStackedWidget", "StackedWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HomeStackedWidget: public Ui_HomeStackedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESTACKEDWIDGET_H
