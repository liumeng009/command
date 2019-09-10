#ifndef RECEIVER_H
#define RECEIVER_H

class Receiver
{
public:
    virtual ~Receiver() {}
    virtual void doSomething() = 0;
};

#endif // RECEIVER_H
