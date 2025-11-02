#include "Functions.h"



void calcSum (int a, int b){
    cout << "lukujen summa on: " << a+b << endl;
}

void calcDiv (int a, int b){
    if(b!=0){
        cout << fixed << setprecision(2) << "lukujen osamaara on: " << (float)a/b << endl;
    }else{
        cout << "Virhe: ei voi jakaa nollalla" << endl;
    }
}

int retSum(int a, int b){
    return a+b;

}

float retDiv(int a, int b){
    if(b!=0){
      return (float)a/b;
    }else{
        throw runtime_error("jakaja ei saa olla nolla!");
    }
}
