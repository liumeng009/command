#include <QCoreApplication>

#include "command.h"
#include "concretecommand.h"
#include "receiver.h"
#include "concretereceiver.h"
#include "invoker.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Receiver * cr1;
    cr1 = new ConcreteReceiver1();

    Command * cmd;
    cmd = new ConcreteCommand1(cr1);

    Invoker * invoker = new Invoker();
    invoker->setCommand(cmd);
    invoker->doSomething();

    return a.exec();
}
