/********************************************************************************
** Form generated from reading UI file 'calibration.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATION_H
#define UI_CALIBRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calibration
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QPushButton *btnChoose;
    QPushButton *btnUpdate;
    QLabel *label_3;
    QPushButton *btnGetTasks;
    QProgressBar *progressBar;
    QLineEdit *editPath;

    void setupUi(QDialog *Calibration)
    {
        if (Calibration->objectName().isEmpty())
            Calibration->setObjectName(QStringLiteral("Calibration"));
        Calibration->resize(570, 342);
        buttonBox = new QDialogButtonBox(Calibration);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 270, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget = new QWidget(Calibration);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 80, 471, 126));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_1 = new QLabel(gridLayoutWidget);
        label_1->setObjectName(QStringLiteral("label_1"));

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        btnChoose = new QPushButton(gridLayoutWidget);
        btnChoose->setObjectName(QStringLiteral("btnChoose"));

        horizontalLayout->addWidget(btnChoose);

        btnUpdate = new QPushButton(gridLayoutWidget);
        btnUpdate->setObjectName(QStringLiteral("btnUpdate"));

        horizontalLayout->addWidget(btnUpdate);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        btnGetTasks = new QPushButton(gridLayoutWidget);
        btnGetTasks->setObjectName(QStringLiteral("btnGetTasks"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/resources/synchronize.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnGetTasks->setIcon(icon);

        gridLayout->addWidget(btnGetTasks, 0, 2, 1, 1);

        progressBar = new QProgressBar(gridLayoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        gridLayout->addWidget(progressBar, 2, 0, 1, 3);

        editPath = new QLineEdit(gridLayoutWidget);
        editPath->setObjectName(QStringLiteral("editPath"));

        gridLayout->addWidget(editPath, 1, 1, 1, 1);


        retranslateUi(Calibration);
        QObject::connect(buttonBox, SIGNAL(accepted()), Calibration, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Calibration, SLOT(reject()));

        QMetaObject::connectSlotsByName(Calibration);
    } // setupUi

    void retranslateUi(QDialog *Calibration)
    {
        Calibration->setWindowTitle(QApplication::translate("Calibration", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("Calibration", "Data Path: ", Q_NULLPTR));
        label_1->setText(QApplication::translate("Calibration", "Task Type: ", Q_NULLPTR));
        label_4->setText(QString());
        btnChoose->setText(QApplication::translate("Calibration", "Choose Data", Q_NULLPTR));
        btnUpdate->setText(QApplication::translate("Calibration", "Update Model", Q_NULLPTR));
        label_3->setText(QString());
        btnGetTasks->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Calibration: public Ui_Calibration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATION_H
