#include "chef.h"
#include "italianchef.h"

#include <iostream>

using namespace std;

int main()
{
        //Chef luokan olio
    Chef objChef("Gordon Ramsay");
    objChef.makeSalad();
    objChef.makeSoup();
    cout << endl;

        //ItalianChef luokan olio
    ItalianChef objitalianChef("Anthony Bourdain");
    objitalianChef.makeSalad();
    objitalianChef.makeSoup();
    objitalianChef.makePasta();
    cout << "name of the Italian Chef is " << objitalianChef.getName() << endl;

    return 0;
}
