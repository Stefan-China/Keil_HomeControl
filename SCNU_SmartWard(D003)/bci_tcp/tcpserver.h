#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>
#include <QLinkedList>
#include "bci_tcp/sockethandler.h"

class TCPServer : public SocketServer
{
    Q_OBJECT
public:
    explicit TCPServer();
    ~TCPServer();

protected:
    QString m_strType = "TCP";

    bool m_isRuning;
    QMutex m_mutexContext;
    QLinkedList<IOContext*> m_listContext;
    QTcpServer* m_pServer;

public:
    bool isRunning() { return m_pServer && m_isRuning; }
    void onSetup(const long port);
    void onShutdown();
    void onSend(const char *data, long len);
    void onSend(IOContext* pContext, const char *data, long len);
    void onSend(QTcpSocket* pSocket, const char *data, long len);

protected:
    void addAConnection(IOContext* pContext);
    void closeAConnection(IOContext* pContext);
    void closeAllConnection();
    IOContext* findAConnection(QTcpSocket* pSocket);

public slots:
    void onNewConnection();
    void onReadyRead();
    void onStateChanged(QAbstractSocket::SocketState socketState);
    void onError(QAbstractSocket::SocketError);

};

#endif // TCPSERVER_H
