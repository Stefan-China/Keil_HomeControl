#ifndef JSONRPC_TCPHELPER_H
#define JSONRPC_TCPHELPER_H

#include <QTcpSocket>
#include "transporthandler.h"

namespace JsonRPC {

class TcpHelper : public TransportHandler
{
    Q_OBJECT
public:
    explicit TcpHelper();
    ~TcpHelper();

protected:
    QByteArray m_Buffer;
    QTcpSocket* m_pSocket;

public:
    bool setSocket(QTcpSocket* m_pSocket);
    bool connectToHost(const QString host, const long port);
    void disconnect();
    void send(QByteArray data);

signals:
    void connected();
    void disconnected();
    // void received(QByteArray data);
    // void sent(long bytes);
    // void error(int code, const QString message);

private slots:
    void onConnected();
    void onDisconnected();
    void onReceived();
    void onSent(qint64 bytes);
    void onError(QAbstractSocket::SocketError);
};

} // namespace JsonRPC

#endif // JSONRPC_TCPHELPER_H
