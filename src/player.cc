// Source file for players
// Begun 06/06/26

#include <vector>
#include <string>
#include "player.h"

using namespace std;

// Constructors and destructors
Player::Player(string firstname, string surname, string gender, int birthyear, double rating, string fed){

    m_id = 0;                      // TODO
    m_firstname = firstname;
    m_surname = surname;
    m_gender = gender;
    m_birthyear = birthyear;
    m_rating = rating;
    m_fed = fed;

    // Initialise to 0 or empty
    m_score = 0.;
    m_round = {};

    ++m_total_players;
}
Player::Player(const Player& player) : m_firstname(player.m_firstname), m_surname(player.m_surname), m_gender(player.m_gender), m_birthyear(player.m_birthyear), m_rating(player.m_rating), m_fed(player.m_fed) {++m_total_players;}
Player::~Player(){--m_total_players;}

// Getter functions
int Player::id(){return m_id;}
string Player::firstname(){return m_firstname;}
string Player::surname(){return m_surname;}
string Player::gender(){return m_gender;}
int Player::birthyear(){return m_birthyear;}
double Player::rating(){return m_rating;}
double Player::score(){return m_score;}
string Player::fed(){return m_fed;}
int Player::getPlayerCount(){return m_total_players;}

// Setter functions
void Player::setFirstname(string firstname){m_firstname = firstname;}
void Player::setSurname(string surname){m_surname = surname;}
void Player::setGender(string gender){m_gender = gender;}
void Player::setBirthyear(int birthyear){m_birthyear = birthyear;}
void Player::setRating(double rating){m_rating = rating;}
void Player::setScore(double score){m_score = score;}
void Player::updateScore(double score){m_score += score;}
void Player::setFed(string fed){m_fed = fed;}
void Player::addRound(round_details round){m_round.push_back(round);}

// Initialise count
int Player::m_total_players = 0; 