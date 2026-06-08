// Source file for round
// Begun 06/06/26

#include <vector>
#include <string>
#include "round.h"
#include "player.h"

using namespace std;

// Constructors and destructors
Round::Round(){
    m_roundid = 1;
    ++m_total_rounds;
}
Round::Round(int round){
    m_roundid = round;
    ++m_total_rounds;
}
Round::Round(const Round& round) : m_roundid(round.m_roundid){++m_total_rounds;}
Round::~Round(){--m_total_rounds;}

// Getter functions
int Round::roundID(){return m_roundid;}
int Round::getRoundCount(){return m_total_rounds;}

// Setter functions
void Round::setRoundID(int round){m_roundid = round;}

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