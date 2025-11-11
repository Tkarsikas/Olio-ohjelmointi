#include "car.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<Car> carList;

    carList.emplace_back("Toyota", "Avensis", 1995);
    carList.emplace_back("Volvo", "V70", 2014);
    carList.emplace_back("Ford", "Mondeo", 2003);

    carList[2].printData();

    for (int i=0; i<3; i++){
        carList[i].printData();
    }

    return 0;
}
