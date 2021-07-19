/********************************************************************************
** Form generated from reading UI file 'sliderwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDERWIDGET_H
#define UI_SLIDERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SliderWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *widgetSecond;
    QWidget *widgetFirst;

    void setupUi(QWidget *SliderWidget)
    {
        if (SliderWidget->objectName().isEmpty())
            SliderWidget->setObjectName(QStringLiteral("SliderWidget"));
        SliderWidget->resize(744, 433);
        SliderWidget->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(SliderWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widgetSecond = new QWidget(SliderWidget);
        widgetSecond->setObjectName(QStringLiteral("widgetSecond"));
        widgetSecond->setMinimumSize(QSize(500, 200));

        gridLayout->addWidget(widgetSecond, 0, 0, 1, 2);

        widgetFirst = new QWidget(SliderWidget);
        widgetFirst->setObjectName(QStringLiteral("widgetFirst"));
        widgetFirst->setMinimumSize(QSize(500, 200));

        gridLayout->addWidget(widgetFirst, 1, 0, 1, 2);


        retranslateUi(SliderWidget);

        QMetaObject::connectSlotsByName(SliderWidget);
    } // setupUi

    void retranslateUi(QWidget *SliderWidget)
    {
        SliderWidget->setWindowTitle(QApplication::translate("SliderWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SliderWidget: public Ui_SliderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDERWIDGET_H
