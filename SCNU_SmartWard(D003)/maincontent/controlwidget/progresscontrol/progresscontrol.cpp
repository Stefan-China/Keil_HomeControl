/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：进度条
 * ***************************************/
#include "progresscontrol.h"
#include "ui_progresscontrol.h"
#include <QDebug>

// 构造函数
ProgressControl::ProgressControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProgressControl)
{
    ui->setupUi(this);

}

// 析构函数
ProgressControl::~ProgressControl()
{
    delete ui;
}

// 设置进度条进度
void ProgressControl::setProgressValue(int value)
{
    while (progressValue < value)
    {
        progressValue += 0.1;
        qApp->processEvents();
        this->repaint();
    }
    progressValue = value;
    this->repaint();
}

//// 设置进度条颜色
void ProgressControl::setPaintColor(const QColor &value)
{
    paintColor = value;
}

// 设置进度条100%
void ProgressControl::setProgressFinish()
{
    progressValue = 100;
}

// 绘制事件
void ProgressControl::paintEvent(QPaintEvent *paintEvent)
{
    Q_UNUSED(paintEvent);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    QFont font(QString("微软雅黑"));
    QPen painterPen;
    painterPen.setColor(Qt::white);
    painter.setPen(painterPen);
    QBrush brush(QColor(100, 100, 100, 255));
    painter.setBrush(brush);

    int widgetWidth = this->width();
    int widgetHeight = this->height();
    const int xRadius = 5;
    const int yRadius = 10;
    const int progressHeight = 10;
    const int offsetValue = 80;
    const int startDrawX = widgetWidth * 0.1;
    const int startDrawY = widgetHeight * 0.95;
    painter.drawRoundedRect(startDrawX, startDrawY, (widgetWidth - offsetValue * 2), progressHeight, xRadius, yRadius);

    //进度
    painterPen.setColor(Qt::white);
    painter.setPen(painterPen);
    if(progressValue != 0)
    {
        QBrush brush(paintColor);
        painter.setBrush(brush);
        painter.drawRoundedRect(startDrawX, startDrawY, (widgetWidth - offsetValue * 2) * progressValue / 100 , progressHeight, xRadius, yRadius);
    }

    //画百分比
    font.setPixelSize(14);
    font.setBold(false);
    painter.setFont(font);
    painterPen.setColor(Qt::black);
    painter.setPen(painterPen);
    painter.drawText(0, startDrawY-5, widgetWidth-20, 20, Qt::AlignRight, QString::number(progressValue, 'f', 0) + QString("%"));
    painter.end();
//    if(progressValue==100)
//    {
//        handRecieve *recieve=new handRecieve;
//        recieve->Server_Recieve();
//        qDebug()<<recieve->ui_Heartbeat<<recieve->ui_Shrink;
//        ui->Heartbeat->setText(QString::number(recieve->ui_Heartbeat, 'f', 2));
//        ui->Diastolic->setText(QString::number(recieve->ui_Shrink, 'f', 2)+"/"+QString::number(recieve->ui_Diastolic, 'f', 2));
//        ui->temperature->setText(QString::number(recieve->ui_Bodytemperature, 'f', 2)+"/"+QString::number(recieve->ui_Wristtemperature, 'f', 2));
//        ui->Steps->setText(QString::number(recieve->ui_Steps, 'f', 2));


//        delete recieve;
//    }

}
