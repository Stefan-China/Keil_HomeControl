/********************************************************************************
** Form generated from reading UI file 'cylinderwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CYLINDERWIDGET_H
#define UI_CYLINDERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CylinderWidget
{
public:
    QGridLayout *gridLayout_19;
    QFrame *frameBackground;
    QGridLayout *gridLayout;
    QWidget *widgetFirst;
    QGridLayout *gridLayout_5;
    QLabel *ward_id;
    QLabel *name;
    QLabel *brith_data;
    QLabel *id_card;
    QLabel *sex;
    QLabel *Photo;
    QLabel *address;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *illness;
    QPushButton *pushButton;
    QFrame *frameBackground_2;
    QGridLayout *gridLayout_13;
    QWidget *widgetFirst_7;
    QGridLayout *gridLayout_14;
    QLabel *ward_id_7;
    QLabel *name_7;
    QLabel *brith_data_7;
    QLabel *id_card_7;
    QLabel *sex_7;
    QLabel *Photo_7;
    QLabel *address_7;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *illness_7;
    QPushButton *pushButton_5;
    QFrame *frameBackground_3;
    QGridLayout *gridLayout_15;
    QWidget *widgetFirst_8;
    QGridLayout *gridLayout_16;
    QLabel *ward_id_8;
    QLabel *name_8;
    QLabel *brith_data_8;
    QLabel *id_card_8;
    QLabel *sex_8;
    QLabel *Photo_8;
    QLabel *address_8;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *illness_8;
    QPushButton *pushButton_6;
    QFrame *frameBackground_4;
    QGridLayout *gridLayout_17;
    QWidget *widgetFirst_9;
    QGridLayout *gridLayout_18;
    QLabel *ward_id_9;
    QLabel *name_9;
    QLabel *brith_data_9;
    QLabel *id_card_9;
    QLabel *sex_9;
    QLabel *Photo_9;
    QLabel *address_9;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *illness_9;
    QPushButton *pushButton_7;

    void setupUi(QWidget *CylinderWidget)
    {
        if (CylinderWidget->objectName().isEmpty())
            CylinderWidget->setObjectName(QStringLiteral("CylinderWidget"));
        CylinderWidget->resize(816, 460);
        CylinderWidget->setStyleSheet(QStringLiteral(""));
        gridLayout_19 = new QGridLayout(CylinderWidget);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        frameBackground = new QFrame(CylinderWidget);
        frameBackground->setObjectName(QStringLiteral("frameBackground"));
        frameBackground->setFrameShape(QFrame::StyledPanel);
        frameBackground->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frameBackground);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widgetFirst = new QWidget(frameBackground);
        widgetFirst->setObjectName(QStringLiteral("widgetFirst"));
        widgetFirst->setStyleSheet(QStringLiteral(""));
        gridLayout_5 = new QGridLayout(widgetFirst);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        ward_id = new QLabel(widgetFirst);
        ward_id->setObjectName(QStringLiteral("ward_id"));
        ward_id->setMinimumSize(QSize(100, 0));
        ward_id->setStyleSheet(QString::fromUtf8("font: 10pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_5->addWidget(ward_id, 0, 0, 1, 1);

        name = new QLabel(widgetFirst);
        name->setObjectName(QStringLiteral("name"));
        name->setMinimumSize(QSize(200, 0));
        name->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_5->addWidget(name, 0, 2, 1, 1);

        brith_data = new QLabel(widgetFirst);
        brith_data->setObjectName(QStringLiteral("brith_data"));
        brith_data->setMinimumSize(QSize(200, 0));
        brith_data->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(112, 128, 144)"));

        gridLayout_5->addWidget(brith_data, 2, 2, 1, 1);

        id_card = new QLabel(widgetFirst);
        id_card->setObjectName(QStringLiteral("id_card"));
        id_card->setMinimumSize(QSize(200, 0));
        id_card->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";color: rgb(112, 128, 144)"));

        gridLayout_5->addWidget(id_card, 3, 2, 1, 1);

        sex = new QLabel(widgetFirst);
        sex->setObjectName(QStringLiteral("sex"));
        sex->setMinimumSize(QSize(200, 0));
        sex->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144)"));

        gridLayout_5->addWidget(sex, 1, 2, 1, 1);

        Photo = new QLabel(widgetFirst);
        Photo->setObjectName(QStringLiteral("Photo"));
        Photo->setMinimumSize(QSize(100, 0));
        Photo->setMaximumSize(QSize(100, 160));
        Photo->setScaledContents(true);

        gridLayout_5->addWidget(Photo, 1, 0, 3, 1);

        address = new QLabel(widgetFirst);
        address->setObjectName(QStringLiteral("address"));
        address->setMinimumSize(QSize(200, 0));
        address->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_5->addWidget(address, 5, 2, 1, 1);

        label = new QLabel(widgetFirst);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_5->addWidget(label, 0, 1, 1, 1);

        label_4 = new QLabel(widgetFirst);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_5->addWidget(label_4, 3, 1, 1, 1);

        label_3 = new QLabel(widgetFirst);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_5->addWidget(label_3, 2, 1, 1, 1);

        label_2 = new QLabel(widgetFirst);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_5->addWidget(label_2, 1, 1, 1, 1);

        label_5 = new QLabel(widgetFirst);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_5->addWidget(label_5, 5, 1, 1, 1);

        illness = new QLabel(widgetFirst);
        illness->setObjectName(QStringLiteral("illness"));
        illness->setStyleSheet(QString::fromUtf8("font: 10pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_5->addWidget(illness, 4, 0, 1, 1, Qt::AlignHCenter);

        pushButton = new QPushButton(widgetFirst);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #C0DCF2;\n"
"color: rgb(30, 144, 225);\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"font: 10pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"}\n"
"\n"
"QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F9FF,stop:1 #DAEFFF);\n"
"}\n"
"\n"
"QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}"));

        gridLayout_5->addWidget(pushButton, 5, 0, 1, 1);


        gridLayout->addWidget(widgetFirst, 0, 0, 1, 1);


        gridLayout_19->addWidget(frameBackground, 0, 0, 1, 1);

        frameBackground_2 = new QFrame(CylinderWidget);
        frameBackground_2->setObjectName(QStringLiteral("frameBackground_2"));
        frameBackground_2->setFrameShape(QFrame::StyledPanel);
        frameBackground_2->setFrameShadow(QFrame::Raised);
        gridLayout_13 = new QGridLayout(frameBackground_2);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        widgetFirst_7 = new QWidget(frameBackground_2);
        widgetFirst_7->setObjectName(QStringLiteral("widgetFirst_7"));
        widgetFirst_7->setStyleSheet(QStringLiteral(""));
        gridLayout_14 = new QGridLayout(widgetFirst_7);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        ward_id_7 = new QLabel(widgetFirst_7);
        ward_id_7->setObjectName(QStringLiteral("ward_id_7"));
        ward_id_7->setMinimumSize(QSize(100, 0));
        ward_id_7->setStyleSheet(QString::fromUtf8("font: 10pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_14->addWidget(ward_id_7, 0, 0, 1, 1);

        name_7 = new QLabel(widgetFirst_7);
        name_7->setObjectName(QStringLiteral("name_7"));
        name_7->setMinimumSize(QSize(200, 0));
        name_7->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_14->addWidget(name_7, 0, 2, 1, 1);

        brith_data_7 = new QLabel(widgetFirst_7);
        brith_data_7->setObjectName(QStringLiteral("brith_data_7"));
        brith_data_7->setMinimumSize(QSize(200, 0));
        brith_data_7->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(112, 128, 144)"));

        gridLayout_14->addWidget(brith_data_7, 2, 2, 1, 1);

        id_card_7 = new QLabel(widgetFirst_7);
        id_card_7->setObjectName(QStringLiteral("id_card_7"));
        id_card_7->setMinimumSize(QSize(200, 0));
        id_card_7->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";color: rgb(112, 128, 144)"));

        gridLayout_14->addWidget(id_card_7, 3, 2, 1, 1);

        sex_7 = new QLabel(widgetFirst_7);
        sex_7->setObjectName(QStringLiteral("sex_7"));
        sex_7->setMinimumSize(QSize(200, 0));
        sex_7->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144)"));

        gridLayout_14->addWidget(sex_7, 1, 2, 1, 1);

        Photo_7 = new QLabel(widgetFirst_7);
        Photo_7->setObjectName(QStringLiteral("Photo_7"));
        Photo_7->setMinimumSize(QSize(100, 0));
        Photo_7->setMaximumSize(QSize(100, 160));
        Photo_7->setScaledContents(true);

        gridLayout_14->addWidget(Photo_7, 1, 0, 3, 1);

        address_7 = new QLabel(widgetFirst_7);
        address_7->setObjectName(QStringLiteral("address_7"));
        address_7->setMinimumSize(QSize(200, 0));
        address_7->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_14->addWidget(address_7, 5, 2, 1, 1);

        label_31 = new QLabel(widgetFirst_7);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_14->addWidget(label_31, 0, 1, 1, 1);

        label_32 = new QLabel(widgetFirst_7);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_14->addWidget(label_32, 3, 1, 1, 1);

        label_33 = new QLabel(widgetFirst_7);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_14->addWidget(label_33, 2, 1, 1, 1);

        label_34 = new QLabel(widgetFirst_7);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_14->addWidget(label_34, 1, 1, 1, 1);

        label_35 = new QLabel(widgetFirst_7);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_14->addWidget(label_35, 5, 1, 1, 1);

        illness_7 = new QLabel(widgetFirst_7);
        illness_7->setObjectName(QStringLiteral("illness_7"));
        illness_7->setStyleSheet(QString::fromUtf8("font: 10pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_14->addWidget(illness_7, 4, 0, 1, 1, Qt::AlignHCenter);

        pushButton_5 = new QPushButton(widgetFirst_7);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #C0DCF2;\n"
"color: rgb(30, 144, 225);\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"font: 10pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"}\n"
"\n"
"QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F9FF,stop:1 #DAEFFF);\n"
"}\n"
"\n"
"QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}"));

        gridLayout_14->addWidget(pushButton_5, 5, 0, 1, 1);


        gridLayout_13->addWidget(widgetFirst_7, 0, 0, 1, 1);


        gridLayout_19->addWidget(frameBackground_2, 0, 1, 1, 1);

        frameBackground_3 = new QFrame(CylinderWidget);
        frameBackground_3->setObjectName(QStringLiteral("frameBackground_3"));
        frameBackground_3->setFrameShape(QFrame::StyledPanel);
        frameBackground_3->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(frameBackground_3);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        widgetFirst_8 = new QWidget(frameBackground_3);
        widgetFirst_8->setObjectName(QStringLiteral("widgetFirst_8"));
        widgetFirst_8->setStyleSheet(QStringLiteral(""));
        gridLayout_16 = new QGridLayout(widgetFirst_8);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        ward_id_8 = new QLabel(widgetFirst_8);
        ward_id_8->setObjectName(QStringLiteral("ward_id_8"));
        ward_id_8->setMinimumSize(QSize(100, 0));
        ward_id_8->setStyleSheet(QString::fromUtf8("font: 10pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_16->addWidget(ward_id_8, 0, 0, 1, 1);

        name_8 = new QLabel(widgetFirst_8);
        name_8->setObjectName(QStringLiteral("name_8"));
        name_8->setMinimumSize(QSize(200, 0));
        name_8->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_16->addWidget(name_8, 0, 2, 1, 1);

        brith_data_8 = new QLabel(widgetFirst_8);
        brith_data_8->setObjectName(QStringLiteral("brith_data_8"));
        brith_data_8->setMinimumSize(QSize(200, 0));
        brith_data_8->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(112, 128, 144)"));

        gridLayout_16->addWidget(brith_data_8, 2, 2, 1, 1);

        id_card_8 = new QLabel(widgetFirst_8);
        id_card_8->setObjectName(QStringLiteral("id_card_8"));
        id_card_8->setMinimumSize(QSize(200, 0));
        id_card_8->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";color: rgb(112, 128, 144)"));

        gridLayout_16->addWidget(id_card_8, 3, 2, 1, 1);

        sex_8 = new QLabel(widgetFirst_8);
        sex_8->setObjectName(QStringLiteral("sex_8"));
        sex_8->setMinimumSize(QSize(200, 0));
        sex_8->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144)"));

        gridLayout_16->addWidget(sex_8, 1, 2, 1, 1);

        Photo_8 = new QLabel(widgetFirst_8);
        Photo_8->setObjectName(QStringLiteral("Photo_8"));
        Photo_8->setMinimumSize(QSize(100, 0));
        Photo_8->setMaximumSize(QSize(100, 160));
        Photo_8->setScaledContents(true);

        gridLayout_16->addWidget(Photo_8, 1, 0, 3, 1);

        address_8 = new QLabel(widgetFirst_8);
        address_8->setObjectName(QStringLiteral("address_8"));
        address_8->setMinimumSize(QSize(200, 0));
        address_8->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_16->addWidget(address_8, 5, 2, 1, 1);

        label_36 = new QLabel(widgetFirst_8);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_16->addWidget(label_36, 0, 1, 1, 1);

        label_37 = new QLabel(widgetFirst_8);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_16->addWidget(label_37, 3, 1, 1, 1);

        label_38 = new QLabel(widgetFirst_8);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_16->addWidget(label_38, 2, 1, 1, 1);

        label_39 = new QLabel(widgetFirst_8);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_16->addWidget(label_39, 1, 1, 1, 1);

        label_40 = new QLabel(widgetFirst_8);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_16->addWidget(label_40, 5, 1, 1, 1);

        illness_8 = new QLabel(widgetFirst_8);
        illness_8->setObjectName(QStringLiteral("illness_8"));
        illness_8->setStyleSheet(QString::fromUtf8("font: 10pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_16->addWidget(illness_8, 4, 0, 1, 1, Qt::AlignHCenter);

        pushButton_6 = new QPushButton(widgetFirst_8);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("\n"
"QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #C0DCF2;\n"
"color: rgb(30, 144, 225);\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"font: 10pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"}\n"
"\n"
"QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F9FF,stop:1 #DAEFFF);\n"
"}\n"
"\n"
"QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}"));

        gridLayout_16->addWidget(pushButton_6, 5, 0, 1, 1);


        gridLayout_15->addWidget(widgetFirst_8, 0, 0, 1, 1);


        gridLayout_19->addWidget(frameBackground_3, 1, 0, 1, 1);

        frameBackground_4 = new QFrame(CylinderWidget);
        frameBackground_4->setObjectName(QStringLiteral("frameBackground_4"));
        frameBackground_4->setFrameShape(QFrame::StyledPanel);
        frameBackground_4->setFrameShadow(QFrame::Raised);
        gridLayout_17 = new QGridLayout(frameBackground_4);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        widgetFirst_9 = new QWidget(frameBackground_4);
        widgetFirst_9->setObjectName(QStringLiteral("widgetFirst_9"));
        widgetFirst_9->setStyleSheet(QStringLiteral(""));
        gridLayout_18 = new QGridLayout(widgetFirst_9);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        ward_id_9 = new QLabel(widgetFirst_9);
        ward_id_9->setObjectName(QStringLiteral("ward_id_9"));
        ward_id_9->setMinimumSize(QSize(100, 0));
        ward_id_9->setStyleSheet(QString::fromUtf8("font: 10pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_18->addWidget(ward_id_9, 0, 0, 1, 1);

        name_9 = new QLabel(widgetFirst_9);
        name_9->setObjectName(QStringLiteral("name_9"));
        name_9->setMinimumSize(QSize(200, 0));
        name_9->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_18->addWidget(name_9, 0, 2, 1, 1);

        brith_data_9 = new QLabel(widgetFirst_9);
        brith_data_9->setObjectName(QStringLiteral("brith_data_9"));
        brith_data_9->setMinimumSize(QSize(200, 0));
        brith_data_9->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(112, 128, 144)"));

        gridLayout_18->addWidget(brith_data_9, 2, 2, 1, 1);

        id_card_9 = new QLabel(widgetFirst_9);
        id_card_9->setObjectName(QStringLiteral("id_card_9"));
        id_card_9->setMinimumSize(QSize(200, 0));
        id_card_9->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Times New Roman\";color: rgb(112, 128, 144)"));

        gridLayout_18->addWidget(id_card_9, 3, 2, 1, 1);

        sex_9 = new QLabel(widgetFirst_9);
        sex_9->setObjectName(QStringLiteral("sex_9"));
        sex_9->setMinimumSize(QSize(200, 0));
        sex_9->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144)"));

        gridLayout_18->addWidget(sex_9, 1, 2, 1, 1);

        Photo_9 = new QLabel(widgetFirst_9);
        Photo_9->setObjectName(QStringLiteral("Photo_9"));
        Photo_9->setMinimumSize(QSize(100, 0));
        Photo_9->setMaximumSize(QSize(100, 160));
        Photo_9->setScaledContents(true);

        gridLayout_18->addWidget(Photo_9, 1, 0, 3, 1);

        address_9 = new QLabel(widgetFirst_9);
        address_9->setObjectName(QStringLiteral("address_9"));
        address_9->setMinimumSize(QSize(200, 0));
        address_9->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_18->addWidget(address_9, 5, 2, 1, 1);

        label_41 = new QLabel(widgetFirst_9);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_18->addWidget(label_41, 0, 1, 1, 1);

        label_42 = new QLabel(widgetFirst_9);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_18->addWidget(label_42, 3, 1, 1, 1);

        label_43 = new QLabel(widgetFirst_9);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_18->addWidget(label_43, 2, 1, 1, 1);

        label_44 = new QLabel(widgetFirst_9);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_18->addWidget(label_44, 1, 1, 1, 1);

        label_45 = new QLabel(widgetFirst_9);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setStyleSheet(QString::fromUtf8("font: 12pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(112, 128, 144);"));

        gridLayout_18->addWidget(label_45, 5, 1, 1, 1);

        illness_9 = new QLabel(widgetFirst_9);
        illness_9->setObjectName(QStringLiteral("illness_9"));
        illness_9->setStyleSheet(QString::fromUtf8("font: 10pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"color: rgb(30, 144, 225);"));

        gridLayout_18->addWidget(illness_9, 4, 0, 1, 1, Qt::AlignHCenter);

        pushButton_7 = new QPushButton(widgetFirst_9);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("\n"
"QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #C0DCF2;\n"
"color: rgb(30, 144, 225);\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"font: 10pt \"\350\277\267\344\275\240\347\256\200\350\241\214\346\245\267\347\242\221\";\n"
"}\n"
"\n"
"QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F9FF,stop:1 #DAEFFF);\n"
"}\n"
"\n"
"QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #DEF0FE,stop:1 #C0DEF6);\n"
"}"));

        gridLayout_18->addWidget(pushButton_7, 5, 0, 1, 1);


        gridLayout_17->addWidget(widgetFirst_9, 0, 0, 1, 1);


        gridLayout_19->addWidget(frameBackground_4, 1, 1, 1, 1);


        retranslateUi(CylinderWidget);

        QMetaObject::connectSlotsByName(CylinderWidget);
    } // setupUi

    void retranslateUi(QWidget *CylinderWidget)
    {
        CylinderWidget->setWindowTitle(QApplication::translate("CylinderWidget", "Form", Q_NULLPTR));
        ward_id->setText(QApplication::translate("CylinderWidget", "SCNU-Ward001", Q_NULLPTR));
        name->setText(QString());
        brith_data->setText(QString());
        id_card->setText(QString());
        sex->setText(QString());
        Photo->setText(QString());
        address->setText(QString());
        label->setText(QApplication::translate("CylinderWidget", "\345\220\215\345\255\227\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("CylinderWidget", "\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("CylinderWidget", "\345\207\272\347\224\237\346\227\266\351\227\264", Q_NULLPTR));
        label_2->setText(QApplication::translate("CylinderWidget", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("CylinderWidget", "\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        illness->setText(QApplication::translate("CylinderWidget", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CylinderWidget", "Patient001", Q_NULLPTR));
        ward_id_7->setText(QApplication::translate("CylinderWidget", "SCNU-Ward001", Q_NULLPTR));
        name_7->setText(QString());
        brith_data_7->setText(QString());
        id_card_7->setText(QString());
        sex_7->setText(QString());
        Photo_7->setText(QString());
        address_7->setText(QString());
        label_31->setText(QApplication::translate("CylinderWidget", "\345\220\215\345\255\227\357\274\232", Q_NULLPTR));
        label_32->setText(QApplication::translate("CylinderWidget", "\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201\357\274\232", Q_NULLPTR));
        label_33->setText(QApplication::translate("CylinderWidget", "\345\207\272\347\224\237\346\227\266\351\227\264", Q_NULLPTR));
        label_34->setText(QApplication::translate("CylinderWidget", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_35->setText(QApplication::translate("CylinderWidget", "\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        illness_7->setText(QApplication::translate("CylinderWidget", "TextLabel", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("CylinderWidget", "Patient001", Q_NULLPTR));
        ward_id_8->setText(QApplication::translate("CylinderWidget", "SCNU-Ward001", Q_NULLPTR));
        name_8->setText(QString());
        brith_data_8->setText(QString());
        id_card_8->setText(QString());
        sex_8->setText(QString());
        Photo_8->setText(QString());
        address_8->setText(QString());
        label_36->setText(QApplication::translate("CylinderWidget", "\345\220\215\345\255\227\357\274\232", Q_NULLPTR));
        label_37->setText(QApplication::translate("CylinderWidget", "\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201\357\274\232", Q_NULLPTR));
        label_38->setText(QApplication::translate("CylinderWidget", "\345\207\272\347\224\237\346\227\266\351\227\264", Q_NULLPTR));
        label_39->setText(QApplication::translate("CylinderWidget", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_40->setText(QApplication::translate("CylinderWidget", "\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        illness_8->setText(QApplication::translate("CylinderWidget", "TextLabel", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("CylinderWidget", "Patient001", Q_NULLPTR));
        ward_id_9->setText(QApplication::translate("CylinderWidget", "SCNU-Ward001", Q_NULLPTR));
        name_9->setText(QString());
        brith_data_9->setText(QString());
        id_card_9->setText(QString());
        sex_9->setText(QString());
        Photo_9->setText(QString());
        address_9->setText(QString());
        label_41->setText(QApplication::translate("CylinderWidget", "\345\220\215\345\255\227\357\274\232", Q_NULLPTR));
        label_42->setText(QApplication::translate("CylinderWidget", "\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201\357\274\232", Q_NULLPTR));
        label_43->setText(QApplication::translate("CylinderWidget", "\345\207\272\347\224\237\346\227\266\351\227\264", Q_NULLPTR));
        label_44->setText(QApplication::translate("CylinderWidget", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_45->setText(QApplication::translate("CylinderWidget", "\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        illness_9->setText(QApplication::translate("CylinderWidget", "TextLabel", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("CylinderWidget", "Patient001", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CylinderWidget: public Ui_CylinderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CYLINDERWIDGET_H
