#include "car.h"

#include <iostream>

using namespace std;

int main()
{
    Car objCar("Toyota","Corolla");

    objCar.setEngine(150, 2.0);
    objCar.setWheel(17,"kesarengas");
    objCar.printDetails();

    cout << "**********************" << endl;

    Car objCar1("Volvo", "V70");
    objCar1.setEngine(250, 2.4);
    objCar1.setWheel(19, "Talvirengas");

    objCar1.printDetails();
    return 0;
}
