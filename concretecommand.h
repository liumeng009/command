#ifndef CONCRETECOMMAND_H
#define CONCRETECOMMAND_H
#include <QDebug>
#include "command.h"
#include "receiver.h"

class ConcreteCommand1 : public Command{
private:
    Receiver * receiver;
public:
    ConcreteCommand1(Receiver * receiver){
        this->receiver = receiver;
    }

    void execute(){
        qDebug()<<"command1 runing...";
        receiver->doSomething();
    }
};

class ConcreteCommand2 : public Command{
private:
    Receiver * receiver;
public:
    ConcreteCommand2(Receiver * receiver){
        this->receiver = receiver;
    }

    void execute(){
        qDebug()<<"command2 runing...";
        receiver->doSomething();
    }
};

#endif // CONCRETECOMMAND_H
