#ifndef NETCLIENT_H
#define NETCLIENT_H

#include <QObject>
#include <QMutex>
#include <QByteArray>

class IOBuffer : public QByteArray
{
protected:
    QMutex mutex;
public:
    void write(char* buff)
    {
        write(buff, qstrlen(buff));
    }

    void write(char* buff, int len)
    {
        mutex.lock();
        append(buff, len);
        mutex.unlock();
    }

    void write(QByteArray buff)
    {
        mutex.lock();
        append(buff);
        mutex.unlock();
    }

    int read(char* buff, int len)
    {
        mutex.lock();
        int bytesRead = length() > len ? len : length();
        memcpy(buff, data(), bytesRead);
        remove(0, bytesRead);
        mutex.unlock();
        return bytesRead;
    }
};
Q_DECLARE_METATYPE(IOBuffer*)

class IOContext
{
public:
    void* m_pSocket;
    void* m_pParam;
    IOBuffer* m_pBuffer;

};
Q_DECLARE_METATYPE(IOContext*)

class SocketHandler : public QObject
{
    Q_OBJECT
protected:
    QString m_strType = "TCP";
public:
    bool virtual isConnected() = 0;
    void virtual onConnect(const QString host, const long port) = 0;
    void virtual onDisconnect() = 0;
    void virtual onSend(const char *data, long len) = 0;
    void virtual onSend(const char *data) = 0;
    void virtual onSend(QByteArray data) = 0;
    void virtual onSend(QString data) = 0;
signals:
    void connected();
    void disconnected();
    void received(IOBuffer* buff);
    void sent(long bytes);
    void error(int errorno, const QString errorstr);
};

class SocketServer : public QObject
{
    Q_OBJECT
protected:
    QString m_strType = "TCP";
public:
    bool virtual isRunning() = 0;
    void virtual onSetup(const long port) = 0;
    void virtual onShutdown() = 0;
signals:
    void clientConnected(IOContext* context);
    void clientDisconnected(IOContext* context);
    void dataReceived(IOContext* context);
    void error(int errorno, const QString errorstr);
};

#endif // NETCLIENT_H
