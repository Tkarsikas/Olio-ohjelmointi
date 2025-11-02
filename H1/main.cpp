#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int sumResult=0;
    float divResult=0;

    cout << "Anna ensimmainen luku"<< endl;
    cin >> a;
    cout << "Anna toinen luku" << endl;
    cin >> b;

    calcSum(a,b);
    calcDiv(a,b);

    sumResult = retSum(a,b);
    cout << "lukujen " << a << " ja " << b << " summa on " << sumResult << endl;

    try {
    divResult = retDiv(a,b);
        cout  << "Lukujen " << a << " ja " << b << " osamaara on " << divResult << endl;
    }catch(runtime_error& e){
        cout<<"Error: "<< e.what() << endl;
    }

    return 0;
}
