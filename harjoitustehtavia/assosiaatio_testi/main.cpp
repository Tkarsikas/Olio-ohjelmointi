#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Player {
private:
    string name;
public:
    Player(const string& name) : name(name) {
        cout << "Player " << name << " luotiin" << endl;
    }

    ~Player() {
        cout << "Player " << name << " tuhottiin" << endl;
    }

    string getName() const {
        return name;
    }
};

class Team {
private:
    string name;
    vector<shared_ptr<Player>> players;  // Aggregaatio: jaettu omistajuus
public:
    Team(const string& name) : name(name) {
        cout << "Team " << name << " luotiin" << endl;
    }

    ~Team() {
        cout << "Team " << name << " tuhottiin" << endl;
        // shared_ptr:t hoitavat muistinhallinnan automaattisesti
    }

    void addPlayer(shared_ptr<Player> player) {
        players.push_back(player);
    }

    void printPlayers() const {
        cout << "Team " << name << " pelaajat:" << endl;
        for (const auto& p : players) {
            cout << "- " << p->getName() << endl;
        }
    }
};

int main() {
    // Luodaan pelaajat shared_ptr:llä
    auto player1 = make_shared<Player>("Alice");
    auto player2 = make_shared<Player>("Bob");
    auto player3 = make_shared<Player>("Charlie");

    {  // Sisempi scope tiimeille
        Team team1("Red Tigers");
        Team team2("Blue Sharks");

        // Alice ja Bob kuuluvat molempiin tiimeihin (jaettu omistajuus!)
        team1.addPlayer(player1);
        team1.addPlayer(player2);

        team2.addPlayer(player1);  // Alice pelaa myös toisessa tiimissä
        team2.addPlayer(player3);

        cout << "\n";
        team1.printPlayers();
        cout << "\n";
        team2.printPlayers();
        cout << "\n";
    }  // Molemmat tiimit tuhoutuvat, mutta pelaajat jatkavat!

    cout << "\nPelaajat ovat viela olemassa:" << endl;
    cout << player1->getName() << ", " << player2->getName()
         << " ja " << player3->getName() << endl;

    return 0;
    // Vasta nyt pelaajat tuhoutuvat automaattisesti
}
