#include "car.h"

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setEngine(int h, double d)
{
    objEngine->setHorsepower(h);
    objEngine->setDisplacement(d);
}

void Car::setWheel(int s, string t)
{
    objWheel1->setSize(s);
    objWheel1->setType(t);
    objWheel2->setSize(s);
    objWheel2->setType(t);
    objWheel3->setSize(s);
    objWheel3->setType(t);
    objWheel4->setSize(s);
    objWheel4->setType(t);

}

Car::Car(string m, string b) {
    model=m;
    brand=b;
}
