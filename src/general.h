#ifndef GENERAL_H
#define GENERAL_H

#include <vector>
#include "player.h"

using namespace std;

template <typename T>
bool descending(T a, T b){return a > b;}

template <typename T> 
void getPointers(vector<T>& objectList, vector<T*>& pointerList)
{
    for (T& obj : objectList){pointerList.push_back(&obj);}
}

void updateWithByes(vector<int>& indexList, vector<Player*>& byePlayers, vector<Player*>& roundPlayers);

#endif