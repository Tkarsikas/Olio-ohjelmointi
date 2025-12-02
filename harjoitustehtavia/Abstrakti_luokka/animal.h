#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal
{
private:
    string color;
public:
    Animal();
    ~Animal();
    string getColor() const;
    void setColor(const string &newColor);
    void virtual sound()=0;
};

#endif // ANIMAL_H
