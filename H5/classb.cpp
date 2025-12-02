#include "classb.h"

string ClassB::getInfo() const
{
    return info;
}

void ClassB::setInfo(const string &newInfo)
{
    info = newInfo;
}

ClassB::ClassB() {}

ClassB::~ClassB()
{
    //cout << "classB tuhottiin" << endl;
}
