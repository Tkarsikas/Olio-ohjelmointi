#include "car.h"
using namespace std;
Car::Car() {
    //cout << "olio luotu" << endl;
}
Car::~Car(){
    //cout << "olio poistettu" << endl;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()
{
    cout << brand << model << yearModel <<  endl;

}

string Car::getBrand() const
{
    return brand;
}

string Car::getModel() const
{
    return model;
}

int Car::getYearModel() const
{
    return yearModel;
}
