// Testing classes
// Begun 06/06/26

#include <iostream>
#include <vector>
#include <string>
#include "player.h"
#include "round.h"

using namespace std;

int main(){

    // Testing players
    Player joe1 = Player("Joe","Bloggs","M",1990,2000.0,"USA");
    Player joe2 = Player("Joe","Bloggs","M",1990,2000.0,"USA");
    Player joe3 = Player("Joe","Bloggs","M",1990,2000.0,"USA");
    Player joe4 = Player("Joe","Bloggs","M",1990,2000.0,"USA");

    // Find total number of players
    cout << "Number of players = " << Player::getPlayerCount() << endl;

    // Testing rounds
    Round round1 = Round();
    Round round2 = Round(2);
    Round round3 = Round(1);

    cout << "Number of rounds = " << Round::getRoundCount() << endl;
}