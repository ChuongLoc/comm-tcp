#ifndef SOCKETTCP_H
#define SOCKETTCP_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>

class SocketTcp : public QObject
{
    Q_OBJECT
public:
    explicit SocketTcp(QObject *parent = nullptr);

    void Connect();


signals:

public slots:

private:
    QTcpSocket *socket;

};

#endif // SOCKETTCP_H
