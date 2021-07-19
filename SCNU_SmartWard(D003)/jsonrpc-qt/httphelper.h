#ifndef JSONRPC_HTTPHELPER_H
#define JSONRPC_HTTPHELPER_H

#include <QNetworkReply>
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include "transporthandler.h"

namespace JsonRPC {

class HttpHelper : public TransportHandler
{
    Q_OBJECT
public:
    explicit HttpHelper();
    ~HttpHelper();

protected:
    QUrl                    m_Url;
    QNetworkReply*          m_pReply        = nullptr;
    QNetworkAccessManager*  m_pNetManager   = nullptr;

public:
    QUrl url() const;
    void setUrl(const QUrl &url);
    void send(QByteArray data);

signals:
    // void received(QByteArray data);
    // void error(int code, const QString message);
    // void sent(long bytes);

private slots:
    void replyFinished(QNetworkReply *reply);
    void replyError(QNetworkReply::NetworkError code);
    void uploadProgress(qint64 bytesSent, qint64 bytesTotal);
};

} // namespace JsonRPC

#endif // JSONRPC_HTTPHELPER_H
