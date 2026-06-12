// General methods
// Begun 08/06/26

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include "general.h"
#include "player.h"

void updateWithByes(std::vector<int>& indexList, std::vector<Player*>& byePlayers, std::vector<Player*>& roundPlayers){
    // Use index to populate byePlayers for round. Round players removes players with byes

    std::sort(indexList.begin(), indexList.end(), descending<int>);      // sort index list in decending order

    // Update round and bye players
    for (int idx : indexList) {
        byePlayers.push_back(roundPlayers[idx]);
        roundPlayers.erase(roundPlayers.begin() + idx);
    }
}