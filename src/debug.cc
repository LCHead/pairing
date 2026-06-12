// Debug methods
// Begun 08/06/26

// TODO: Need to sort out the struct defined inside player as annoying to access

#include <iostream>
#include <vector>
#include "player.h"

void printPlayerNames(const std::vector<Player*>& playerList){
    for (Player* p : playerList){std::cout << p->firstname() << ", " << p->surname() << std::endl;}
}

void printPlayerRoundResult(Player* player, const int round_number){
    Player* opponent = player->m_round[round_number-1].opponent;

    std::cout << player->firstname() << ", " << player->surname() << std::endl;
    std::cout << "round " << round_number << std::endl;
    std::cout << "played : " << opponent->firstname() << ", " << opponent->surname() << std::endl;
    std::cout << "result : " << player->m_round[round_number-1].result << std::endl;
    std::cout << "colour : " << player->m_round[round_number-1].colour << std::endl;
}

void printPlayerScore(Player* player){
    std::cout << player->firstname() << ", " << player->surname() << ", score = " <<  player->score() << std::endl;
}