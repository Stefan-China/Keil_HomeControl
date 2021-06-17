/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：移动进度
 * ***************************************/
#ifndef SLIDERCONTROL_H
#define SLIDERCONTROL_H

#include <QWidget>
#include <QVector>
#include "maincontent/controlwidget/plotcontrol/plotcontrol.h"
#define LIN_COLOR  QColor(0, 107, 176)
#define TEXT_COLOR QColor(255, 255, 255)
#define BACKGROUND_COLOR QColor(26, 26, 26)
#define BRUSH_COLOR QColor(255, 255, 255, 0)
#define LABEL_COLOR QColor(40,150,120)


namespace Ui {
class SliderControl;
}


class SliderControl : public QWidget
{
    Q_OBJECT

    enum PointType {
        DATA_POINT = 0,
        SMALL_POINT,
        BIG_POINT,
    };

private:
    Ui::SliderControl *ui;
    CoorData pointData;
public:
    explicit SliderControl(QWidget *parent = 0);
    ~SliderControl();

    void setControlData(const CoorData &coorData);


private:
    void initValue();
    bool eventFilter(QObject *watched, QEvent *event) override;
    QPoint matchPoint(QPoint point);
};



#endif // SLIDERCONTROL_H
