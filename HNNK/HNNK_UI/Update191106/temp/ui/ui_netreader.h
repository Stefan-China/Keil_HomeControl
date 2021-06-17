/********************************************************************************
** Form generated from reading UI file 'netreader.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETREADER_H
#define UI_NETREADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetReader
{
public:
    QTextEdit *editInstruction;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_10;
    QComboBox *comboSampleFre;
    QLineEdit *editChannels;
    QComboBox *comboSigpos1;
    QComboBox *comboSigpos2;
    QComboBox *comboEvtpos1;
    QComboBox *comboEvtpos2;
    QComboBox *comboWearDetpos;
    QPushButton *btnApply;
    QLabel *label_11;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpinBox *spinDuration;
    QLineEdit *editStatus;
    QLabel *label_5;
    QComboBox *comboDevice;
    QLineEdit *editMarker;
    QSpinBox *spinScale;
    QPushButton *btnMarker;
    QLabel *label_4;
    QPushButton *btnConnect;
    QLabel *label_1;
    QPushButton *btnHide;

    void setupUi(QDialog *NetReader)
    {
        if (NetReader->objectName().isEmpty())
            NetReader->setObjectName(QStringLiteral("NetReader"));
        NetReader->resize(776, 282);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NetReader->sizePolicy().hasHeightForWidth());
        NetReader->setSizePolicy(sizePolicy);
        NetReader->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        NetReader->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/resources/netreader.png"), QSize(), QIcon::Normal, QIcon::Off);
        NetReader->setWindowIcon(icon);
        editInstruction = new QTextEdit(NetReader);
        editInstruction->setObjectName(QStringLiteral("editInstruction"));
        editInstruction->setGeometry(QRect(9, 69, 761, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(8);
        sizePolicy1.setHeightForWidth(editInstruction->sizePolicy().hasHeightForWidth());
        editInstruction->setSizePolicy(sizePolicy1);
        groupBox = new QGroupBox(NetReader);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 130, 751, 118));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        groupBox->setFont(font1);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_9, 0, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_6, 0, 2, 1, 2);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_8, 0, 4, 1, 2);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_10, 0, 6, 1, 1);

        comboSampleFre = new QComboBox(groupBox);
        comboSampleFre->setObjectName(QStringLiteral("comboSampleFre"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(4);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboSampleFre->sizePolicy().hasHeightForWidth());
        comboSampleFre->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(comboSampleFre, 1, 0, 1, 1);

        editChannels = new QLineEdit(groupBox);
        editChannels->setObjectName(QStringLiteral("editChannels"));
        editChannels->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(editChannels->sizePolicy().hasHeightForWidth());
        editChannels->setSizePolicy(sizePolicy3);
        editChannels->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(editChannels, 1, 1, 1, 1);

        comboSigpos1 = new QComboBox(groupBox);
        comboSigpos1->setObjectName(QStringLiteral("comboSigpos1"));
        sizePolicy2.setHeightForWidth(comboSigpos1->sizePolicy().hasHeightForWidth());
        comboSigpos1->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(comboSigpos1, 1, 2, 1, 1);

        comboSigpos2 = new QComboBox(groupBox);
        comboSigpos2->setObjectName(QStringLiteral("comboSigpos2"));
        sizePolicy2.setHeightForWidth(comboSigpos2->sizePolicy().hasHeightForWidth());
        comboSigpos2->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(comboSigpos2, 1, 3, 1, 1);

        comboEvtpos1 = new QComboBox(groupBox);
        comboEvtpos1->setObjectName(QStringLiteral("comboEvtpos1"));
        sizePolicy2.setHeightForWidth(comboEvtpos1->sizePolicy().hasHeightForWidth());
        comboEvtpos1->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(comboEvtpos1, 1, 4, 1, 1);

        comboEvtpos2 = new QComboBox(groupBox);
        comboEvtpos2->setObjectName(QStringLiteral("comboEvtpos2"));
        sizePolicy2.setHeightForWidth(comboEvtpos2->sizePolicy().hasHeightForWidth());
        comboEvtpos2->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(comboEvtpos2, 1, 5, 1, 1);

        comboWearDetpos = new QComboBox(groupBox);
        comboWearDetpos->setObjectName(QStringLiteral("comboWearDetpos"));
        sizePolicy2.setHeightForWidth(comboWearDetpos->sizePolicy().hasHeightForWidth());
        comboWearDetpos->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(comboWearDetpos, 1, 6, 1, 1);

        btnApply = new QPushButton(groupBox);
        btnApply->setObjectName(QStringLiteral("btnApply"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(btnApply->sizePolicy().hasHeightForWidth());
        btnApply->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(btnApply, 2, 7, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_11, 0, 1, 1, 1);

        widget = new QWidget(NetReader);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 9, 761, 54));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        spinDuration = new QSpinBox(widget);
        spinDuration->setObjectName(QStringLiteral("spinDuration"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(2);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(spinDuration->sizePolicy().hasHeightForWidth());
        spinDuration->setSizePolicy(sizePolicy5);
        spinDuration->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(spinDuration, 1, 2, 1, 1);

        editStatus = new QLineEdit(widget);
        editStatus->setObjectName(QStringLiteral("editStatus"));
        sizePolicy2.setHeightForWidth(editStatus->sizePolicy().hasHeightForWidth());
        editStatus->setSizePolicy(sizePolicy2);
        editStatus->setMinimumSize(QSize(0, 0));
        editStatus->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(editStatus, 1, 4, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 4, 1, 1);

        comboDevice = new QComboBox(widget);
        comboDevice->setObjectName(QStringLiteral("comboDevice"));
        sizePolicy2.setHeightForWidth(comboDevice->sizePolicy().hasHeightForWidth());
        comboDevice->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(comboDevice, 1, 0, 1, 1);

        editMarker = new QLineEdit(widget);
        editMarker->setObjectName(QStringLiteral("editMarker"));
        sizePolicy3.setHeightForWidth(editMarker->sizePolicy().hasHeightForWidth());
        editMarker->setSizePolicy(sizePolicy3);
        editMarker->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(editMarker, 1, 1, 1, 1);

        spinScale = new QSpinBox(widget);
        spinScale->setObjectName(QStringLiteral("spinScale"));
        sizePolicy5.setHeightForWidth(spinScale->sizePolicy().hasHeightForWidth());
        spinScale->setSizePolicy(sizePolicy5);
        spinScale->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(spinScale, 1, 3, 1, 1);

        btnMarker = new QPushButton(widget);
        btnMarker->setObjectName(QStringLiteral("btnMarker"));
        sizePolicy.setHeightForWidth(btnMarker->sizePolicy().hasHeightForWidth());
        btnMarker->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnMarker, 0, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        btnConnect = new QPushButton(widget);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));
        sizePolicy4.setHeightForWidth(btnConnect->sizePolicy().hasHeightForWidth());
        btnConnect->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(btnConnect, 0, 5, 1, 1);

        label_1 = new QLabel(widget);
        label_1->setObjectName(QStringLiteral("label_1"));
        sizePolicy.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy);
        label_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        btnHide = new QPushButton(widget);
        btnHide->setObjectName(QStringLiteral("btnHide"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(2);
        sizePolicy6.setVerticalStretch(1);
        sizePolicy6.setHeightForWidth(btnHide->sizePolicy().hasHeightForWidth());
        btnHide->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(btnHide, 1, 5, 1, 1);


        retranslateUi(NetReader);

        QMetaObject::connectSlotsByName(NetReader);
    } // setupUi

    void retranslateUi(QDialog *NetReader)
    {
        NetReader->setWindowTitle(QApplication::translate("NetReader", "NetReader", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("NetReader", "EDF Writing Settings", Q_NULLPTR));
        label_9->setText(QApplication::translate("NetReader", "Sample Frequency(Hz)", Q_NULLPTR));
        label_6->setText(QApplication::translate("NetReader", "Signal Postion", Q_NULLPTR));
        label_8->setText(QApplication::translate("NetReader", "Event Postion", Q_NULLPTR));
        label_10->setText(QApplication::translate("NetReader", "Wear Detection Postion", Q_NULLPTR));
        comboSampleFre->clear();
        comboSampleFre->insertItems(0, QStringList()
         << QApplication::translate("NetReader", "125", Q_NULLPTR)
         << QApplication::translate("NetReader", "250", Q_NULLPTR)
         << QApplication::translate("NetReader", "200", Q_NULLPTR)
        );
        editChannels->setText(QApplication::translate("NetReader", "1", Q_NULLPTR));
        comboSigpos1->clear();
        comboSigpos1->insertItems(0, QStringList()
         << QApplication::translate("NetReader", "0", Q_NULLPTR)
         << QApplication::translate("NetReader", "1", Q_NULLPTR)
         << QApplication::translate("NetReader", "2", Q_NULLPTR)
         << QApplication::translate("NetReader", "3", Q_NULLPTR)
         << QApplication::translate("NetReader", "4", Q_NULLPTR)
         << QApplication::translate("NetReader", "5", Q_NULLPTR)
         << QApplication::translate("NetReader", "6", Q_NULLPTR)
         << QApplication::translate("NetReader", "7", Q_NULLPTR)
        );
        comboSigpos2->clear();
        comboSigpos2->insertItems(0, QStringList()
         << QApplication::translate("NetReader", "4", Q_NULLPTR)
         << QApplication::translate("NetReader", "0", Q_NULLPTR)
         << QApplication::translate("NetReader", "1", Q_NULLPTR)
         << QApplication::translate("NetReader", "2", Q_NULLPTR)
         << QApplication::translate("NetReader", "3", Q_NULLPTR)
         << QApplication::translate("NetReader", "5", Q_NULLPTR)
         << QApplication::translate("NetReader", "6", Q_NULLPTR)
         << QApplication::translate("NetReader", "7", Q_NULLPTR)
        );
        comboEvtpos1->clear();
        comboEvtpos1->insertItems(0, QStringList()
         << QApplication::translate("NetReader", "1", Q_NULLPTR)
         << QApplication::translate("NetReader", "0", Q_NULLPTR)
         << QApplication::translate("NetReader", "2", Q_NULLPTR)
         << QApplication::translate("NetReader", "3", Q_NULLPTR)
         << QApplication::translate("NetReader", "4", Q_NULLPTR)
         << QApplication::translate("NetReader", "5", Q_NULLPTR)
         << QApplication::translate("NetReader", "6", Q_NULLPTR)
         << QApplication::translate("NetReader", "7", Q_NULLPTR)
        );
        comboEvtpos2->clear();
        comboEvtpos2->insertItems(0, QStringList()
         << QApplication::translate("NetReader", "5", Q_NULLPTR)
         << QApplication::translate("NetReader", "0", Q_NULLPTR)
         << QApplication::translate("NetReader", "1", Q_NULLPTR)
         << QApplication::translate("NetReader", "2", Q_NULLPTR)
         << QApplication::translate("NetReader", "3", Q_NULLPTR)
         << QApplication::translate("NetReader", "4", Q_NULLPTR)
         << QApplication::translate("NetReader", "6", Q_NULLPTR)
         << QApplication::translate("NetReader", "7", Q_NULLPTR)
        );
        comboWearDetpos->clear();
        comboWearDetpos->insertItems(0, QStringList()
         << QApplication::translate("NetReader", "2", Q_NULLPTR)
         << QApplication::translate("NetReader", "3", Q_NULLPTR)
         << QApplication::translate("NetReader", "0", Q_NULLPTR)
         << QApplication::translate("NetReader", "1", Q_NULLPTR)
         << QApplication::translate("NetReader", "4", Q_NULLPTR)
         << QApplication::translate("NetReader", "5", Q_NULLPTR)
         << QApplication::translate("NetReader", "6", Q_NULLPTR)
         << QApplication::translate("NetReader", "7", Q_NULLPTR)
        );
        btnApply->setText(QApplication::translate("NetReader", "Apply", Q_NULLPTR));
        label_11->setText(QApplication::translate("NetReader", "Number of Channels", Q_NULLPTR));
        label_3->setText(QApplication::translate("NetReader", "Duration(sec)", Q_NULLPTR));
        label_5->setText(QApplication::translate("NetReader", "Status", Q_NULLPTR));
        btnMarker->setText(QApplication::translate("NetReader", "Marker", Q_NULLPTR));
        label_4->setText(QApplication::translate("NetReader", "Scale(uV/chan)", Q_NULLPTR));
        btnConnect->setText(QApplication::translate("NetReader", "Connect", Q_NULLPTR));
        label_1->setText(QApplication::translate("NetReader", "Device", Q_NULLPTR));
        btnHide->setText(QApplication::translate("NetReader", "Hide", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NetReader: public Ui_NetReader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETREADER_H
