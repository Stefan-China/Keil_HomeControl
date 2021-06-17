/**
  ******************************************************************************
  * @file    AliyunIoTClient.cpp
  * @author  Junxin Zheng
  * @version V1.0.0
  * @date    5-January-2019
  * @brief   ...
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "AliyunIoTClient.h"

/* Variables -----------------------------------------------------------------*/
/* Function ------------------------------------------------------------------*/
/*******************************************************************************
  * @brief  Construct function.
  * @param  QString key    - The AppKey of Aliyun API Platform.
  *         QString secret - The AppSecret of Aliyun API Platform.
  *         QString host   - The host of Aliyun API Platform.
  *         QString parent - Pointer of parent object
  * @retval None.
  *****************************************************************************/
AliyunIoTClient::AliyunIoTClient(const QString &key, const QString &secret, const QString &host, QObject *parent) :
                                 QNetworkAccessManager(parent), API_KEY(key), API_SECRET(secret), API_HOST(host)
{
    // [Default] Configure the SSL of Network.
    setSsl();

    // Signal-Slot Connection.
    connect(&TimeoutTimer, &QTimer::timeout, this, &AliyunIoTClient::ReplyFinished);

#ifndef ALIYUN_IOT_CLIENT_NO_DEBUG
    //qDebug() << endl << "This is a Aliyun IoT Client!";
#endif
}


/*******************************************************************************
  * @brief  Post data to Aliyun IoT Platform.
  *         - Configure the timer <TimeoutTimer>.
  *         - Update the request header.
  *         - Set the Url for sending data.
  *         - Connect the Signal-Slot <AliyunIoTClient::finished - AliyunIoTClient::ReplyFinished>.
  * @param  QString url      - Destination URL for sending data.
  *         QString postData - Data need to send (Json file is better).
  *         qint32  timeout  - Timeout period.
  * @retval None.
  *****************************************************************************/
void AliyunIoTClient::sendRequest(const QString &url, const QString &postData, qint32 timeout)
{
    // HTTP Timeout Setting
    TimeoutTimer.setInterval(timeout);
    TimeoutTimer.setSingleShot(true);

    // HTTP Header Setting
    setHeader(postData, url);

    // HTTP URL Setting
    NetworkRequest.setUrl(QUrl(API_HOST + url));

    // Post data.
    NetworkReply = post(NetworkRequest, postData.toUtf8());
    connect(this, &AliyunIoTClient::finished, this, &AliyunIoTClient::ReplyFinished);

    // Start the timer.
    TimeoutTimer.start();
}


/*******************************************************************************
  * @brief  Processing after sending is complete.
  *         - Close the timer <TimeoutTimer>.
  *         - Disconnect the Signal-Slot <AliyunIoTClient::finished - AliyunIoTClient::ReplyFinished>.
  *         - Update the responsed data and http status.
  *         - Free the memory of object <NetworkReply>.
  *         - Emit a signal <Responsed>.
  * @param  None.
  * @retval None.
  *****************************************************************************/
void AliyunIoTClient::ReplyFinished()
{
    // Check the timer status.
    if(TimeoutTimer.isActive())
    {
        // Close the timer and disconnect the Signal-Slot.
        TimeoutTimer.stop();
        disconnect(this, &AliyunIoTClient::finished, this, &AliyunIoTClient::ReplyFinished);

        // Update the response information.
        ResponseData = QJsonDocument::fromJson(NetworkReply->readAll()).object();
        ResponseHeader = {};
        foreach(auto i, NetworkReply->rawHeaderList())
        {
            ResponseHeader.insert(i, QJsonValue(QString(NetworkReply->rawHeader(i))));
        }
        HttpStatusCode = NetworkReply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        ReplyError     = NetworkReply->error();
    }
    else
    {
        // Disconnect the Signal-Slot.
        disconnect(this, &AliyunIoTClient::finished, this, &AliyunIoTClient::ReplyFinished);
        NetworkReply->abort();

        // Update the response information.
        ResponseData   = {};
        ResponseHeader = {};
        HttpStatusCode = 0;
        ReplyError     = QNetworkReply::TimeoutError;
    }

    // Remember to free the momery of QNetworkReply.
    NetworkReply->close();
    NetworkReply->deleteLater();

#ifndef ALIYUN_IOT_CLIENT_NO_DEBUG
    //qDebug() << endl << "----- Response Header -----";
    //printFormattedJson(getResponseHeader());
    //qDebug() << endl << "------ Response Data ------";
    //printFormattedJson(getResponseData());
    //qDebug() << "Status Code: "        << getHttpStatusCode();
    //qDebug() << "QNetworkReplyError: " << getReplyError();
#endif

    // Send the Signal.
    emit Responsed();
}


/*******************************************************************************
  * @brief  Configure the header of request - postData and url is necessary.
  * @param  QString postData - Data need to send (Json file is better).
  *         QString url      - Destination URL for sending data.
  * @retval None.
  *****************************************************************************/
