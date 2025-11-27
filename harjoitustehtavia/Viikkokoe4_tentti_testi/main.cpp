#include "classa.h"
#include "classb.h"
#include "storage.h"
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    //Storage room;

    ClassA objA;
    ClassB objB;
    unique_ptr<ClassB> objB1 =make_unique <ClassB>();
    objA.print1(objB);
    ClassB &refB=objB;
    objA.print2(refB);
    objA.print3();

    return 0;
}
