#include "aliluokka.h"
#include "kantaluokka.h"
#include <iostream>

using namespace std;

int main()
{
    Aliluokka objAliluokka;
    objAliluokka.asetaNumerot(2,4,8);
    objAliluokka.tulostaNumerot();

    Kantaluokka objKantaluokka;
    //objKantaluokka pääsee käsiksi
    //vain public tyyppisiin ominaisuuksiin
    return 0;
}
