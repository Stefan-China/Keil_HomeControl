#ifndef HTTP_H
#define HTTP_H
#include <QString>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QEventLoop>
#include <QObject>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QDebug>


class Http:public QObject
{
    Q_OBJECT
public:

    Http();

    static bool post_sync(QString Url,QMap<QString,QString> header,QByteArray &requestData,QByteArray &replyData);
    static bool recieve(QString Url,QByteArray &replyData);
};

#endif // HTTP_H
