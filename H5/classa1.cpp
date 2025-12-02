#include "classa1.h"

ClassA1::ClassA1(ClassB) {}

ClassA1::~ClassA1()
{

}

string ClassA1::getBinfo()
{
    return objectB.getInfo();
}

void ClassA1::setBinfo(string value)
{
    objectB.setInfo(value);
}
