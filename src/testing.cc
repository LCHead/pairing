// Testing classes
// Begun 06/06/26

#include <iostream>
#include <vector>
#include <string>
#include "player.h"
#include "round.h"
#include "general.h"
#include "debug.h"

int main(){

    // Testing players
    std::vector<Player> playerList;
    Player playerBye = Player::createBye();

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

    std::cout << playerList.size() << std::endl;

    // Find total number of players
    std::cout << "Number of players = " << Player::getPlayerCount() << std::endl;

    // Testing rounds
    Round round1 = Round();
    round1.updateTPNs(playerList);                               // update tpns by player ratings
    
    std::vector<int> indexByes = {0,1,8,9};                      // index for players with byes
    std::vector<Player*> roundPlayers, byePlayers;               // roundPlayers = players in round.  byePlayers = players with byes
    getPointers(playerList,roundPlayers);                        // roundPlayers has pointers to ALL players here
    updateWithByes(indexByes, byePlayers, roundPlayers);         // use index to populate byePlayers for round. Round players removes players with byes

    // Example games
    round1.playGame(roundPlayers[0],roundPlayers[1],1.0,0.0);
    round1.playGame(roundPlayers[2],roundPlayers[3],1.0,0.0);
    round1.playGame(roundPlayers[4],roundPlayers[5],0.5,0.5);
    for (Player* p : byePlayers){round1.playGame(p,&playerBye,0.5);}    // update all players with byes

    // Closing round 1
    round1.orderPlayers(playerList);                             // order players by score and tpn


    // printPlayerRoundResult(byePlayers[0],1);
    // printPlayerRoundResult(roundPlayers[0],1);
    // printPlayerRoundResult(roundPlayers[1],1);
    // printPlayerRoundResult(roundPlayers[2],1);
    // printPlayerRoundResult(roundPlayers[3],1);
    // printPlayerRoundResult(roundPlayers[4],1);
    // printPlayerRoundResult(roundPlayers[5],1);

    Round round2 = Round();

    std::cout << "Number of rounds = " << Round::getRoundCount() << std::endl;
}