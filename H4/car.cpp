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
    objEngine=make_unique<Engine>();
    objEngine->setHorsepower(h);
    objEngine->setDisplacement(d);
}

void Car::setWheel(int s, string t)
{
    objWheel1=make_unique<Wheel>();
    objWheel2=make_unique<Wheel>();
    objWheel3=make_unique<Wheel>();
    objWheel4=make_unique<Wheel>();
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

void Car::printDetails()
{
    cout << "Auto: " << model << " " << brand << endl;
    cout << "Moottori: " << objEngine->getHorsepower() << " hp, " << objEngine->getDisplacement() << " L"<< endl;
    cout << "Rengas 1: " << objWheel1->getSize() << ", " << objWheel1->getType() << endl;
    cout << "Rengas 2: " << objWheel2->getSize() << ", " << objWheel2->getType() << endl;
    cout << "Rengas 3: " << objWheel3->getSize() << ", " << objWheel3->getType() << endl;
    cout << "Rengas 4: " << objWheel4->getSize() << ", " << objWheel4->getType() << endl;

}
