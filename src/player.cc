// Source file for players
// Begun 06/06/26

#include <vector>
#include <string>
#include "player.h"

// Constructors and destructors
Player::Player(std::string firstname, std::string surname, std::string gender, int birthyear, double rating, std::string fed){

    // Initialise to 0 or empty
    m_score = 0.0;
    m_round = {};
    m_tpn = 0;                     // TODO

    m_firstname = firstname;
    m_surname = surname;
    m_gender = gender;
    m_birthyear = birthyear;
    m_rating = rating;
    m_fed = fed;
    m_isbye = false;

    ++m_total_players;
}
Player::Player(const Player& player) : m_score(player.m_score), m_round(player.m_round), m_tpn(player.m_tpn), m_firstname(player.m_firstname), m_surname(player.m_surname), m_gender(player.m_gender), m_birthyear(player.m_birthyear), m_rating(player.m_rating), m_fed(player.m_fed), m_isbye(player.m_isbye){++m_total_players;}
Player::~Player(){if (!m_isbye) --m_total_players;}

// Bye
Player::Player(tag_bye) : m_firstname("BYE"), m_surname(""), m_gender(""), m_birthyear(0), m_rating(0.0), m_fed(""), m_isbye(true) {}
Player Player::createBye() {return Player(tag_bye{});}

// Getter functions
int Player::tpn(){return m_tpn;}
std::string Player::firstname(){return m_firstname;}
std::string Player::surname(){return m_surname;}
std::string Player::gender(){return m_gender;}
int Player::birthyear(){return m_birthyear;}
double Player::rating(){return m_rating;}
double Player::score(){return m_score;}
std::string Player::fed(){return m_fed;}
int Player::getPlayerCount(){return m_total_players;}
bool Player::IsBye() const {return m_isbye;}

// Setter functions
void Player::setTPN(int tpn){m_tpn = tpn;}
void Player::setFirstname(std::string firstname){m_firstname = firstname;}
void Player::setSurname(std::string surname){m_surname = surname;}
void Player::setGender(std::string gender){m_gender = gender;}
void Player::setBirthyear(int birthyear){m_birthyear = birthyear;}
void Player::setRating(double rating){m_rating = rating;}
void Player::setScore(double score){m_score = score;}
void Player::updateScore(double score){m_score += score;}
void Player::setFed(std::string fed){m_fed = fed;}
void Player::addRound(round_details round){m_round.push_back(round);}

// Initialise count
int Player::m_total_players = 0; 