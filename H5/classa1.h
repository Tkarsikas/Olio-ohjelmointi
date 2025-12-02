#ifndef CLASSA1_H
#define CLASSA1_H

#include "classb.h"


class ClassA1
{
private:
    ClassB objectB;
public:
    ClassA1(ClassB);
    ~ClassA1();

    string getBinfo();
    void setBinfo(string);
};

#endif // CLASSA1_H
