/*****************************************
 * 作者: YYC
 * 日期: 2021-01-07
 * 功能：列表窗口，放置列表控件
 * ***************************************/
#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include "hand_recieve/handrecieve.h"
#include "baidu_map/bridge.h"
#include <QtWebChannel>
namespace Ui {
class ListWidget;
}

class ListWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ListWidget(QWidget *parent = 0);
    ~ListWidget();
    void Map_sos(QString lng1,QString lat1);
protected:
    double lng_alarm,lat_alarm;
private:
    void initValue();

private:
    Ui::ListWidget *ui;
    bridge *JSBridge;

    int flag_map_sos=0;
private slots:
    void updateProgress();
    void on_on_sos_map_clicked();
    void on_off_sos_map_clicked();
};

#endif // LISTWIDGET_H
