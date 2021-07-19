#ifndef JSONRPC_JRPCCLIENT_H
#define JSONRPC_JRPCCLIENT_H

#include <QObject>
#include <QByteArray>
#include <QTextCodec>
#include "transporthandler.h"
#include "rapidjson/document.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/writer.h"

using namespace rapidjson;

namespace JsonRPC {

class JRPCClient: public QObject
{
    Q_OBJECT
public:
    JRPCClient(QObject *parent = nullptr, TransportHandler* transport = nullptr);

//protected:
    TransportHandler* m_pTransport;

public:
    void setTransport(TransportHandler* transport);
    bool call(QString json);
    bool call(QString method, Value &params, int id);

signals:
    void resultReady(Value &result, int id);
    void resultError(int code, QString message, Value &data, int id);
    void error(int code, QString message);
    void sent(long bytes);

public slots:
    void onResponseReady(QByteArray data);
    void onError(int code, QString message);
    void onSent(long bytes);
};

} // namespace JsonRPC

#endif // JSONRPC_JRPCCLIENT_H
