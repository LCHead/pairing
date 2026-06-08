// General methods
// Begun 08/06/26

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include "general.h"
#include "player.h"

using namespace std;

void updateWithByes(vector<int>& indexList, vector<Player*>& byePlayers, vector<Player*>& roundPlayers){
    // Use index to populate byePlayers for round. Round players removes players with byes

    sort(indexList.begin(), indexList.end(), descending<int>);      // sort index list in decending order

    // Update round and bye players
    for (int idx : indexList) {
        byePlayers.push_back(roundPlayers[idx]);
        roundPlayers.erase(roundPlayers.begin() + idx);
    }
}