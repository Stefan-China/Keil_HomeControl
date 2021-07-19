/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：表格窗口
 * ***************************************/
#ifndef TABLEWIDGET_H
#define TABLEWIDGET_H

#include <QWidget>
#include <QMovie>
#include <QTimer>
#include "hand_recieve/handrecieve.h"
namespace Ui {
class TableWidget;
}

class TableWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TableWidget(QWidget *parent = 0);
    ~TableWidget();
    QMovie *movie;


private slots:
    void on_LightSwitch_clicked();
    void Progress();

private:
    Ui::TableWidget *ui;
    void initValue();


};

#endif // TABLEWIDGET_H
