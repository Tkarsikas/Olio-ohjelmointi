#ifndef TETSCLASS_H
#define TETSCLASS_H
#include <iostream>
using namespace std;
#include "imyinterface.h"

class TetsClass : public IMyinterface
{
public:
    TetsClass();

    // IMyinterface interface
public:
    void Method1(int);
    int Method2(int);
};

#endif // TETSCLASS_H
