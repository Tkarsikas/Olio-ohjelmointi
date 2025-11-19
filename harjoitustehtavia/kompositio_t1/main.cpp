#include "person.h"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    Person objectPerson("Teppo testi", "uusikatu 2", "90100", "Oulu");
    objectPerson.printData();

    //vektori
    vector<Person>personList;

    personList.emplace_back("Teppo", "Uusikatu 3", "90200", "Oulu");
    personList.emplace_back("Tulppu", "Uusikatu 7", "90400", "Oulu");
    personList.emplace_back("Torspo", "Uusikatu 5", "90500", "Joukonkyla");
    cout << "*************"<<endl;
    cout << "lista"<<endl;
    for(Person x : personList){
        x.printData();
    }
    return 0;
}
