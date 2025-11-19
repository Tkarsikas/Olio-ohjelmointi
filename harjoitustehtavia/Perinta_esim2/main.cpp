#include <iostream>
#include <vector>
#include <bits/unique_ptr.h>
#include "televisio.h"
#include "pesukone.h"
using namespace std;

int main()
{
    Tuote objTuote ("Sohva", 999.99);
    Televisio objTelevisio ("TV", 850, 55);
    Pesukone objPesukone("Samsung", 550, 1400, 10);
    objTuote.tulostaTiedot();
    objTelevisio.tulostaTiedot();
    objPesukone.tulostaTiedot();


    vector<Televisio> tvLista;
    tvLista.emplace_back("LG TV", 999, 65);
    tvLista.emplace_back("LG TV", 9992, 75);
    tvLista.emplace_back("LG TV", 999, 50);

    cout<< "televisio lista" << endl;
    for(Televisio tv: tvLista){
        tv.tulostaTiedot();
    }

    vector<Tuote*> tuoteLista;
    tuoteLista.push_back(&objTuote);
    tuoteLista.push_back(&objPesukone);
    tuoteLista.push_back(&objTelevisio);

    cout<<"\ntuotelista:" << endl;
    for(auto TL: tuoteLista){
        TL->tulostaTiedot();
    }
    cout << endl;
    //auto sanan ansiosta kääntäjä tunnistaa olion luokan

    //smart pointer käyttö

    vector<unique_ptr<Tuote>> tuoteVektori;
    tuoteVektori.emplace_back(make_unique<Tuote>("tuoli", 54));
    tuoteVektori.emplace_back(make_unique<Televisio>("Sony", 54, 75));
    tuoteVektori.emplace_back(make_unique<Pesukone>("Samsung", 850, 1000, 8));

    cout << "smart pointer esimerkki" << endl;
    for(auto& x : tuoteVektori ){
        x->tulostaTiedot();
    }


    return 0;
}
