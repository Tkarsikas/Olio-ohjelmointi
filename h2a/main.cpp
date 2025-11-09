#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{

    Car objCar;
    objCar.setBrand("Toyota");
    objCar.setModel("Avensis");
    objCar.setYearModel(2001);
    objCar.printData();
    //cout << objCar->getBrand() << objCar->getModel() << objCar->getYearModel() <<  endl;

    Rectangle *objRectangle;
    objRectangle = new Rectangle();
    objRectangle->setHeight(5.5);
    objRectangle->setWidth(4.2);
    cout << "Suorakulmion ala = " <<objRectangle->getArea() << " ja piiri = " << objRectangle->getCircum()<< endl;
    delete objRectangle;
    objRectangle=nullptr;

    Rectangle objRectangle2(48.6, 473.5);
    cout << "Suorakulmion2 ala = " <<objRectangle2.getArea() << " ja piiri = " << objRectangle2.getCircum()<< endl;

    Rectangle *objRectangle3=new Rectangle(23.1, 26);
    cout << "Suorakulmion3 ala = " <<objRectangle3->getArea() << " ja piiri = " << objRectangle3->getCircum()<< endl;
    delete objRectangle3;
    objRectangle3=nullptr;


    unique_ptr<Student> studentobj = make_unique<Student>("Jarkko", 1, 8.4);
    cout << "nimi: " << studentobj->getName() << endl;
    cout << "opiskelijanumero: " << studentobj->getStudentNumber() << endl;
    cout << "keskiarvo: " << studentobj->getAverage() << endl;

    //studentobj->printStudentData();
    return 0;
}
