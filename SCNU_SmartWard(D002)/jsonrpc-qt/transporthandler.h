#ifndef JSONRPC_TRANSPORTHANDLER_H
#define JSONRPC_TRANSPORTHANDLER_H

#include <QObject>
#include <QByteArray>

namespace JsonRPC {

class TransportHandler : public QObject
{
    Q_OBJECT
protected:
    QString m_strType = "HTTP";

public:
    QByteArray m_sign;
    void virtual send(QByteArray data) = 0;

signals:
    void received(QByteArray data);
    void error(int code, const QString message);
    void sent(long bytes);
};

} // namespace JsonRPC

#endif // JSONRPC_TRANSPORTHANDLER_H
