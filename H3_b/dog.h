#ifndef DOG_H
#define DOG_H
#include <iostream>
#include "animal.h"
using namespace std;

class Dog : public Animal
{

public:
    Dog();
    ~Dog();
    void callOut() override;
};

#endif // DOG_H
