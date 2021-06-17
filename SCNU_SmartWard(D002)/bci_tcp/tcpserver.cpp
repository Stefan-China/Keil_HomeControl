#include "bci_tcp/tcpserver.h"

TCPServer::TCPServer()
{
    m_pServer = 0;
    m_isRuning = false;
}

TCPServer::~TCPServer()
{
    onShutdown();
}

void TCPServer::onSetup(long port)
{
    if (m_pServer == 0)  {
        m_pServer = new QTcpServer(this);
        connect(m_pServer, SIGNAL(newConnection()), this, SLOT(onNewConnection()));
    }

    qDebug("TCPServer listenning on port %ld", port);
    m_pServer->listen(QHostAddress::Any, port);
    m_isRuning = true;
}

void TCPServer::onShutdown()
{
    if (m_pServer != 0)  {
        closeAllConnection();
        delete m_pServer;
        m_pServer = 0;
    }
    m_isRuning = false;
}

void TCPServer::onNewConnection()
{
    QTcpSocket* clientSocket = m_pServer->nextPendingConnection();
    qDebug("Client %s connected", clientSocket->peerAddress().toString().toLocal8Bit().data());
    connect(clientSocket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
    connect(clientSocket, SIGNAL(stateChanged(QAbstractSocket::SocketState)),
            this, SLOT(onStateChanged(QAbstractSocket::SocketState)));
    connect(clientSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(onError(QAbstractSocket::SocketError)));
    IOContext* pContext = new IOContext();
    pContext->m_pSocket = clientSocket;
    pContext->m_pBuffer = new IOBuffer();
    m_listContext.push_back(pContext);
    emit clientConnected(pContext);
}

void TCPServer::onReadyRead()
{
    QTcpSocket* sender = static_cast<QTcpSocket*>(QObject::sender());
    QByteArray data = sender->readAll();
    IOContext* pContext = findAConnection(sender);
    pContext->m_pBuffer->write(data);
    emit dataReceived(pContext);
}

void TCPServer::onStateChanged(QAbstractSocket::SocketState socketState)
{
    if (socketState == QAbstractSocket::UnconnectedState)
    {
        QTcpSocket* sender = static_cast<QTcpSocket*>(QObject::sender());
        qDebug("Client %s disconnected", sender->peerAddress().toString().toLocal8Bit().data());
        IOContext* pContext = findAConnection(sender);
        if (pContext) {
            m_listContext.removeOne(pContext);
            emit clientDisconnected(pContext);
            // delete pContext; // delete by handler
        }
    }
}

void TCPServer::onSend(const char *data, long len)
{
    QLinkedList<IOContext*>::iterator i;
    for (i = m_listContext.begin(); i != m_listContext.end(); ++i)
    {
        onSend(*i, data, len);
    }
}

void TCPServer::onSend(IOContext* pContext, const char *data, long len)
{
    QTcpSocket* pSocket = (QTcpSocket*)(pContext->m_pSocket);
    if (pSocket) {
        pSocket->write(data, len);
    }
}

void TCPServer::onSend(QTcpSocket* pSocket, const char *data, long len)
{
    IOContext* pContext = findAConnection(pSocket);
    if (pContext) {
        onSend(pContext, data, len);
    }
}

void TCPServer::onError(QAbstractSocket::SocketError)
{
    QTcpSocket* pSocket = (QTcpSocket*)sender();
    emit error(pSocket->error(), pSocket->errorString());
}

void TCPServer::addAConnection(IOContext* pContext)
{
    m_mutexContext.lock();
    m_listContext.push_back(pContext);
    m_mutexContext.unlock();
}

void TCPServer::closeAConnection(IOContext* pContext)
{
    QTcpSocket* pSocket = (QTcpSocket*)(pContext->m_pSocket);
    if (pSocket) {
        pSocket->abort();
        pSocket->disconnectFromHost();
        pSocket->close();
    }

    m_mutexContext.lock();
    m_listContext.removeOne(pContext);
    m_mutexContext.unlock();

    delete pContext;
    pContext = 0;
}

void TCPServer::closeAllConnection()
{
    QLinkedList<IOContext*>::iterator i;
    for (i = m_listContext.begin(); i != m_listContext.end(); ++i)
    {
        closeAConnection(*i);
    }
}

IOContext* TCPServer::findAConnection(QTcpSocket* pSocket)
{
    IOContext* pContext = 0;
    QLinkedList<IOContext*>::iterator i;
    for (i = m_listContext.begin(); i != m_listContext.end(); ++i)
    {
        if ((*i)->m_pSocket == pSocket) {
            pContext = *i;
        }
    }
    return pContext;
}
