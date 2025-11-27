#include "car.h"
#include <iostream>

using namespace std;

int main()
{
    Car objCar("Toyota","Corolla");
    objCar.setEngine(150,2.0);
    objCar.setWheel(17,"Kesärengas");
    return 0;
}
