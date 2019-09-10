#ifndef CONCRETERECEIVER_H
#define CONCRETERECEIVER_H
#include <QDebug>
#include "receiver.h"

class ConcreteReceiver1 : public Receiver
{
public:
    ConcreteReceiver1() {}
    void doSomething(){
        qDebug()<< "receive1 doing...";
    }
};


class ConcreteReceiver2 : public Receiver{
public:
    ConcreteReceiver2(){}
    void doSomething(){
        qDebug()<< "Receive2 doing...";
    }
};

#endif // CONCRETERECEIVER_H
