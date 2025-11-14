#include "televisio.h"

double Televisio::getRuudunKoko() const
{
    return ruudunKoko;
}

void Televisio::setRuudunKoko(double newRuudunKoko)
{
    ruudunKoko = newRuudunKoko;
}

void Televisio::tulostaTiedot()
{

}

Televisio::Televisio(string n, double h, double r): Tuote(n,h) {
    ruudunKoko=r;
}
