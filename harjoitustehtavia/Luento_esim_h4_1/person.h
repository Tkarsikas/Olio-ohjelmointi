#ifndef PERSON_H
#define PERSON_H
#include "address.h"
#include <memory>

class Person
{
private:

    unique_ptr<Address> objAddress;
    string name;
public:
    Person(string);
    void tulostaTiedot();
    ~Person();
};

#endif // PERSON_H
