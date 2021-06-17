/********************************************************************************
** Form generated from reading UI file 'deletedvcdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEDVCDIALOG_H
#define UI_DELETEDVCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DeleteDvcDialog
{
public:
    QPushButton *buttonSure;
    QPushButton *buttonCancel;
    QLineEdit *editPassword;
    QLabel *label;

    void setupUi(QDialog *DeleteDvcDialog)
    {
        if (DeleteDvcDialog->objectName().isEmpty())
            DeleteDvcDialog->setObjectName(QStringLiteral("DeleteDvcDialog"));
        DeleteDvcDialog->resize(400, 300);
        buttonSure = new QPushButton(DeleteDvcDialog);
        buttonSure->setObjectName(QStringLiteral("buttonSure"));
        buttonSure->setGeometry(QRect(20, 220, 90, 35));
        buttonCancel = new QPushButton(DeleteDvcDialog);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        buttonCancel->setGeometry(QRect(290, 220, 90, 35));
        editPassword = new QLineEdit(DeleteDvcDialog);
        editPassword->setObjectName(QStringLiteral("editPassword"));
        editPassword->setGeometry(QRect(70, 110, 251, 41));
        QFont font;
        font.setPointSize(12);
        editPassword->setFont(font);
        label = new QLabel(DeleteDvcDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 60, 180, 31));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(DeleteDvcDialog);

        QMetaObject::connectSlotsByName(DeleteDvcDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteDvcDialog)
    {
        DeleteDvcDialog->setWindowTitle(QApplication::translate("DeleteDvcDialog", "Dialog", Q_NULLPTR));
        buttonSure->setText(QApplication::translate("DeleteDvcDialog", "\347\241\256\350\256\244", Q_NULLPTR));
        buttonCancel->setText(QApplication::translate("DeleteDvcDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("DeleteDvcDialog", "\350\257\267\350\276\223\345\205\245\347\256\241\347\220\206\345\221\230\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeleteDvcDialog: public Ui_DeleteDvcDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEDVCDIALOG_H
