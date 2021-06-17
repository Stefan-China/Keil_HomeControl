#ifndef BAIDU_IMAGE_H
#define BAIDU_IMAGE_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include "baidu_image/myimage.h"
#include "baidu_image/http.h"
#include <QJsonObject>
#include <QJsonDocument>
#include <QDebug>
#include <QJsonArray>
#include "screen/mainobject.h"
#include <globaldef.hpp>
#pragma execution_character_set("utf-8")

//extern QString ui_id,ui_address,ui_brith,ui_name,ui_sex, ui_photo;
namespace Ui {
class Baidu_Image;
}
class Baidu_Image : public QMainWindow
{
    Q_OBJECT

public:
    explicit Baidu_Image(QWidget *parent = nullptr);
    ~Baidu_Image();


private slots:
//    void openImageSlot();
//    void openImageSlot_2();
   // void on_pushButton_clicked();

private:
    Ui::Baidu_Image *ui;
    QString imgPath;
    QString imgPath_2;
};

#endif // BAIDU_IMAGE_H
