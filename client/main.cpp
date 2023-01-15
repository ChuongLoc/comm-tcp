#include <QCoreApplication>
#include "sockettcp.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SocketTcp cTest;

    cTest.Connect();

    return a.exec();
}
