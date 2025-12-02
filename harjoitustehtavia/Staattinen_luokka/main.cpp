#include "mystaticclass.h"

#include <iostream>

using namespace std;

int main()
{
    double number;
    double result;
    cout << "anna desimaaliluku" << endl;
    cin >> number;
    result=MyStaticClass::doubleMe(number);
    cout << "tuplattuna luku on " << result << endl;
    //ei voida luoda koska luokan creator=delete
    //MyStaticClass objclass;
    return 0;
}
