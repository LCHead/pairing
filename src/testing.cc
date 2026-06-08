// Testing classes
// Begun 06/06/26

#include <iostream>
#include <vector>
#include <string>
#include "player.h"
#include "round.h"
#include "general.h"
#include "debug.h"

using namespace std;

int main(){

    // Testing players
    vector<Player> playerList;
    playerList.push_back(Player("Joe1","Bloggs1","M",1990,2000.0,"USA"));
    playerList.push_back(Player("Joe2","Bloggs2","M",1990,1900.0,"USA"));
    playerList.push_back(Player("Joe3","Bloggs3","M",1990,1500.0,"USA"));
    playerList.push_back(Player("Joe4","Bloggs4","M",1990,2100.0,"USA"));
    playerList.push_back(Player("Joe5","Bloggs5","M",1990,2200.0,"USA"));
    playerList.push_back(Player("Joe6","Bloggs6","M",1990,2100.0,"USA"));
    playerList.push_back(Player("Joe7","Bloggs7","M",1990,1600.0,"USA"));
    playerList.push_back(Player("Joe8","Bloggs8","M",1990,2500.0,"USA"));
    playerList.push_back(Player("Joe9","Bloggs9","M",1990,2000.0,"USA"));
    playerList.push_back(Player("Joe10","Bloggs10","M",1990,1950.0,"USA"));

    cout << playerList.size() << endl;

    // Find total number of players
    cout << "Number of players = " << Player::getPlayerCount() << endl;

    // Testing rounds
    Round round1 = Round();
    vector<int> indexByes = {0,1,8,9};                      // index for players with byes
    vector<Player*> roundPlayers, byePlayers;               // roundPlayers = players in round.  byePlayers = players with byes
    getPointers(playerList,roundPlayers);                   // roundPlayers has pointers to ALL players here
    updateWithByes(indexByes, byePlayers, roundPlayers);    // use index to populate byePlayers for round. Round players removes players with byes
    
    // Example games
    round1.playGame(roundPlayers[0],roundPlayers[1],1.0,0.0);
    round1.playGame(roundPlayers[2],roundPlayers[3],1.0,0.0);
    round1.playGame(roundPlayers[4],roundPlayers[5],0.5,0.5);

    printPlayerRoundResult(roundPlayers[0],1);
    printPlayerRoundResult(roundPlayers[1],1);
    printPlayerRoundResult(roundPlayers[2],1);
    printPlayerRoundResult(roundPlayers[3],1);
    printPlayerRoundResult(roundPlayers[4],1);
    printPlayerRoundResult(roundPlayers[5],1);

    Round round2 = Round(2);
    Round round3 = Round(1);

    cout << "Number of rounds = " << Round::getRoundCount() << endl;
}