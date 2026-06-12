// Source file for round
// Begun 06/06/26

#include <algorithm>
#include <vector>
#include <string>
#include "round.h"
#include "player.h"

// Constructors and destructors
Round::Round(){
    ++m_total_rounds;
    m_roundid = m_total_rounds;
}
Round::Round(const Round& round) : m_roundid(round.m_roundid){++m_total_rounds;}
Round::~Round(){--m_total_rounds;}

// Getter functions
int Round::roundID(){return m_roundid;}
int Round::getRoundCount(){return m_total_rounds;}

// Setter functions
void Round::setRoundID(int round){m_roundid = round;}

void Round::updateTPNs(vector<Player*>& playerlist){
    // sort player list by rating (descending order)
    sort(playerlist.begin(),playerlist.end(),[](Player* a, Player* b){return a->rating() > b->rating();});
    
    // strongest player gets tpn=1, second strongest tpn=2 etc. 
    for (int i=0; i<static_cast<int>(playerlist.size()); i++){playerlist[i]->setTPN(i+1);}
}
void Round::updateTPNs(vector<Player>& playerlist){
    // sort player list by rating (descending order)
    sort(playerlist.begin(),playerlist.end(),[](Player a, Player b){return a.rating() > b.rating();});
    
    // strongest player gets tpn=1, second strongest tpn=2 etc. 
    for (int i=0; i<static_cast<int>(playerlist.size()); i++){playerlist[i].setTPN(i+1);}
}

// Game functions
void Round::playGame(Player* white,Player* black,const double score_white,const double score_black){
    
    // Update white 
    Player::round_details roundW, roundB;
    roundW.opponent = black;
    roundW.result = score_white;
    roundW.colour = 'W';
    white->addRound(roundW);
    white->updateScore(score_white);

    // Update black
    roundB.opponent = white;
    roundB.result = score_black;
    roundB.colour = 'B';
    black->addRound(roundB);
    black->updateScore(score_black);

}
void Round::playGame(Player* player, Player* bye, const double score){
    // update player with bye

    Player::round_details round;
    round.opponent = bye;
    round.result = score;
    round.colour = '\0';
    player->addRound(round);
    player->updateScore(score);
}

// Initialise count
int Round::m_total_rounds = 0; 