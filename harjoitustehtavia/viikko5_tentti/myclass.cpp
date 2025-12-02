#include "myclass.h"

MyClass::MyClass() {
       cout<<"Executing constructor..."<<endl;
}

MyClass::~MyClass()
{
   cout<<"Executing destructor..."<<endl;
}

void MyClass::memberFunction()
{
    cout << "running" << endl;
}
