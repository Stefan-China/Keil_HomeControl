/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：柱状图窗口
 * ***************************************/
#include "cylinderwidget.h"
#include "ui_cylinderwidget.h"


const QString  baiduTokenUrl = "https://aip.baidubce.com/oauth/2.0/token?grant_type=client_credentials&client_id=%1&client_secret=%2&";
const char* client_id = "qdLTj8EMR4xdC4aDSiXdpouG";
const char* secret_id = "i5hKuGb63GCP4baqP8G6TL0oEO1InOn9";
const QString Baidu_CardUrl = "https://aip.baidubce.com/rest/2.0/ocr/v1/idcard?access_token=%1";

//构造函数
CylinderWidget::CylinderWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CylinderWidget)
{
    ui->setupUi(this);
    qDebug()<<"CylinderWidget";
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
}
//析构函数
CylinderWidget::~CylinderWidget()
{
    delete ui;
}
//病人1按钮
void CylinderWidget::on_pushButton_clicked()
{
    imgPath = QFileDialog::getOpenFileName(this,"选择图片",QCoreApplication::applicationFilePath());

    if(imgPath.isEmpty())
    {
        QMessageBox::warning(this,"tip","Don't select patient ID card,Please select!");//如未选择，提示选择图片
    }

    QByteArray img = Myimage::imageToBase64(imgPath);
    QByteArray imgData = "id_card_side=front&image="+img+"&detect_photo=true";

    //获取access_token
    QByteArray replyData;
    QString url = QString(baiduTokenUrl).arg(client_id).arg(secret_id);
    QMap<QString,QString> header;  //封装头部信息
    header.insert(QString("Content-Type"),QString("application/x-www-form-urlencoded"));
    QString accessToken;

    bool result =Http::post_sync(url,header,imgData,replyData);
    if (result)
    {
        QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
        accessToken = obj.value("access_token").toString();
        qDebug() << accessToken;
    }
    replyData.clear();
    QString imgurl = Baidu_CardUrl.arg(accessToken);
    result = Http :: post_sync(imgurl,header,imgData,replyData);
    if (result)
    {
        QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
        QJsonValue val = obj.value("words_result");

        QString ui_photo = obj.value("photo").toString();
        if(val.isObject())
        {
            QJsonValue address = val.toObject().value("住址");
            QString ui_address = address.toObject().value("words").toString();

            QJsonValue brith = val.toObject().value("出生");
            QString ui_brith = brith.toObject().value("words").toString();

            QJsonValue name = val.toObject().value("姓名");
            QString  ui_name = name.toObject().value("words").toString();

            QJsonValue  sex= val.toObject().value("性别");
            QString ui_sex = sex.toObject().value("words").toString();

            QJsonValue id = val.toObject().value("公民身份号码");
            QString ui_id = id.toObject().value("words").toString();
            //病患身份信息显示
            QPixmap photo_image;
            photo_image.loadFromData(QByteArray::fromBase64(ui_photo.toLocal8Bit()));
            ui->Photo->setPixmap(photo_image);
            ui->name->setText(ui_name);
            ui->sex->setText(ui_sex);
            ui->brith_data->setText(QString(ui_brith));
            ui->id_card->setText(ui_id);
            ui->address->setText(ui_address);

        }
     }

}

void CylinderWidget::on_pushButton_5_clicked()
{
    imgPath = QFileDialog::getOpenFileName(this,"选择图片",QCoreApplication::applicationFilePath());

    if(imgPath.isEmpty())
    {
        QMessageBox::warning(this,"tip","Don't select patient ID card,Please select!");//如未选择，提示选择图片
    }

    QByteArray img = Myimage::imageToBase64(imgPath);
    QByteArray imgData = "id_card_side=front&image="+img+"&detect_photo=true";

    //获取access_token
    QByteArray replyData;
    QString url = QString(baiduTokenUrl).arg(client_id).arg(secret_id);
    QMap<QString,QString> header;  //封装头部信息
    header.insert(QString("Content-Type"),QString("application/x-www-form-urlencoded"));
    QString accessToken;

    bool result =Http::post_sync(url,header,imgData,replyData);
    if (result)
    {
        QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
        accessToken = obj.value("access_token").toString();
        qDebug() << accessToken;
    }
    replyData.clear();
    QString imgurl = Baidu_CardUrl.arg(accessToken);
    result = Http :: post_sync(imgurl,header,imgData,replyData);
    if (result)
    {
        QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
        QJsonValue val = obj.value("words_result");

        QString ui_photo = obj.value("photo").toString();
        if(val.isObject())
        {
            QJsonValue address = val.toObject().value("住址");
            QString ui_address = address.toObject().value("words").toString();

            QJsonValue brith = val.toObject().value("出生");
            QString ui_brith = brith.toObject().value("words").toString();

            QJsonValue name = val.toObject().value("姓名");
            QString  ui_name = name.toObject().value("words").toString();

            QJsonValue  sex= val.toObject().value("性别");
            QString ui_sex = sex.toObject().value("words").toString();

            QJsonValue id = val.toObject().value("公民身份号码");
            QString ui_id = id.toObject().value("words").toString();
            //病患身份信息显示
            QPixmap photo_image;
            photo_image.loadFromData(QByteArray::fromBase64(ui_photo.toLocal8Bit()));
            ui->Photo_7->setPixmap(photo_image);
            ui->name_7->setText(ui_name);
            ui->sex_7->setText(ui_sex);
            ui->brith_data_7->setText(QString(ui_brith));
            ui->id_card_7->setText(ui_id);
            ui->address_7->setText(ui_address);

        }
     }
}

