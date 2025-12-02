#include <iostream>
#include "tetsclass.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    TetsClass objTestClass;
    objTestClass.Method1(2);
    cout << objTestClass.Method2(2) << endl;


    //IMyInterface objextMyInterface;
    //antaa virheen koska Interface luokasta ei saa tehdä olioita

    return 0;
}
