#include "person.h"

Person::Person(string n) {
    name=n;
    objAddress=make_unique<Address>("uusikatue3", "90100", "Oulu");
}

void Person::tulostaTiedot()
{
    cout << "nimi=" << name << endl;
    this->objAddress->tulostaOsoite();
}

Person::~Person()
{
    cout << "Person olio tuhottiin" << endl;

}
