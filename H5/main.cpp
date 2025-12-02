#include "classa1.h"
#include "classa2.h"
#include "classb.h"

#include <iostream>

using namespace std;

int main()
{
        //muuttujan arvo ja osoite
    int x=5;
    cout << "muuttujan arvo: "<< x << endl;
    cout << "muuttujan osoite: " << &x << endl << endl;
        //pointterin osoittama arvo ja osoite
    int *pointerA = &x;
    cout << "pointterin osoittama osoite on: "<< pointerA << endl;
    cout << "pointterin osoittama muistipaikan arvo on: " << *pointerA << endl<< endl;
        //referenssi
    int &refA =x;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA osoittaman muistipaikan arvo: " << refA << endl<< endl;

    int b=6;
        //&refA=b; //ei mahdollinen
        //pointterin osoitteen muuttaminen mahdollista
    pointerA=&b;
    cout << "pointterin osoittama osoite on: "<< pointerA << endl;
    cout << "pointterin osoittama muistipaikan arvo on: " << *pointerA << endl<< endl;

        //olio argumenttina
    ClassB objB;
    objB.setInfo("olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo()<< endl;
    cout << "objA1: " << objA1.getBinfo() << endl << endl;

        //referenssi argumenttina
    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout << "objB: " << objB.getInfo()<<endl;
    cout << "objA2: " << objA2.getBinfo() << endl << endl;

    return 0;
}
