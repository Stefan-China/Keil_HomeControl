/*****************************************
 * 作者: 蔡旭刚
 * 日期: 2021-04-26
 * 功能：身份信息
 * ***************************************/
#ifndef CYLINDERWIDGET_H
#define CYLINDERWIDGET_H

#include <QWidget>
#include <QPaintEvent>
#include <QLinearGradient>
#include <QPainter>
#include <QJsonArray>
#include <globaldef.hpp>
#include "screen/mainobject.h"
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include "baidu_image/myimage.h"
#include "baidu_image/http.h"
#include <QJsonObject>
#include <QJsonDocument>


#pragma execution_character_set("utf-8")
namespace Ui {
class CylinderWidget;
}

class CylinderWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CylinderWidget(QWidget *parent = 0);
    ~CylinderWidget();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::CylinderWidget *ui;
    QString imgPath;

};

#endif // CYLINDERWIDGET_H
