#include "widget.h"
#include "ui_widget.h"
#include "qevent.h"
#include "qdebug.h"
//显示华南师范大学LOGO
Widget::Widget(QWidget *parent) : QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint);
    ui->widget->installEventFilter(this);
    ui->widget->setStyleSheet(QString("background-image:url(:/res/res/image/SCNU/%1.png);").arg(1));

}
//析构函数
Widget::~Widget()
{
    delete ui;
}
//显示
bool Widget::eventFilter(QObject *watched, QEvent *evt)
{
    static int index = 1;
    static QPoint mousePoint;
    static bool mousePressed = false;

    QMouseEvent *event = static_cast<QMouseEvent *>(evt);
    if (event->type() == QEvent::MouseButtonPress) {
        if (event->button() == Qt::LeftButton) {
            this->close(); //隐藏LOGO
            //进入身份认证流程
            Baidu_Image *baidu_image =new Baidu_Image();
            baidu_image->show();
            return true;
        } else {
            exit(0);
        }
    } else if (event->type() == QEvent::MouseButtonRelease) {
        mousePressed = false;
        return true;
    } else if (event->type() == QEvent::MouseMove) {
        if (mousePressed && (event->buttons() && Qt::LeftButton)) {
            this->move(event->globalPos() - mousePoint);
            return true;
        }
    }

    return QWidget::eventFilter(watched, event);
}
