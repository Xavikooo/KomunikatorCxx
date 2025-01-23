#ifndef SERVERMANAGER_H
#define SERVERMANAGER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
class ServerManager : public QObject
{
    Q_OBJECT
public:
    explicit ServerManager(ushort port = 4500, QObject *parent = nullptr);

private slots:
    void newClientConnectionRecived();
    void onClientDisconnected();

signals:
    void newClientConnected(QTcpSocket *client);
    void clientDisconnected(QTcpSocket *client);

private: //pola
    QTcpServer *_server;
    QList<QTcpSocket *> _clients;

private: //metody
    void setupServer(ushort port);
};

#endif // SERVERMANAGER_H
