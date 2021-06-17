#include "httphelper.h"

using namespace JsonRPC;

HttpHelper::HttpHelper()
{
    m_pNetManager = new QNetworkAccessManager(this);
    connect(m_pNetManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
}

HttpHelper::~HttpHelper()
{
    if (m_pNetManager != nullptr) {
        delete m_pNetManager;
        m_pNetManager = nullptr;
    }
}

QUrl HttpHelper::url() const
{
    return m_Url;
}

void HttpHelper::setUrl(const QUrl &url)
{
    this->m_Url = url;
}

void HttpHelper::send(const QByteArray data)
{
    QNetworkRequest request(m_Url);
    request.setHeader(QNetworkRequest::ContentTypeHeader,
                      QString("application/json-rpc"));
    request.setRawHeader("Accept", "application/json-rpc");
    request.setRawHeader("Sign",m_sign);
    m_pReply = m_pNetManager->post(request, data);

    connect(m_pReply, SIGNAL(error(QNetworkReply::NetworkError)), this, SLOT(replyError(QNetworkReply::NetworkError)));
    connect(m_pReply, SIGNAL(uploadProgress(qint64, qint64)), this, SLOT(uploadProgress(qint64, qint64)));
}

void HttpHelper::replyFinished(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray response = reply->readAll();
        emit received(response);
    } else {
        emit error(reply->error(), reply->errorString());
    }
    reply->deleteLater();
}

void HttpHelper::replyError(QNetworkReply::NetworkError code)
{
    qDebug("error code %d", code);
    if (m_pReply) {
        emit error(m_pReply->error(), m_pReply->errorString());
    } else {
        emit error(code, "QNetworkReply::NetworkError");
    }
}

void HttpHelper::uploadProgress(qint64 bytesSent, qint64 bytesTotal)
{
    qDebug("HttpHelper::uploadProgress");
    emit sent(bytesSent);
}
