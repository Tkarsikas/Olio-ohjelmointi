#include "aliluokka.h"
#include <iostream>


Aliluokka::Aliluokka() {}

void Aliluokka::asetaNumerot(int pub, int pro, int pri)
{
    publicNumber=pub;
    protectedNumber=pro;
    //private numberiin ei pääse käsiksi
    //luodaan sille setteri kantaluokassa
    setPrivateNumber(pri);
}

void Aliluokka::tulostaNumerot()
{
    std::cout<<"public: " << publicNumber << "\nprotected: " << protectedNumber << std::endl;
    //private numeroa ei voi tulostaa suoraan
    //luodaan sille getter
    std::cout << "private: " << getPrivateNumber() << std::endl;
}
