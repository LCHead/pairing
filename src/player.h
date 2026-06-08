// Header file for players
// Begun 06/06/26

#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>

using namespace std;

class Player{

    public:
        struct round_details{
            Player* opponent;
            double result;
            char colour;
        };

        Player(string firstname, string surname, string gender, int birthyear, double rating, string fed);
        Player(const Player& player);
        ~Player();

        int id();
        string firstname();
        string surname();
        string gender();
        int birthyear();
        double rating();
        string fed();

        double score();
        static int getPlayerCount();
        round_details getRoundDetails(const int round_number);

        void setFirstname(string firstname);
        void setSurname(string surname);
        void setGender(string gender);
        void setBirthyear(int birthyear);
        void setRating(double rating);
        void setFed(string fed);

        void setScore(double score);            // set the score to a fixed value
        void updateScore(double score);         // add to the score
        void addRound(round_details round);        // add details of round to scoresheet

        // Pairing details
        double m_score;
        vector<round_details> m_round;

    private:
        static int m_total_players;

        // Player details
        int m_id;
        string m_firstname;
        string m_surname;
        string m_gender;
        int m_birthyear;
        double m_rating;
        string m_fed;           // Federation   
        
};

#endif
