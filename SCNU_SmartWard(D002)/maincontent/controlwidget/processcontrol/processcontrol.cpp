/*****************************************
 * 作者: YYC
 * 日期: 2021-01-06
 * 功能：流程进度控件，使用双向链表思想
 * ***************************************/
#include "processcontrol.h"
#include "ui_processcontrol.h"
#include <QDebug>

QMap<int, QString> ProcessControl::m_mapMode;


ProcessControl::ProcessControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProcessControl)
{
    ui->setupUi(this);
    this->initValue();
}

ProcessControl::~ProcessControl()
{
    delete ui;
}

void ProcessControl::initValue()
{
    QString styleSheet = "QFrame#frameProcess{background:transparent;"
                         "border: 2px solid %1;border-radius: 4px;}";

    m_mapMode[TYPE_ERROR] = styleSheet.arg("rgb(153, 20, 20)");
    m_mapMode[TYPE_NORMAL] = styleSheet.arg("rgb(255, 220, 220)");
    m_mapMode[TYPE_SUCCESS] = styleSheet.arg("rgb(102, 153, 0)");
}

ProcessControl *ProcessControl::getPreWidget() const
{
    return preWidget;
}


void ProcessControl::setPreWidget(ProcessControl *value)
{
    preWidget = value;
}


ProcessControl *ProcessControl::getNextWidget() const
{
    return nextWidget;
}


void ProcessControl::setNextWidget(ProcessControl *value)
{
    nextWidget = value;
}


QPoint ProcessControl::getLeftCenter()
{
    return QPoint(this->x(), this->y() + this->height() / 2);
}


QPoint ProcessControl::getRightCenter()
{
    return QPoint(this->x() + this->width(), this->y() + this->height() / 2);
}


void ProcessControl::switchMode(ProcessControl::ModeType modeType)
{
    if (modeType < TYPE_MAX)
    {
        this->setStyleSheet(m_mapMode.value(modeType));
    }
}


void ProcessControl::mousePressEvent(QMouseEvent *event)
{
    this->setFocus();
    if(event->button() == Qt::LeftButton)
    {
        mousePress = true;
    }
    movePoint = event->globalPos() - this->pos();
}


void ProcessControl::mouseReleaseEvent(QMouseEvent *)
{
    mousePress = false;
}


void ProcessControl::mouseMoveEvent(QMouseEvent *event)
{
    if(mousePress)
    {
        QPoint resultPoint = event->globalPos() - movePoint;

        // 限制不让其位置越过下一个控件
        if (nullptr != nextWidget)
        {
            int nextX = nextWidget->getLeftCenter().x();
            if(resultPoint.x() + this->width() + OFFSET_VALEU > nextX)
            {
                resultPoint.setX(nextX - this->width() - OFFSET_VALEU);
            }
        }

        // 限制不让其位置越过上一个控件
        if (nullptr != preWidget)
        {
            int preX = preWidget->getRightCenter().x();
            if(resultPoint.x() - OFFSET_VALEU < preX)
            {
                resultPoint.setX(preX + OFFSET_VALEU);
            }
        }

        // 限制不让其出父窗体
        if (resultPoint.x() < 0)
        {
            resultPoint.setX(0);
        }
        if (resultPoint.y() < 0)
        {
            resultPoint.setY(0);
        }

        if (this->parentWidget())
        {
            // 限制不让其出父窗体
            if(resultPoint.x() + this->width() > this->parentWidget()->width())
            {
                resultPoint.setX(this->parentWidget()->width() - this->width());
            }
            if(resultPoint.y() + this->height() > this->parentWidget()->height())
            {
                resultPoint.setY(this->parentWidget()->height() - this->height());
            }

            this->parentWidget()->update();
        }
        this->move(resultPoint);
    }
}
