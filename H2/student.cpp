#include "student.h"

Student::Student() {}

Student::Student(string n, int nSN, double nA) {
    name=n;
    studentNumber=nSN;
    average=nA;
}

void Student::printStudentData(){
    cout << " opiskelijan tiedot: \n nimi:" << name << "\n opiskelijan numero: " <<  studentNumber << "\n keskiarvo:" <<  average << endl;
}


Student::~Student()
{

}

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

int Student::getStudentNumber() const
{
    return studentNumber;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

double Student::getAverage() const
{
    return average;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}


