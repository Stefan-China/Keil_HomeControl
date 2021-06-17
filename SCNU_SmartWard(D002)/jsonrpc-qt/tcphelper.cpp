#include "tcphelper.h"

using namespace JsonRPC;

TcpHelper::TcpHelper()
{
    m_strType = "TCP";
    m_pSocket = nullptr;
}

TcpHelper::~TcpHelper()
{
    disconnect();
    if (m_pSocket) {
        m_pSocket->deleteLater();
        m_pSocket = nullptr;
    }
}

bool TcpHelper::setSocket(QTcpSocket *socket)
{
    if (m_pSocket != nullptr) onDisconnected();

    if (socket && (socket->state() == QAbstractSocket::ConnectedState)) {
        socket->setParent(this);
        m_pSocket = socket;
        connect(m_pSocket, SIGNAL(disconnected()), this, SLOT(onDisconnected()));
        connect(m_pSocket, SIGNAL(readyRead()), this, SLOT(onReceived()));
        connect(m_pSocket, SIGNAL(bytesWritten(qint64)), this, SLOT(onSent(qint64)));
        connect(m_pSocket, SIGNAL(error(QAbstractSocket::SocketError)),
                this, SLOT(onError(QAbstractSocket::SocketError)));

        return true;
    } else {
        return false;
    }
}

bool TcpHelper::connectToHost(const QString host, const long port)
{
    // qDebug("onConnect in thread: 0x%x", (uint)QThread::currentThreadId());
    if (m_pSocket != nullptr) onDisconnected();

    m_pSocket = new QTcpSocket();
    connect(m_pSocket, SIGNAL(connected()), this, SLOT(onConnected()));
    connect(m_pSocket, SIGNAL(disconnected()), this, SLOT(onDisconnected()));
    connect(m_pSocket, SIGNAL(readyRead()), this, SLOT(onReceived()));
    connect(m_pSocket, SIGNAL(bytesWritten(qint64)), this, SLOT(onSent(qint64)));
    connect(m_pSocket, SIGNAL(error(QAbstractSocket::SocketError)),
            this, SLOT(onError(QAbstractSocket::SocketError)));

    try {
        m_pSocket->connectToHost(host, port);
    } catch (QAbstractSocket::SocketError) {
        emit error(m_pSocket->error(), m_pSocket->errorString());
        return false;
    }
    return true;
}

void TcpHelper::disconnect()
{
    // qDebug("onDisconnect in thread: 0x%x", (uint)QThread::currentThreadId());
    if (m_pSocket && (m_pSocket->state() == QAbstractSocket::ConnectedState)) {
        m_pSocket->abort();
        m_pSocket->disconnectFromHost();
        m_pSocket->close();
    }
}

void TcpHelper::send(const QByteArray data)
{
    m_pSocket->write(data);
}

void TcpHelper::onConnected()
{
    m_pSocket->setSocketOption(QAbstractSocket::LowDelayOption, 1);
    emit connected();
}

void TcpHelper::onDisconnected()
{
    // clear socket data
    m_pSocket->disconnect();
    m_pSocket->deleteLater();
    m_pSocket = nullptr;

    emit disconnected();
}

void TcpHelper::onReceived()
{
    m_Buffer.append(m_pSocket->readAll());
    emit received(m_Buffer);
}

void TcpHelper::onSent(qint64 bytes)
{
    // qDebug("%lld bytes have been sent", bytes);
    emit sent(bytes);
}

void TcpHelper::onError(QAbstractSocket::SocketError)
{
    // qDebug("error %d : %s", m_pSocket->error(), m_pSocket->errorString().data());
    emit error(m_pSocket->error(), m_pSocket->errorString());
}
