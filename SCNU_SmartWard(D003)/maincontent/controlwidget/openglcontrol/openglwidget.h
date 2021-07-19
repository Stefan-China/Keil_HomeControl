#ifndef OPENGLWIDGET_H
#define OPENGLWIDGET_H

#include <QWidget>
#include <QTimer>
#include "hand_recieve/handrecieve.h"
namespace Ui {
class OpenglWidget;
}

class OpenglWidget : public QWidget
{
    Q_OBJECT

public:
    explicit OpenglWidget(QWidget *parent = 0);
    ~OpenglWidget();

private:
    Ui::OpenglWidget *ui;
    void initValue();
private slots:
    void updateProgress();
};

#endif // OPENGLWIDGET_H
