/********************************************************************************
** Form generated from reading UI file 'exerc_exerc.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXERC_EXERC_H
#define UI_EXERC_EXERC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exerc_exerc
{
public:

    void setupUi(QWidget *exerc_exerc)
    {
        if (exerc_exerc->objectName().isEmpty())
            exerc_exerc->setObjectName(QStringLiteral("exerc_exerc"));
        exerc_exerc->resize(1280, 720);

        retranslateUi(exerc_exerc);

        QMetaObject::connectSlotsByName(exerc_exerc);
    } // setupUi

    void retranslateUi(QWidget *exerc_exerc)
    {
        exerc_exerc->setWindowTitle(QApplication::translate("exerc_exerc", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class exerc_exerc: public Ui_exerc_exerc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERC_EXERC_H
