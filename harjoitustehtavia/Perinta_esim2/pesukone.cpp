#include "pesukone.h"

Pesukone::Pesukone(string n, double h, int lN, int mP):Tuote(n, h) {
    linkousNopeus=lN;
    maxPyykki=mP;
}

void Pesukone::tulostaTiedot()
{
    cout << "Tuote:" << getNimi() << " hinta:" << getHinta();
    cout << " linkousnopeus=" << linkousNopeus << " maxpyykki:"<< maxPyykki<< endl;
}
