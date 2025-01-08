#ifndef SERVERCONNECTIONMANAGER_H
#define SERVERCONNECTIONMANAGER_H

#include <QObject>
#include <QTcpSocket>

class ServerConnectionManager : public QObject
{
    Q_OBJECT

public:
    // 获取单例实例
    static ServerConnectionManager& instance()
    {
        static ServerConnectionManager instance;
        return instance;
    }

    // 连接到服务器
    void connectToServer(const QString& host, quint16 port)
    {
        if (!socket->isOpen()) {
            socket->connectToHost(host, port);
        }
    }

    // 发送数据
    void sendData(const QByteArray& data)
    {
        if (socket->isOpen()) {
            socket->write(data);
        }
    }

    // 获取 socket 指针以便连接信号和槽
    QTcpSocket* getSocket() const { return socket; }

private:
    // 私有构造函数，防止外部实例化
    ServerConnectionManager(QObject* parent = nullptr)
        : QObject(parent), socket(new QTcpSocket(this))
    {
        // 连接信号和槽
        connect(socket, &QTcpSocket::connected, this, &ServerConnectionManager::onConnected);
        connect(socket, &QTcpSocket::disconnected, this, &ServerConnectionManager::onDisconnected);
        connect(socket, &QTcpSocket::readyRead, this, &ServerConnectionManager::onReadyRead);
        connect(socket, QOverload<QAbstractSocket::SocketError>::of(&QTcpSocket::errorOccurred),
                this, &ServerConnectionManager::onErrorOccurred);
    }

    // 禁止拷贝构造和赋值
    ServerConnectionManager(const ServerConnectionManager&) = delete;
    ServerConnectionManager& operator=(const ServerConnectionManager&) = delete;

signals:
    void connected();
    void disconnected();
    void dataReceived(const QByteArray& data);
    void errorOccurred(QAbstractSocket::SocketError socketError);

private slots:
    void onConnected() {
        emit connected();
    }

    void onDisconnected() {
        emit disconnected();
    }

    void onReadyRead() {
        QByteArray data = socket->readAll();
        emit dataReceived(data);
    }

    void onErrorOccurred(QAbstractSocket::SocketError socketError) {
        emit errorOccurred(socketError);
    }

private:
    QTcpSocket* socket;
};

#endif // SERVERCONNECTIONMANAGER_H