void CylinderWidget::on_pushButton_6_clicked()
{
    imgPath = QFileDialog::getOpenFileName(this,"选择图片",QCoreApplication::applicationFilePath());

    if(imgPath.isEmpty())
    {
        QMessageBox::warning(this,"tip","Don't select patient ID card,Please select!");//如未选择，提示选择图片
    }

    QByteArray img = Myimage::imageToBase64(imgPath);
    QByteArray imgData = "id_card_side=front&image="+img+"&detect_photo=true";

    //获取access_token
    QByteArray replyData;
    QString url = QString(baiduTokenUrl).arg(client_id).arg(secret_id);
    QMap<QString,QString> header;  //封装头部信息
    header.insert(QString("Content-Type"),QString("application/x-www-form-urlencoded"));
    QString accessToken;

    bool result =Http::post_sync(url,header,imgData,replyData);
    if (result)
    {
        QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
        accessToken = obj.value("access_token").toString();
        qDebug() << accessToken;
    }
    replyData.clear();
    QString imgurl = Baidu_CardUrl.arg(accessToken);
    result = Http :: post_sync(imgurl,header,imgData,replyData);
    if (result)
    {
        QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
        QJsonValue val = obj.value("words_result");

        QString ui_photo = obj.value("photo").toString();
        if(val.isObject())
        {
            QJsonValue address = val.toObject().value("住址");
            QString ui_address = address.toObject().value("words").toString();

            QJsonValue brith = val.toObject().value("出生");
            QString ui_brith = brith.toObject().value("words").toString();

            QJsonValue name = val.toObject().value("姓名");
            QString  ui_name = name.toObject().value("words").toString();

            QJsonValue  sex= val.toObject().value("性别");
            QString ui_sex = sex.toObject().value("words").toString();

            QJsonValue id = val.toObject().value("公民身份号码");
            QString ui_id = id.toObject().value("words").toString();
            //病患身份信息显示
            QPixmap photo_image;
            photo_image.loadFromData(QByteArray::fromBase64(ui_photo.toLocal8Bit()));
            ui->Photo_8->setPixmap(photo_image);
            ui->name_8->setText(ui_name);
            ui->sex_8->setText(ui_sex);
            ui->brith_data_8->setText(QString(ui_brith));
            ui->id_card_8->setText(ui_id);
            ui->address_8->setText(ui_address);

        }
     }
}

void CylinderWidget::on_pushButton_7_clicked()
{
    imgPath = QFileDialog::getOpenFileName(this,"选择图片",QCoreApplication::applicationFilePath());

    if(imgPath.isEmpty())
    {
        QMessageBox::warning(this,"tip","Don't select patient ID card,Please select!");//如未选择，提示选择图片
    }

    QByteArray img = Myimage::imageToBase64(imgPath);
    QByteArray imgData = "id_card_side=front&image="+img+"&detect_photo=true";

    //获取access_token
    QByteArray replyData;
    QString url = QString(baiduTokenUrl).arg(client_id).arg(secret_id);
    QMap<QString,QString> header;  //封装头部信息
    header.insert(QString("Content-Type"),QString("application/x-www-form-urlencoded"));
    QString accessToken;

    bool result =Http::post_sync(url,header,imgData,replyData);
    if (result)
    {
        QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
        accessToken = obj.value("access_token").toString();
        qDebug() << accessToken;
    }
    replyData.clear();
    QString imgurl = Baidu_CardUrl.arg(accessToken);
    result = Http :: post_sync(imgurl,header,imgData,replyData);
    if (result)
    {
        QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
        QJsonValue val = obj.value("words_result");

        QString ui_photo = obj.value("photo").toString();
        if(val.isObject())
        {
            QJsonValue address = val.toObject().value("住址");
            QString ui_address = address.toObject().value("words").toString();

            QJsonValue brith = val.toObject().value("出生");
            QString ui_brith = brith.toObject().value("words").toString();

            QJsonValue name = val.toObject().value("姓名");
            QString  ui_name = name.toObject().value("words").toString();

            QJsonValue  sex= val.toObject().value("性别");
            QString ui_sex = sex.toObject().value("words").toString();

            QJsonValue id = val.toObject().value("公民身份号码");
            QString ui_id = id.toObject().value("words").toString();
            //病患身份信息显示
            QPixmap photo_image;
            photo_image.loadFromData(QByteArray::fromBase64(ui_photo.toLocal8Bit()));
            ui->Photo_9->setPixmap(photo_image);
            ui->name_9->setText(ui_name);
            ui->sex_9->setText(ui_sex);
            ui->brith_data_9->setText(QString(ui_brith));
            ui->id_card_9->setText(ui_id);
            ui->address_9->setText(ui_address);

        }
     }
}
