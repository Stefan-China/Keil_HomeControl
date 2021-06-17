
#include "sliderwidget.h"
#include "ui_sliderwidget.h"
#pragma execution_character_set("utf-8")



SliderWidget::SliderWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SliderWidget)
{
    ui->setupUi(this);
    qDebug()<<"SliderWidget";
    QTimer *myTimer = new QTimer(this);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(freshCloudData()));
    myTimer->setInterval(24);
    this->initValue();
    myTimer->start();


}
SliderWidget::~SliderWidget()
{
    delete ui;
}

void SliderWidget::freshCloudData()
{

    m_series.append(m_x, bcidata);
    m_series1.append(m_x, attention);
    m_x=m_x+1;
    if (m_x >= 500)
    {
         chart.scroll(1.49, 0);
         chart1.scroll(1.49, 0);
    }
}

void SliderWidget::initValue()
{
    m_x=0;
    chart.setTheme(QChart::ChartThemeBlueCerulean);//设置系统主题
    chart.setTitle("脑电波形图");//设置标题
    chart.setTitleFont(QFont("微软雅黑",10));
    chart.legend()->hide();

    QPen green(Qt::green);
    green.setWidth(1);
    m_series.setPen(green);
    m_series.append(0, 470);


    chart.addSeries(&m_series);
    chart.createDefaultAxes();
    chart.setAxisX(&m_axis,&m_series);
    m_axis.setTickCount(5);
    chart.axisX()->setRange(0,500);
    chart.axisY()->setRange(300, 600);
    QChartView *chartView = new QChartView(&chart);
    chartView->setRubberBand(QChartView::HorizontalRubberBand);
    //设置抗锯齿
    chartView->setRenderHint(QPainter::Antialiasing);
    //设置chartview大小
    chartView->resize(1000,300);
    chartView->setRenderHint(QPainter::Antialiasing);
     //设置图表动画
    chart.setAnimationOptions(QChart::NoAnimation);
    QGridLayout *baseLayout = new QGridLayout(); //便于显示，创建网格布局
    baseLayout->addWidget(chartView, 0, 0);
    ui->widgetFirst->setLayout(baseLayout); //显示到QWidget控件



    chart1.setTheme(QChart::ChartThemeBlueCerulean);//设置系统主题
    chart1.setTitle("注意力波形图");//设置标题
    chart1.setTitleFont(QFont("微软雅黑",10));
    chart1.legend()->hide();

    QPen yellow(Qt::yellow);
    yellow.setWidth(1);
    m_series1.setPen(green);
    m_series1.append(0, 0);

    chart1.addSeries(&m_series1);
    chart1.createDefaultAxes();
    chart1.setAxisX(&m_axis1,&m_series1);
    m_axis1.setTickCount(5);
    chart1.axisX()->setRange(0,500);
    chart1.axisY()->setRange(0, 1);
    QChartView *chartView_attention = new QChartView(&chart1);
    chartView_attention->setRubberBand(QChartView::HorizontalRubberBand);
    //设置抗锯齿
    chartView_attention->setRenderHint(QPainter::Antialiasing);
    //设置chartview大小
    chartView_attention->resize(1000,300);
    chartView_attention->setRenderHint(QPainter::Antialiasing);
    //设置图表动画
    chart1.setAnimationOptions(QChart::NoAnimation);

    QGridLayout *baseLayout_attention = new QGridLayout(); //便于显示，创建网格布局
    baseLayout_attention->addWidget(chartView_attention, 0, 0);
    ui->widgetSecond->setLayout(baseLayout_attention); //显示到QWidget控件



}

////放大缩小，一个鼠标滚轮事件：

//void SliderWidget::wheelEvent(QWheelEvent *event)
//{
//    if (event->delta() > 0) {
//        chart.zoom(1.1);
//    } else {
//        chart.zoom(10.0/11);
//    }
//    if (event->delta() > 0) {
//        chart1.zoom(1.1);
//    } else {
//        chart1.zoom(10.0/11);
//    }

//    QWidget::wheelEvent(event);
//}




