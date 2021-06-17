/********************************************************************************
** Form generated from reading UI file 'devicenamesetting.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICENAMESETTING_H
#define UI_DEVICENAMESETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceNameSetting
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *editName_1;
    QLabel *label_3;
    QLabel *label;
    QComboBox *cbNumbers;
    QLineEdit *editName_2;
    QLabel *label_4;
    QLineEdit *editName_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonOK;

    void setupUi(QDialog *DeviceNameSetting)
    {
        if (DeviceNameSetting->objectName().isEmpty())
            DeviceNameSetting->setObjectName(QStringLiteral("DeviceNameSetting"));
        DeviceNameSetting->resize(400, 300);
        DeviceNameSetting->setStyleSheet(QStringLiteral(""));
        verticalLayoutWidget = new QWidget(DeviceNameSetting);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 401, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(50, 0, 50, 10);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        editName_1 = new QLineEdit(verticalLayoutWidget);
        editName_1->setObjectName(QStringLiteral("editName_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editName_1->sizePolicy().hasHeightForWidth());
        editName_1->setSizePolicy(sizePolicy1);
        editName_1->setMinimumSize(QSize(0, 30));
        editName_1->setFont(font);

        gridLayout->addWidget(editName_1, 1, 1, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cbNumbers = new QComboBox(verticalLayoutWidget);
        cbNumbers->setObjectName(QStringLiteral("cbNumbers"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cbNumbers->sizePolicy().hasHeightForWidth());
        cbNumbers->setSizePolicy(sizePolicy2);
        cbNumbers->setMinimumSize(QSize(0, 30));
        cbNumbers->setFont(font);

        gridLayout->addWidget(cbNumbers, 0, 1, 1, 1);

        editName_2 = new QLineEdit(verticalLayoutWidget);
        editName_2->setObjectName(QStringLiteral("editName_2"));
        sizePolicy1.setHeightForWidth(editName_2->sizePolicy().hasHeightForWidth());
        editName_2->setSizePolicy(sizePolicy1);
        editName_2->setMinimumSize(QSize(0, 30));
        editName_2->setFont(font);

        gridLayout->addWidget(editName_2, 2, 1, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        editName_3 = new QLineEdit(verticalLayoutWidget);
        editName_3->setObjectName(QStringLiteral("editName_3"));
        sizePolicy1.setHeightForWidth(editName_3->sizePolicy().hasHeightForWidth());
        editName_3->setSizePolicy(sizePolicy1);
        editName_3->setMinimumSize(QSize(0, 30));
        editName_3->setFont(font);

        gridLayout->addWidget(editName_3, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(80, -1, 80, 0);
        buttonOK = new QPushButton(verticalLayoutWidget);
        buttonOK->setObjectName(QStringLiteral("buttonOK"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonOK->sizePolicy().hasHeightForWidth());
        buttonOK->setSizePolicy(sizePolicy3);
        buttonOK->setMinimumSize(QSize(0, 30));
        buttonOK->setFont(font);
        buttonOK->setStyleSheet(QStringLiteral("background-color: rgb(231, 231, 231);"));

        horizontalLayout->addWidget(buttonOK);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 5);

        retranslateUi(DeviceNameSetting);

        QMetaObject::connectSlotsByName(DeviceNameSetting);
    } // setupUi

    void retranslateUi(QDialog *DeviceNameSetting)
    {
        DeviceNameSetting->setWindowTitle(QApplication::translate("DeviceNameSetting", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("DeviceNameSetting", "\350\256\276\345\244\2071\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("DeviceNameSetting", "\350\256\276\345\244\2072\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("DeviceNameSetting", "\345\274\200\345\205\263\344\275\215\346\225\260\357\274\232", Q_NULLPTR));
        cbNumbers->clear();
        cbNumbers->insertItems(0, QStringList()
         << QApplication::translate("DeviceNameSetting", "1", Q_NULLPTR)
         << QApplication::translate("DeviceNameSetting", "2", Q_NULLPTR)
         << QApplication::translate("DeviceNameSetting", "3", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("DeviceNameSetting", "\350\256\276\345\244\2073\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        editName_3->setText(QString());
        buttonOK->setText(QApplication::translate("DeviceNameSetting", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeviceNameSetting: public Ui_DeviceNameSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICENAMESETTING_H
