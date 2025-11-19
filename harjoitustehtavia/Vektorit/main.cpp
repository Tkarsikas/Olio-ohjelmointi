#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int taulukko[5] ={1,2,3,4,5};
    //ei voi lisätä taulukkoon uusia alkioita
    //sen sijaan vektoriin voidaan lisätä alkioita
    vector<int> vektori = {1,2,3,4,5};
    vektori.push_back(6);
    for(int luku : vektori){
        cout << luku << " ";
    }
    //kysellään lukuja kunnes käyttäjä antaa luvun 99
    //jolloin luvut tulostetaan
    int a = 0;


    cout << endl;

    vector<int> vektoritesti;
    while(a!=99){
        cout << "anna kokonaisuluku, lopeta syottamalla 99" << endl;
    cin >> a;
        vektoritesti.push_back(a);
    };
    cout << "syotit luvut: " << endl;
    for(int luku : vektoritesti){
        cout << luku << ", ";
    }
    cout << endl;
    return 0;
}
