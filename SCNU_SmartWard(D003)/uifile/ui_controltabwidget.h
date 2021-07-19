/********************************************************************************
** Form generated from reading UI file 'controltabwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLTABWIDGET_H
#define UI_CONTROLTABWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <maincontent/controlwidget/bannacontrol/bannawidget.h>
#include <maincontent/controlwidget/cylindercontrol/cylinderwidget.h>
#include <maincontent/controlwidget/framecontrol/framewidget.h>
#include <maincontent/controlwidget/movecontrol/movewidget.h>
#include <maincontent/controlwidget/openglcontrol/openglwidget.h>
#include <maincontent/controlwidget/plotcontrol/plotwidget.h>
#include <maincontent/controlwidget/progresscontrol/progresswidget.h>
#include <maincontent/controlwidget/slidercontrol/sliderwidget.h>
#include <maincontent/controlwidget/tablecontrol/tablewidget.h>
#include "maincontent/controlwidget/listcontrol/listwidget.h"
#include "maincontent/controlwidget/processcontrol/processwidget.h"

QT_BEGIN_NAMESPACE

class Ui_ControlTabWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidgetControl;
    BannaWidget *tabBanna;
    CylinderWidget *tabCylinder;
    ProgressWidget *tabProgress;
    FrameWidget *tabFrame;
    ListWidget *tabList;
    PlotWidget *tabPlot;
    MoveWidget *tabMoveButton;
    TableWidget *tabTableWidget;
    SliderWidget *tabSlider;
    ProcessWidget *tabProcess;
    OpenglWidget *tabOpengl;

    void setupUi(QWidget *ControlTabWidget)
    {
        if (ControlTabWidget->objectName().isEmpty())
            ControlTabWidget->setObjectName(QStringLiteral("ControlTabWidget"));
        ControlTabWidget->resize(697, 436);
        verticalLayout = new QVBoxLayout(ControlTabWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidgetControl = new QTabWidget(ControlTabWidget);
        tabWidgetControl->setObjectName(QStringLiteral("tabWidgetControl"));
        tabBanna = new BannaWidget();
        tabBanna->setObjectName(QStringLiteral("tabBanna"));
        tabWidgetControl->addTab(tabBanna, QString());
        tabCylinder = new CylinderWidget();
        tabCylinder->setObjectName(QStringLiteral("tabCylinder"));
        tabWidgetControl->addTab(tabCylinder, QString());
        tabProgress = new ProgressWidget();
        tabProgress->setObjectName(QStringLiteral("tabProgress"));
        tabWidgetControl->addTab(tabProgress, QString());
        tabFrame = new FrameWidget();
        tabFrame->setObjectName(QStringLiteral("tabFrame"));
        tabWidgetControl->addTab(tabFrame, QString());
        tabList = new ListWidget();
        tabList->setObjectName(QStringLiteral("tabList"));
        tabWidgetControl->addTab(tabList, QString());
        tabPlot = new PlotWidget();
        tabPlot->setObjectName(QStringLiteral("tabPlot"));
        tabWidgetControl->addTab(tabPlot, QString());
        tabMoveButton = new MoveWidget();
        tabMoveButton->setObjectName(QStringLiteral("tabMoveButton"));
        tabMoveButton->setStyleSheet(QStringLiteral(""));
        tabWidgetControl->addTab(tabMoveButton, QString());
        tabTableWidget = new TableWidget();
        tabTableWidget->setObjectName(QStringLiteral("tabTableWidget"));
        tabWidgetControl->addTab(tabTableWidget, QString());
        tabSlider = new SliderWidget();
        tabSlider->setObjectName(QStringLiteral("tabSlider"));
        tabWidgetControl->addTab(tabSlider, QString());
        tabProcess = new ProcessWidget();
        tabProcess->setObjectName(QStringLiteral("tabProcess"));
        tabWidgetControl->addTab(tabProcess, QString());
        tabOpengl = new OpenglWidget();
        tabOpengl->setObjectName(QStringLiteral("tabOpengl"));
        tabWidgetControl->addTab(tabOpengl, QString());

        verticalLayout->addWidget(tabWidgetControl);


        retranslateUi(ControlTabWidget);

        tabWidgetControl->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(ControlTabWidget);
    } // setupUi

    void retranslateUi(QWidget *ControlTabWidget)
    {
        ControlTabWidget->setWindowTitle(QApplication::translate("ControlTabWidget", "Form", Q_NULLPTR));
        tabWidgetControl->setTabText(tabWidgetControl->indexOf(tabBanna), QApplication::translate("ControlTabWidget", "\350\275\256\346\222\255\345\233\276", Q_NULLPTR));
        tabWidgetControl->setTabText(tabWidgetControl->indexOf(tabCylinder), QApplication::translate("ControlTabWidget", " \346\237\261\347\212\266\345\233\276", Q_NULLPTR));
        tabWidgetControl->setTabText(tabWidgetControl->indexOf(tabProgress), QApplication::translate("ControlTabWidget", "\350\277\233\345\272\246\346\235\241", Q_NULLPTR));
        tabWidgetControl->setTabText(tabWidgetControl->indexOf(tabFrame), QApplication::translate("ControlTabWidget", "\351\235\242\346\235\277", Q_NULLPTR));
        tabWidgetControl->setTabText(tabWidgetControl->indexOf(tabList), QApplication::translate("ControlTabWidget", "\345\210\227\350\241\250", Q_NULLPTR));
        tabWidgetControl->setTabText(tabWidgetControl->indexOf(tabPlot), QApplication::translate("ControlTabWidget", " \345\235\220\346\240\207\347\263\273", Q_NULLPTR));
        tabWidgetControl->setTabText(tabWidgetControl->indexOf(tabMoveButton), QApplication::translate("ControlTabWidget", "\347\247\273\345\212\250\346\214\211\351\222\256", Q_NULLPTR));
        tabWidgetControl->setTabText(tabWidgetControl->indexOf(tabTableWidget), QApplication::translate("ControlTabWidget", " \350\241\250\346\240\274", Q_NULLPTR));
        tabWidgetControl->setTabText(tabWidgetControl->indexOf(tabSlider), QApplication::translate("ControlTabWidget", "\347\247\273\345\212\250\350\277\233\345\272\246", Q_NULLPTR));
        tabWidgetControl->setTabText(tabWidgetControl->indexOf(tabProcess), QApplication::translate("ControlTabWidget", "\346\265\201\347\250\213\350\277\233\345\272\246", Q_NULLPTR));
        tabWidgetControl->setTabText(tabWidgetControl->indexOf(tabOpengl), QApplication::translate("ControlTabWidget", "\344\270\211\347\273\264\346\250\241\345\236\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ControlTabWidget: public Ui_ControlTabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLTABWIDGET_H
