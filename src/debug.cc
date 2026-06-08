// Debug methods
// Begun 08/06/26

#include <iostream>
#include <vector>
#include "player.h"

using namespace std;

void printPlayerNames(const vector<Player*>& playerList){
    for (Player* p : playerList){cout << p->firstname() << ", " << p->surname() << endl;}
}