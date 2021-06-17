/**
  ******************************************************************************
  * @file    AliyunIoTClient.h
  * @author  Junxin Zheng
  * @version V1.0.0
  * @date    5-January-2019
  * @brief   ...
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef ALIYUNIOTCLIENT_H
#define ALIYUNIOTCLIENT_H

/* Includes ------------------------------------------------------------------*/
#include <QObject>
#include <QDebug>
#include <QtNetwork>
#include <QTimer>
#include <QSslConfiguration>
#include "Constant.h"
#include "DateUtil.h"
#include "JsonHandle.h"
#include "Authorization.h"

/* Macro Definition ----------------------------------------------------------*/
//#define ALIYUN_IOT_CLIENT_NO_DEBUG

/* Variables -----------------------------------------------------------------*/
/* Function Declaration ------------------------------------------------------*/
/* Class Declaration ---------------------------------------------------------*/
class AliyunIoTClient : public QNetworkAccessManager
{
    Q_OBJECT
public:
    explicit AliyunIoTClient(const QString &key,  const QString &secret,
                             const QString &host, QObject *parent = nullptr);

    void sendRequest(const QString &url, const QString &postData, qint32 timeout);

    QJsonObject getRequestHeader();
    QJsonObject getResponseData();
    QJsonObject getResponseHeader();
    qint32      getHttpStatusCode();
    QNetworkReply::NetworkError getReplyError();

private:
    void setSsl();
    void setHeader(const QString &postData, const QString &url);
    QString getSignature(const QString &url);

    const QString API_KEY;
    const QString API_SECRET;
    const QString API_HOST;

    QJsonObject ResponseData;
    QJsonObject ResponseHeader;
    qint32      HttpStatusCode = 0;
    QNetworkReply::NetworkError ReplyError = QNetworkReply::NoError;

    QTimer TimeoutTimer;
    QNetworkRequest NetworkRequest;
    QNetworkReply  *NetworkReply;

signals:
    void Responsed();

public slots:
    void ReplyFinished();
};

#endif // ALIYUNIOTCLIENT_H

/**************** (C) COPYRIGHT 2019 Junxin Zheng ******** END OF FILE ********/
