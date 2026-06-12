#ifndef GENERAL_H
#define GENERAL_H

#include <vector>
#include "player.h"

template <typename T>
bool descending(T a, T b){return a > b;}

template <typename T> 
void getPointers(std::vector<T>& objectList, std::vector<T*>& pointerList)
{
    for (T& obj : objectList){pointerList.push_back(&obj);}
}

void updateWithByes(std::vector<int>& indexList, std::vector<Player*>& byePlayers, std::vector<Player*>& roundPlayers);

#endif