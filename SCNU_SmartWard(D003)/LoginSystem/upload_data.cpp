#include"upload_data.h"

QNetworkReply *Upload(QString url, QByteArray array)
{
    // 构造请求
    QNetworkRequest request;
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    request.setUrl(url);

    QNetworkAccessManager* manager = new QNetworkAccessManager;
    QNetworkReply* reply = manager->post(request, array);

    // QNetworkAccessManager的所有的HTTP相关操作均为异步，所以要通过事件循环来判断响应和状态码
    QEventLoop loop;
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();
    return reply;
}


//把接收到的文件转为json格式
QJsonDocument processReplyAsJson(QNetworkReply *reply)
{
    QByteArray bytes = reply->readAll();
    QJsonParseError jsonError;
    QJsonDocument document = QJsonDocument::fromJson(bytes, &jsonError);

    if (document.isNull() && (jsonError.error != QJsonParseError::NoError)) {
        qDebug() << QStringLiteral("Fail to parse JSON");
    }

    int statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    qDebug() << "Status code" << QVariant(statusCode).toString();//HTTP状态码

    return document;
}

QNetworkReply *Upload(QString url, QHttpMultiPart* multipart)
{
    // 构造请求
    QNetworkRequest request;
    //request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    //request.setRawHeader("Content-Type","multipart/form-data;boundary=,");
    request.setUrl(url);

    QNetworkAccessManager* manager = new QNetworkAccessManager;
    QNetworkReply* reply = manager->post(request, multipart);

    // QNetworkAccessManager的所有的HTTP相关操作均为异步，所以要通过事件循环来判断响应和状态码
    QEventLoop loop;
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();
    return reply;
    //reply->deleteLater();
}

QNetworkReply *DownLoadPicture(QString url)
{
    // 构造请求
    QNetworkRequest request;
    request.setUrl(url);

    QNetworkAccessManager* manager = new QNetworkAccessManager;
    QNetworkReply* reply = manager->get(request);

    // QNetworkAccessManager的所有的HTTP相关操作均为异步，所以要通过事件循环来判断响应和状态码
    QEventLoop loop;
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

    return reply;
}














