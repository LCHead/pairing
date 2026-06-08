// Debug methods
// Begun 08/06/26

// TODO: Need to sort out the struct defined inside player as annoying to access

#include <iostream>
#include <vector>
#include "player.h"

using namespace std;

void printPlayerNames(const vector<Player*>& playerList){
    for (Player* p : playerList){cout << p->firstname() << ", " << p->surname() << endl;}
}

void printPlayerRoundResult(Player* p, const int round_number){
    Player* opponent = p->m_round[round_number-1].opponent;

    cout << p->firstname() << ", " << p->surname() << endl;
    cout << "round " << round_number << endl;
    cout << "played : " << opponent->firstname() << ", " << opponent->surname() << endl;
    cout << "result : " << p->m_round[round_number-1].result << endl;
    cout << "colour : " << p->m_round[round_number-1].colour << endl;

}