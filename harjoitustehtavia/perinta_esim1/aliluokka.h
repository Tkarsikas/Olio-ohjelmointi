#ifndef ALILUOKKA_H
#define ALILUOKKA_H

#include "kantaluokka.h"

class Aliluokka : public Kantaluokka
{
private:

public:
    Aliluokka();
    void asetaNumerot(int, int, int);
    void tulostaNumerot();
};

#endif // ALILUOKKA_H
