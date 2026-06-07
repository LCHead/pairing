// Source file for round
// Begun 06/06/26

#include <vector>
#include <string>
#include "round.h"

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

// Initialise count
int Round::m_total_rounds = 0; 