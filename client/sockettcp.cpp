#include "sockettcp.h"

SocketTcp::SocketTcp(QObject *parent) : QObject(parent)
{

}

void SocketTcp::Connect(){

    socket = new QTcpSocket(this);

    socket->connectToHost("127.0.0.1",1234);

    if(socket->waitForConnected(3000)){
        qDebug() << "Connected!";

        //send
        socket->write("hello server\r\n");

        socket->waitForBytesWritten(1000);

        //read
        socket->waitForReadyRead(3000) << socket->bytesAvailable();

        qDebug() << "Reading:";

        qDebug() << socket->readAll();

        // closed
        socket->close();

    }
    else{
        qDebug() << "Not Connected!";
    }
}
