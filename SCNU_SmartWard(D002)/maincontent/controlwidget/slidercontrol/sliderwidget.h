/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：移动进度窗口
 * ***************************************/
#ifndef SLIDERWIDGET_H
#define SLIDERWIDGET_H

#include <QWidget>

#include <QtCharts/QChartView>//显示图表
#include <QtCharts/QLineSeries>//线系列
#include <QDoubleSpinBox>
#include <QGridLayout>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QValueAxis>
#include "maincontent/controlwidget/movecontrol/movewidget.h"
#include "QDebug"
#include "qmath.h"
#include "QtCharts\QDateTimeAxis"
#include <QTimer>
QT_CHARTS_USE_NAMESPACE

namespace Ui {
class SliderWidget;
}

class SliderWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SliderWidget(QWidget *parent = 0);
    ~SliderWidget();

public slots:

    void freshCloudData();

private:
    Ui::SliderWidget *ui;
    QChart chart,chart1;
    QSplineSeries m_series,m_series1;
    QStringList m_titles,m_titles1;
    QValueAxis m_axis,m_axis1;

    long int m_x;
    void initValue();
    //void SliderWidget::wheelEvent(QWheelEvent *event);
};

#endif // SLIDERWIDGET_H
