#ifndef IMYINTERFACE_H
#define IMYINTERFACE_H

class IMyinterface
{
public:
    IMyinterface();
    virtual void Method1(int)=0;
    virtual int Method2(int)=0;
};

#endif // IMYINTERFACE_H
