#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{
private:

protected:
    string name;
public:
    Chef(string);
    void makeSalad();
    void MakeSoup();
};

#endif // CHEF_H
