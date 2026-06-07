// Source file for players
// Begun 06/06/26

#include <vector>
#include <string>
#include "player.h"

using namespace std;

// Constructors
Player::Player(){
    //TODO
}
Player::Player(string firstname, string surname, string gender, int birthyear, double rating){
    m_id = 0;                      // TODO
    m_firstname = firstname;
    m_surname = surname;
    m_gender = gender;
    m_birthyear = birthyear;
    m_rating = rating;

    // Initialise to 0 or empty
    m_score = 0.;
    m_score_by_round = {};
    m_colours_by_round = {};
    m_bye_by_round = {};
}

// Getter functions
int Player::id(){return m_id;}
string Player::firstname(){return m_firstname;}
string Player::surname(){return m_surname;}
string Player::gender(){return m_gender;}
int Player::birthyear(){return m_birthyear;}
double Player::rating(){return m_rating;}
double Player::score(){return m_score;}

// Setter functions
void Player::setFirstname(string firstname){m_firstname = firstname;}
void Player::setSurname(string surname){m_surname = surname;}
void Player::setGender(string gender){m_gender = gender;}
void Player::setBirthyear(int birthyear){m_birthyear = birthyear;}
void Player::setRating(double rating){m_rating = rating;}
void Player::setScore(double score){m_score = score;}

// Initialise count
int Player::m_total_players = 0; 