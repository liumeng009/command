#ifndef INVOKER_H
#define INVOKER_H

#include "command.h"

class Invoker
{
private:
    Command * command;
public:
    Invoker() {
    }

    void setCommand(Command * command){
        this->command = command;
    }

    void doSomething(){
        command->execute();
    }
};

#endif // INVOKER_H
