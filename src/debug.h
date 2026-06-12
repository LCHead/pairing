// Header file for debug methods
// Begun 08/06/26

#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>
#include <vector>
#include "player.h"

void printPlayerNames(const std::vector<Player*>& playerList);
void printPlayerRoundResult(Player* player, const int round_number);
void printPlayerScore(Player* player);

#endif

