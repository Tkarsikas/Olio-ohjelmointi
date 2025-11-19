#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"
class Car
{
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;

public:
    Car();
    Car(string,string);

    void setWheel(int, string);
    void setEngine(int , double);
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);

    void printDetails();
};

#endif // CAR_H