void AliyunIoTClient::setHeader(const QString &postData, const QString &url)
{
    // HTTP Header Setting.
    NetworkRequest.setRawHeader(X_CA_TIMESTAMP,           getTimestamp().toUtf8());
    NetworkRequest.setRawHeader(X_CA_NONCE,               getUuid().toUtf8());
    NetworkRequest.setRawHeader(X_CA_SIGNATURE_HEADERS,   X_CA_SIGNTURE_STRING);
    NetworkRequest.setRawHeader(HTTP_HEADER_ACCEPT,       CONTENT_TYPE_JSON);
    NetworkRequest.setRawHeader(HTTP_HEADER_CONTENT_MD5,  getHash(QCryptographicHash::Md5, postData).toBase64());
    NetworkRequest.setRawHeader(X_CA_KEY,                 API_KEY.toUtf8());
    NetworkRequest.setRawHeader(X_CA_SIGNATURE,           getSignature(url).toUtf8());
    NetworkRequest.setRawHeader(HTTP_HEADER_CONTENT_TYPE, CONTENT_TYPE_JSON);

#ifndef ALIYUN_IOT_CLIENT_NO_DEBUG
    //qDebug() << endl << "--------- Header ----------";
    //printFormattedJson(getRequestHeader());
#endif
}


/*******************************************************************************
  * @brief  Configure the HTTP SSL.
  * @param  None.
  * @retval None.
  *****************************************************************************/
void AliyunIoTClient::setSsl()
{
    // HTTP SSL Configuration.
    QSslConfiguration SslConfig;
    SslConfig.setPeerVerifyMode(QSslSocket::VerifyNone);
    SslConfig.setProtocol(QSsl::TlsV1SslV3);
    NetworkRequest.setSslConfiguration(SslConfig);
}


/*******************************************************************************
  * @brief  Get the Signature of this connect.
  *     @attention Signature formats as follows:
  *     ---------------------------------------------
  *     <HTTP Method>
  *     <HTTP Header - Accept>
  *     <MD5-encrypted Content>
  *     <HTTP Header - Content type>
  *     <HTTP Header of Date>
  *     X_CA_KEY:<X_CA_KEY>
  *     X_CA_NONCE:<X_CA_NONCE>
  *     X_CA_TIMESTAMP:<X_CA_TIMESTAMP>
  *     <API URL>
  *     ---------------------------------------------
  * @param  QString url - Destination URL for sending data.
  * @retval QString Signature.
  *****************************************************************************/
QString AliyunIoTClient::getSignature(const QString &url)
{
    QString StringSign;
    StringSign.append(METHOD_POST).append("\n");
    StringSign.append(NetworkRequest.rawHeader(HTTP_HEADER_ACCEPT)).append("\n");
    StringSign.append(NetworkRequest.rawHeader(HTTP_HEADER_CONTENT_MD5)).append("\n");
    // Here should use <HTTP_HEADER_CONTENT_TYPE>, but I don't know why the result is NULL.
    StringSign.append(NetworkRequest.rawHeader(HTTP_HEADER_ACCEPT)).append("\n");
    StringSign.append(NetworkRequest.rawHeader(HTTP_HEADER_DATE)).append("\n");
    StringSign.append(X_CA_KEY).append(":").append(NetworkRequest.rawHeader(X_CA_KEY)).append("\n");
    StringSign.append(X_CA_NONCE).append(":").append(NetworkRequest.rawHeader(X_CA_NONCE)).append("\n");
    StringSign.append(X_CA_TIMESTAMP).append(":").append(NetworkRequest.rawHeader(X_CA_TIMESTAMP)).append("\n");
    StringSign.append(url);

#ifndef ALIYUN_IOT_CLIENT_NO_DEBUG
    //qDebug() << endl << "-------- Signature --------";
    //qDebug() << qPrintable(StringSign);
#endif

    return getHash(QCryptographicHash::Sha256, StringSign, API_SECRET).toBase64();
}


/*******************************************************************************
  * @brief  Get request header.
  * @param  None.
  * @retval QJsonObject.
  *****************************************************************************/
QJsonObject AliyunIoTClient::getRequestHeader()
{
    QJsonObject jsonObject;
    foreach(auto i, NetworkRequest.rawHeaderList())
    {
        jsonObject.insert(i, QJsonValue(QString(NetworkRequest.rawHeader(i))));
    }
    return jsonObject;
}


/*******************************************************************************
  * @brief  Get response data.
  * @param  None.
  * @retval QJsonObject.
  *****************************************************************************/
QJsonObject AliyunIoTClient::getResponseData()
{
    return ResponseData;
}


/*******************************************************************************
  * @brief  Get response header.
  * @param  None.
  * @retval QJsonObject.
  *****************************************************************************/
QJsonObject AliyunIoTClient::getResponseHeader()
{
    return ResponseHeader;
}


/*******************************************************************************
  * @brief  Get HTTP Status Code.
  * @param  None.
  * @retval qint32.
  *****************************************************************************/
qint32 AliyunIoTClient::getHttpStatusCode()
{
    return HttpStatusCode;
}


/*******************************************************************************
  * @brief  Get Reply Error.
  * @param  None.
  * @retval QNetworkReply::NetworkError.
  *****************************************************************************/
QNetworkReply::NetworkError AliyunIoTClient::getReplyError()
{
    return ReplyError;
}

/**************** (C) COPYRIGHT 2019 Junxin Zheng ******** END OF FILE ********/
