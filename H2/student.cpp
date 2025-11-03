#include "student.h"

Student::Student() {}

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

float Student::getAverage() const
{
    return average;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}


