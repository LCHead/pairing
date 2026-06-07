// Header file for players
// Begun 06/06/26

#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>

using namespace std;

class Player{

    public:
        static int m_total_players;

        Player();
        Player(string firstname, string surname, string gender, int birthyear, double rating, string fed);
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
        // TODO: round details

        void setFirstname(string firstname);
        void setSurname(string surname);
        void setGender(string gender);
        void setBirthyear(int birthyear);
        void setRating(double rating);
        void setFed(string fed);

        void setScore(double score);
        // TODO: round details

    private:
        // Player details
        int m_id;
        string m_firstname;
        string m_surname;
        string m_gender;
        int m_birthyear;
        double m_rating;
        string m_fed;           // Federation

        // Pairing details
        double m_score;
        vector<double> m_score_by_round;
        vector<char> m_colours_by_round;
        vector<double> m_bye_by_round;
};

#endif
