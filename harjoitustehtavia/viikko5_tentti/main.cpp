#include "myclass.h"

#include <iostream>

using namespace std;
int summa(int*,int*);
int summa1(int&, int&);
int main()
{
    cout << "Hello World!" << endl;
    int a=5;
    int b=6;
    int *x=&a;
    int *y=&b;
    int result;
    result=summa(x, y);
    cout << result << endl;
    int &refa=a;
    int &refb=b;
    cout << summa1(refa, refb);
    cout << endl;

    MyClass *objPtr;
    objPtr=new MyClass;
    objPtr->memberFunction();
    cout << "testi" << endl;

    delete objPtr;
    cout << "testi" << endl;
    objPtr=nullptr;
    return 0;
}

int summa(int* a, int* b){
    return *a+*b;
}
int summa1(int& a, int& b){
    return a+b;
}
