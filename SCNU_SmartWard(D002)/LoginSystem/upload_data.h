#ifndef UPLOAD_DATA_H
#define UPLOAD_DATA_H

#include <QString>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QHttpPart>
#include <QHttpMultiPart>
#include <QUrl>
#include<QFile>
#include <QEventLoop>
#include<QJsonParseError>
#include<QJsonDocument>
#include<QJsonObject>


QNetworkReply *Upload(QString url,QByteArray array);
QJsonDocument processReplyAsJson(QNetworkReply *reply);
QNetworkReply *Upload(QString url, QHttpMultiPart *multipart);

//下载头像
QNetworkReply *DownLoadPicture(QString url);

#endif // UPLOAD_DATA_H

