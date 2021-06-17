/********************************************************************************
** Form generated from reading UI file 'controltreewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLTREEWIDGET_H
#define UI_CONTROLTREEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlTreeWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidgetMenu;

    void setupUi(QWidget *ControlTreeWidget)
    {
        if (ControlTreeWidget->objectName().isEmpty())
            ControlTreeWidget->setObjectName(QStringLiteral("ControlTreeWidget"));
        ControlTreeWidget->resize(194, 299);
        verticalLayout = new QVBoxLayout(ControlTreeWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeWidgetMenu = new QTreeWidget(ControlTreeWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidgetMenu->setHeaderItem(__qtreewidgetitem);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/res/image/image.png"), QSize(), QIcon::Normal, QIcon::On);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/res/image/image.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem1->setTextAlignment(0, Qt::AlignLeading|Qt::AlignVCenter);
        __qtreewidgetitem1->setIcon(0, icon);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem2->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem3->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem4->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem5->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem6->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem7->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem8->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem9 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem9->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem10 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem10->setIcon(0, icon);
        QTreeWidgetItem *__qtreewidgetitem11 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem11->setIcon(0, icon1);
        treeWidgetMenu->setObjectName(QStringLiteral("treeWidgetMenu"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        treeWidgetMenu->setFont(font);

        verticalLayout->addWidget(treeWidgetMenu);


        retranslateUi(ControlTreeWidget);

        QMetaObject::connectSlotsByName(ControlTreeWidget);
    } // setupUi

    void retranslateUi(QWidget *ControlTreeWidget)
    {
        ControlTreeWidget->setWindowTitle(QApplication::translate("ControlTreeWidget", "Form", Q_NULLPTR));

        const bool __sortingEnabled = treeWidgetMenu->isSortingEnabled();
        treeWidgetMenu->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetMenu->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QApplication::translate("ControlTreeWidget", "\351\246\226\351\241\265", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidgetMenu->topLevelItem(1);
        ___qtreewidgetitem1->setText(0, QApplication::translate("ControlTreeWidget", "\345\215\216\345\270\210\347\227\205\346\210\277\347\227\205\346\202\243\344\277\241\346\201\257", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidgetMenu->topLevelItem(2);
        ___qtreewidgetitem2->setText(0, QApplication::translate("ControlTreeWidget", "\347\224\237\345\221\275\344\275\223\345\276\201\347\233\221\346\265\213\345\271\263\345\217\260", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidgetMenu->topLevelItem(3);
        ___qtreewidgetitem3->setText(0, QApplication::translate("ControlTreeWidget", "AI\344\270\200\346\231\272\350\203\275\351\227\256\350\257\212\345\271\263\345\217\260", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidgetMenu->topLevelItem(4);
        ___qtreewidgetitem4->setText(0, QApplication::translate("ControlTreeWidget", "\347\227\205\346\202\243\345\256\232\344\275\215\347\256\241\347\220\206\345\271\263\345\217\260", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidgetMenu->topLevelItem(5);
        ___qtreewidgetitem5->setText(0, QApplication::translate("ControlTreeWidget", "\347\227\205\346\210\277\347\216\257\345\242\203\347\233\221\346\265\213\345\271\263\345\217\260", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidgetMenu->topLevelItem(6);
        ___qtreewidgetitem6->setText(0, QApplication::translate("ControlTreeWidget", "\347\227\205\346\210\277\347\224\265\345\231\250\346\216\247\345\210\266\345\271\263\345\217\260", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidgetMenu->topLevelItem(7);
        ___qtreewidgetitem7->setText(0, QApplication::translate("ControlTreeWidget", "\346\231\272\350\203\275\350\276\223\346\266\262\347\256\241\347\220\206\345\271\263\345\217\260", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidgetMenu->topLevelItem(8);
        ___qtreewidgetitem8->setText(0, QApplication::translate("ControlTreeWidget", "\347\227\205\346\210\277\350\204\221\346\263\242\347\233\221\346\265\213\345\271\263\345\217\260", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidgetMenu->topLevelItem(9);
        ___qtreewidgetitem9->setText(0, QApplication::translate("ControlTreeWidget", "\345\220\216\347\273\255\346\267\273\345\212\240", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem10 = treeWidgetMenu->topLevelItem(10);
        ___qtreewidgetitem10->setText(0, QApplication::translate("ControlTreeWidget", "\347\227\205\346\210\277\346\203\205\347\273\252\347\233\221\346\265\213\345\271\263\345\217\260", Q_NULLPTR));
        treeWidgetMenu->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class ControlTreeWidget: public Ui_ControlTreeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLTREEWIDGET_H
