/********************************************************************************
** Form generated from reading UI file 'exerc_bird.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXERC_BIRD_H
#define UI_EXERC_BIRD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exerc_bird
{
public:
    QPushButton *pushButton;
    QLabel *qla_pipe0;
    QLabel *qla_pipe1;
    QLabel *qla_pipe3;
    QLabel *qla_pipe2;

    void setupUi(QWidget *exerc_bird)
    {
        if (exerc_bird->objectName().isEmpty())
            exerc_bird->setObjectName(QStringLiteral("exerc_bird"));
        exerc_bird->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exerc_bird->sizePolicy().hasHeightForWidth());
        exerc_bird->setSizePolicy(sizePolicy);
        pushButton = new QPushButton(exerc_bird);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1110, 557, 93, 111));
        qla_pipe0 = new QLabel(exerc_bird);
        qla_pipe0->setObjectName(QStringLiteral("qla_pipe0"));
        qla_pipe0->setGeometry(QRect(690, -210, 256, 480));
        sizePolicy.setHeightForWidth(qla_pipe0->sizePolicy().hasHeightForWidth());
        qla_pipe0->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(25);
        qla_pipe0->setFont(font);
        qla_pipe0->setStyleSheet(QStringLiteral("border-image: url(:/exerc_image/resource/image/Game/game_bird/pipeline_up.png);"));
        qla_pipe0->setAlignment(Qt::AlignCenter);
        qla_pipe1 = new QLabel(exerc_bird);
        qla_pipe1->setObjectName(QStringLiteral("qla_pipe1"));
        qla_pipe1->setGeometry(QRect(270, 330, 256, 480));
        sizePolicy.setHeightForWidth(qla_pipe1->sizePolicy().hasHeightForWidth());
        qla_pipe1->setSizePolicy(sizePolicy);
        qla_pipe1->setFont(font);
        qla_pipe1->setStyleSheet(QStringLiteral("border-image: url(:/exerc_image/resource/image/Game/game_bird/pipeline_down.png);"));
        qla_pipe1->setAlignment(Qt::AlignCenter);
        qla_pipe3 = new QLabel(exerc_bird);
        qla_pipe3->setObjectName(QStringLiteral("qla_pipe3"));
        qla_pipe3->setGeometry(QRect(10, 330, 256, 480));
        sizePolicy.setHeightForWidth(qla_pipe3->sizePolicy().hasHeightForWidth());
        qla_pipe3->setSizePolicy(sizePolicy);
        qla_pipe3->setFont(font);
        qla_pipe3->setStyleSheet(QStringLiteral("border-image: url(:/exerc_image/resource/image/Game/game_bird/pipeline_down.png);"));
        qla_pipe3->setAlignment(Qt::AlignCenter);
        qla_pipe2 = new QLabel(exerc_bird);
        qla_pipe2->setObjectName(QStringLiteral("qla_pipe2"));
        qla_pipe2->setGeometry(QRect(420, -210, 256, 480));
        sizePolicy.setHeightForWidth(qla_pipe2->sizePolicy().hasHeightForWidth());
        qla_pipe2->setSizePolicy(sizePolicy);
        qla_pipe2->setFont(font);
        qla_pipe2->setStyleSheet(QStringLiteral("border-image: url(:/exerc_image/resource/image/Game/game_bird/pipeline_up.png);"));
        qla_pipe2->setAlignment(Qt::AlignCenter);

        retranslateUi(exerc_bird);

        QMetaObject::connectSlotsByName(exerc_bird);
    } // setupUi

    void retranslateUi(QWidget *exerc_bird)
    {
        exerc_bird->setWindowTitle(QApplication::translate("exerc_bird", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("exerc_bird", "PushButton", Q_NULLPTR));
        qla_pipe0->setText(QApplication::translate("exerc_bird", "2", Q_NULLPTR));
        qla_pipe1->setText(QApplication::translate("exerc_bird", "3", Q_NULLPTR));
        qla_pipe3->setText(QApplication::translate("exerc_bird", "1", Q_NULLPTR));
        qla_pipe2->setText(QApplication::translate("exerc_bird", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class exerc_bird: public Ui_exerc_bird {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERC_BIRD_H
