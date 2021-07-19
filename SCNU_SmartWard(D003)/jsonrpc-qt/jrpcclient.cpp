#include "jrpcclient.h"

//ps
#include<QDebug>
using namespace std;
using namespace JsonRPC;

JRPCClient::JRPCClient(QObject *parent, TransportHandler* transport) :
    QObject(parent),
    m_pTransport(transport)
{
    connect(m_pTransport, SIGNAL(received(QByteArray)), this, SLOT(onResponseReady(QByteArray)));
    connect(m_pTransport, SIGNAL(error(int, const QString)), this, SLOT(onError(int, const QString)));
    connect(m_pTransport, SIGNAL(sent(long)), this, SLOT(onSent(long)));
}

void JRPCClient::setTransport(TransportHandler* transport)
{
    m_pTransport = transport;
}

bool JRPCClient::call(QString json)
{
    //qDebug()<<"JRPCClient::call QString json="<<json; //ps

    //qDebug("%s", json.toLatin1().data());  //输出如下
    //{"jsonrpc":"2.0","method":"getsettings","params":{},"id":2}

    Document doc;
    if (doc.Parse(json.toUtf8()).HasParseError()) {
        qDebug("JsonRPC request format error");
        return false;
    }

    if (!m_pTransport) {
        qDebug("JsonRPC transport error");
        return false;
    }
    QTextCodec* gbk = QTextCodec::codecForName("UTF-8"); //GB18030  UTF-8  其中GB18030是默认的
    QByteArray gb_bytes= gbk->fromUnicode(json);  //需要解析的中文
    m_pTransport->send(gb_bytes);     //ps 虚函数与多态 执行子类的send()
    return true;
}

bool JRPCClient::call(QString method, Value &params, int id)
{
    Document doc;
    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    Value str_value(rapidjson::kStringType);

    doc.SetObject();
    Document::AllocatorType& allocator = doc.GetAllocator();
    doc.AddMember("jsonrpc", "2.0", allocator);

    //ps这里QString一步转char* 可能有点问题
    //str_value.SetString(method.toStdString().c_str(), method.length()); //ps原本

    //ps这种方法转也行
    //QByteArray ba;
    //ba.append(method);     //也可以 ba = s.toLatin1();
    //const char* p = ba.data();
    //str_value.SetString(p, method.length());

    //分成两步没有问题
    std::string str=method.toStdString();
    str_value.SetString(str.c_str(), method.length()); //

    doc.AddMember("method", str_value, allocator);
    doc.AddMember("params", params, allocator);
    doc.AddMember("id", id, allocator);
    doc.Accept(writer);
    QString json = QString::fromStdString(buffer.GetString());

    return call(json);
}

void JRPCClient::onResponseReady(QByteArray data)
{
    //qDebug("%s", QString(data).toUtf8().data());
    Document doc;
    if (doc.Parse(data).HasParseError()) {
        qDebug("JsonRPC response format error");
        return;
    }
    if (doc.HasMember("result")) {
        Value result(kObjectType);
        result = doc["result"];
        emit resultReady(result, doc["id"].GetInt());
    } else if (doc.HasMember("error") && doc["error"].IsObject()) {
        Value& error = doc["error"];
        if (error.HasMember("code") && error["code"].IsNumber()) {
            int code = error["code"].GetInt();
            QString message = error["message"].GetString();
            Value data(kObjectType);
            data.SetObject();
            if (error.HasMember("data")) {
                data = error["data"];
            }
            int id = error["id"].GetInt();
            emit resultError(code, message, data, id);
        }
    }
}

void JRPCClient::onError(int code, QString message)
{
    emit error(code, message);
}

void JRPCClient::onSent(long bytes)
{
    emit sent(bytes);
}
