#ifndef CLIENTMANAGERR_H
#define CLIENTMANAGERR_H

#include <QObject>
#include <QTcpSocket>

class ClientManager : public QObject
{
    Q_OBJECT
public:
    explicit ClientManager(QHostAddress ip = QHostAddress::LocalHost,ushort port = 4500, QObject *parent = nullptr);
    void connectToServer();
    void sendMessage(QString message);

signals:

    void connected();
    void disconnected();
    void dataReceived(QByteArray data);
private slots:
    void readyRead();

private:
    QTcpSocket *_socket;
    QHostAddress _ip;
    ushort _port;
};


#endif // CLIENTMANAGERR_H
