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

void Car::printDetails()
{
    cout << "Auto : " << model << " " << brand << endl;
    cout << "Moottori : " << this->objEngine.getHorsepower() << " hp, " << this->objEngine.getDisplacement() << " L" << endl;
    cout << "Rengas 1 :" << this->objWheel1.getSize() << " tuumaa, " << this->objWheel1.getType() << endl;
    cout << "Rengas 2 :" << this->objWheel2.getSize() << " tuumaa, " << this->objWheel2.getType() << endl;
    cout << "Rengas 3 :" << this->objWheel3.getSize() << " tuumaa, " << this->objWheel3.getType() << endl;
    cout << "Rengas 4 :" << this->objWheel4.getSize() << " tuumaa, " << this->objWheel4.getType() << endl;

}

Car::Car() {}

Car::Car(string m, string b) {
    model=m;
    brand=b;
}


void Car::setWheel(int s, const string t)
{
    this->objWheel1.setSize(s);
    this->objWheel1.setType(t);
    this->objWheel2.setSize(s);
    this->objWheel2.setType(t);
    this->objWheel3.setSize(s);
    this->objWheel3.setType(t);
    this->objWheel4.setSize(s);
    this->objWheel4.setType(t);
}

void Car::setEngine(int hp, double d)
{
    this->objEngine.setHorsepower(hp);
    this->objEngine.setDisplacement(d);
}
