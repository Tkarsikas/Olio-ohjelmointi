#include "person.h"


Person::Person() {}

Person::~Person()
{
    //cout << "Person olio tuhottiin" << endl;

}

Person::Person(string n, string s, string p, string c)
{
    name=n;
    this->objectAddress.setStreet(s);
    this->objectAddress.setPostalCode(p);
    this->objectAddress.setCity(c);
}

void Person::printData()
{
    cout << "nimi on: "<< name << endl;
    cout << "Katuosoite: " << this->objectAddress.getStreet()<< endl;
    cout << "Postinumero: " << this->objectAddress.getPostalCode()<< endl;
    cout << "Kaupunki: " << this->objectAddress.getCity()<< endl;


}
