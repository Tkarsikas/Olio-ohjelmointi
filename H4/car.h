#ifndef CAR_H
#define CAR_H
#include <memory>
#include "engine.h"
#include "wheel.h"
using namespace std;


class Car
{
private:
    unique_ptr<Engine> objEngine;
    unique_ptr<Wheel> objWheel1;
    unique_ptr<Wheel> objWheel2;
    unique_ptr<Wheel> objWheel3;
    unique_ptr<Wheel> objWheel4;
    string model;
    string brand;


public:
    Car(string, string);
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);

    void setEngine(int, double);
    void setWheel(int, string);
};

#endif // CAR_H
