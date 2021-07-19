#include "baidu_image.h"
#include "ui_baidu_image.h"


//const QString  baiduTokenUrl = "https://aip.baidubce.com/oauth/2.0/token?grant_type=client_credentials&client_id=%1&client_secret=%2&";
//const char* client_id = "qdLTj8EMR4xdC4aDSiXdpouG";
//const char* secret_id = "i5hKuGb63GCP4baqP8G6TL0oEO1InOn9";
//const QString Baidu_CardUrl = "https://aip.baidubce.com/rest/2.0/ocr/v1/idcard?access_token=%1";
//QString ui_id,ui_address,ui_brith,ui_name,ui_sex, ui_photo;

//构造函数
Baidu_Image::Baidu_Image(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Baidu_Image)
{
         ui->setupUi(this);

//         connect(ui->action, &QAction::triggered, this, &Baidu_Image::openImageSlot);
//         connect(ui->action_2, &QAction::triggered, this, &Baidu_Image::openImageSlot_2);
}
//析构函数
Baidu_Image::~Baidu_Image()
{
    delete ui;
}
////选择医护图片
//void Baidu_Image::openImageSlot()
//{
//    imgPath = QFileDialog::getOpenFileName(this,"选择图片",QCoreApplication::applicationFilePath());

//    if(imgPath.isEmpty())
//    {
//        QMessageBox::warning(this,"tip","Don't select nurse ID card,Please select!");//如未选择，提示选择图片
//    }

//    QPixmap pix(imgPath);
//    ui->label->setPixmap(pix);
//}
//选择患者图片
//void Baidu_Image::openImageSlot_2()
//{

//    imgPath_2 = QFileDialog::getOpenFileName(this,"选择图片",QCoreApplication::applicationFilePath());
//    if(imgPath_2.isEmpty())
//    {
//        QMessageBox::warning(this,"tip","Don't select patient ID card,Please select!");
//    }

//    QPixmap pix(imgPath_2);
//    ui->label_2->setPixmap(pix);
//}

//身份验证
//void Baidu_Image::on_pushButton_clicked()
//{

//   QByteArray img = Myimage::imageToBase64(imgPath);
//   QByteArray img_2 = Myimage::imageToBase64(imgPath_2);
//   QByteArray imgData = "id_card_side=front&image="+img;
//   QByteArray imgData_2 = "id_card_side=front&image="+img_2+"&detect_photo=true";
//   //获取access_token
//   QByteArray replyData;
//   QString url = QString(baiduTokenUrl).arg(client_id).arg(secret_id);
//   QMap<QString,QString> header;  //封装头部信息
//   header.insert(QString("Content-Type"),QString("application/x-www-form-urlencoded"));
//   QString accessToken;

//   bool result =Http::post_sync(url,header,imgData,replyData);
//   if (result)
//   {
//       QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
//       accessToken = obj.value("access_token").toString();
//       qDebug() << accessToken;
//   }

//   replyData.clear();
//   QString imgurl = Baidu_CardUrl.arg(accessToken);
//   result = Http :: post_sync(imgurl,header,imgData,replyData);
//   if (result)
//   {

//       QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
//       QJsonValue val = obj.value("words_result");
//         qDebug()<<val;
//       if(val.isObject())
//       {
//           QJsonValue first = val.toObject().value("姓名");
//           QString id = first.toObject().value("words").toString();
//           if(id == "蔡旭刚")
//           {
//               replyData.clear();
//               result = Http :: post_sync(imgurl,header,imgData_2,replyData);
//               if (result)
//               {
//                   QJsonObject obj = QJsonDocument:: fromJson(replyData).object();
//                   QJsonValue val = obj.value("words_result");

////                   ui_photo = obj.value("photo").toString();
////                   if(val.isObject())
////                   {
////                       QJsonValue address = val.toObject().value("住址");

////                       ui_address = address.toObject().value("words").toString();
////                       QJsonValue brith = val.toObject().value("出生");

////                       ui_brith = brith.toObject().value("words").toString();
////                       QJsonValue name = val.toObject().value("姓名");

////                       ui_name = name.toObject().value("words").toString();
////                       QJsonValue  sex= val.toObject().value("性别");

////                       ui_sex = sex.toObject().value("words").toString();
////                       QJsonValue id = val.toObject().value("公民身份号码");

////                       ui_id = id.toObject().value("words").toString();
////                       this->close();
////                       qDebug()<<"成功识别";
////                       MainObject *mainObject=new MainObject(this);
////                       mainObject->setInit();
////                       LOADQSS(GlobalSpace::STYLE_QSS_FILE_PATH);

////                       return ;
////                   }
//                }

//           }

//           return ;
//       }
//    }
//}
