/********************************************************************************
** Form generated from reading UI file 'markingtester.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKINGTESTER_H
#define UI_MARKINGTESTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_MarkingTester
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *comboMarkNum;
    QPushButton *buttonMark;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *MarkingTester)
    {
        if (MarkingTester->objectName().isEmpty())
            MarkingTester->setObjectName(QStringLiteral("MarkingTester"));
        MarkingTester->resize(363, 253);
        gridLayout = new QGridLayout(MarkingTester);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(MarkingTester);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        comboMarkNum = new QComboBox(MarkingTester);
        comboMarkNum->setObjectName(QStringLiteral("comboMarkNum"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        comboMarkNum->setFont(font);

        gridLayout->addWidget(comboMarkNum, 0, 2, 1, 1);

        buttonMark = new QPushButton(MarkingTester);
        buttonMark->setObjectName(QStringLiteral("buttonMark"));
        buttonMark->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonMark->sizePolicy().hasHeightForWidth());
        buttonMark->setSizePolicy(sizePolicy);
        buttonMark->setMinimumSize(QSize(30, 30));

        gridLayout->addWidget(buttonMark, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);


        retranslateUi(MarkingTester);

        QMetaObject::connectSlotsByName(MarkingTester);
    } // setupUi

    void retranslateUi(QDialog *MarkingTester)
    {
        MarkingTester->setWindowTitle(QApplication::translate("MarkingTester", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("MarkingTester", "\351\200\211\346\213\251\346\211\223\346\240\207\345\217\267", Q_NULLPTR));
        comboMarkNum->clear();
        comboMarkNum->insertItems(0, QStringList()
         << QApplication::translate("MarkingTester", "1", Q_NULLPTR)
         << QApplication::translate("MarkingTester", "2", Q_NULLPTR)
         << QApplication::translate("MarkingTester", "3", Q_NULLPTR)
         << QApplication::translate("MarkingTester", "4", Q_NULLPTR)
         << QApplication::translate("MarkingTester", "5", Q_NULLPTR)
         << QApplication::translate("MarkingTester", "6", Q_NULLPTR)
         << QApplication::translate("MarkingTester", "7", Q_NULLPTR)
         << QApplication::translate("MarkingTester", "8", Q_NULLPTR)
         << QApplication::translate("MarkingTester", "9", Q_NULLPTR)
         << QApplication::translate("MarkingTester", "10", Q_NULLPTR)
        );
        buttonMark->setText(QApplication::translate("MarkingTester", "\346\265\213\350\257\225\346\211\223\346\240\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MarkingTester: public Ui_MarkingTester {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKINGTESTER_H
