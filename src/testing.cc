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
    vector<Player> playerList;
    playerList.push_back(Player("Joe","Bloggs","M",1990,2000.0,"USA"));
    playerList.push_back(Player("Joe","Bloggs","M",1990,1900.0,"USA"));
    playerList.push_back(Player("Joe","Bloggs","M",1990,1500.0,"USA"));
    playerList.push_back(Player("Joe","Bloggs","M",1990,2100.0,"USA"));
    playerList.push_back(Player("Joe","Bloggs","M",1990,2200.0,"USA"));
    playerList.push_back(Player("Joe","Bloggs","M",1990,2100.0,"USA"));
    playerList.push_back(Player("Joe","Bloggs","M",1990,1600.0,"USA"));
    playerList.push_back(Player("Joe","Bloggs","M",1990,2500.0,"USA"));
    playerList.push_back(Player("Joe","Bloggs","M",1990,2000.0,"USA"));
    playerList.push_back(Player("Joe","Bloggs","M",1990,1950.0,"USA"));

    cout << playerList.size() << endl;

    // Find total number of players
    cout << "Number of players = " << Player::getPlayerCount() << endl;

    // Testing rounds
    Round round1 = Round();
    Round round2 = Round(2);
    Round round3 = Round(1);

    cout << "Number of rounds = " << Round::getRoundCount() << endl;
}