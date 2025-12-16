#include "car.h"



Car::Car(QString b, QString m, int y)
{
    brand=b;
    model=m;
    yearModel=y;
}

QString Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const QString &newBrand)
{
    brand = newBrand;
}

QString Car::getModel() const
{
    return model;
}

void Car::setModel(const QString &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}
