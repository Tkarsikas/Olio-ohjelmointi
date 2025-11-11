#include "car.h"

Car::Car() {}

Car::Car(string b, string m, int yM)
{
    brand=b;
    model=m;
    yearModel=yM;
}

void Car::printData(){
    cout << "Merkki: " << brand << " Malli: " << model << " Vuosimalli: " << yearModel << endl;
    cout << "----------------" << endl;

}
