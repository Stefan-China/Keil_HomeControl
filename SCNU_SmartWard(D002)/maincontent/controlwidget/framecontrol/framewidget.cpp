/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：面板窗口
 * ***************************************/
#include "framewidget.h"
#include "ui_framewidget.h"
#include "flowlayout/flowlayout.h"
#include "framecontrol.h"

// 构造函数
FrameWidget::FrameWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrameWidget)
{
    ui->setupUi(this);
     qDebug()<<"FrameWidget";
    //Smart Medical left hand doctor API
    ui->medical_widget->page()->load(QUrl("https://robot-lib-achieve.zuoshouyisheng.com/?app_id=586232fc0bdf3f6784d211bb"));
}

// 析构函数
FrameWidget::~FrameWidget()
{
    delete ui;
}

//左手医生API
void FrameWidget::on_pushButton_clicked()
{
    ui->medical_widget->page()->load(QUrl("https://robot-lib-achieve.zuoshouyisheng.com/?app_id=586232fc0bdf3f6784d211bb"));
}

void FrameWidget::on_pushButton_3_clicked()
{
     ui->medical_widget->page()->load(QUrl("https://robot-lib-achieve.zuoshouyisheng.com/?app_id=593769370bdf3f5205f6cbe0"));
}

void FrameWidget::on_pushButton_2_clicked()
{
     ui->medical_widget->page()->load(QUrl("https://robot-lib-achieve.zuoshouyisheng.com/?app_id=59ba2b63bea7c00ecd02dfb9"));
}

void FrameWidget::on_pushButton_4_clicked()
{
     ui->medical_widget->page()->load(QUrl("https://robot-lib-achieve.zuoshouyisheng.com/?app_id=5ad42e95bea7c06caf241b92"));
}

void FrameWidget::on_pushButton_5_clicked()
{
    ui->medical_widget->page()->load(QUrl("https://robot-lib-achieve.zuoshouyisheng.com/?app_id=5a7d6767bea7c06caf241b78"));
}
