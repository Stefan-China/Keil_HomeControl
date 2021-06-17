#include "bannawidget.h"
#include "ui_bannawidget.h"
#include "QDebug"

BannaWidget::BannaWidget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::BannaWidget)
{
    ui->setupUi(this);
    qDebug()<<"BannaWidget";
}


BannaWidget::~BannaWidget()
{
    delete ui;
}
