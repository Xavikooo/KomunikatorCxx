#include "ServerManager.h"

ServerManager::ServerManager(QObject *parent)
    : QObject{parent}
{
    setupServer(port);
}

void ServerManager::newClientConnectionRecived()
{
    auto client = _server->nextPendingConnection();
    _clients << client;
    auto id = _clients.length();
    client->setProperty("id", id);
    connect(client, &QTcpSocket::disconnected, this, &ServerManager::onClientDisconnected);
    emit newClientConnected(client);
}

void ServerManager::onClientDisconnected()
{
    auto client = qobject_cast<QTcpSocket *>(sender());
    int id = client->property("id").toInt();
    _clients.removeOne(client);
    emit clientDisconnected(client);
}

void ServerManager::setupServer(ushort port)
{
    _server = new QTcpServer(this);
    connect(_server, &QTcpServer::newConnection, this, &ServerManager::newClientConnectionRecived);
    _server->listen(QHostAddress::Any, port);
}
