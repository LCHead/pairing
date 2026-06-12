// Header file for players
// Begun 06/06/26

#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>

class Player{

    public:
        struct round_details{
            Player* opponent;
            double result;
            char colour;
        };

        Player(std::string firstname, std::string surname, std::string gender, int birthyear, double rating, std::string fed);
        Player(const Player& player);
        ~Player();

        static Player createBye();

        int tpn();
        std::string firstname();
        std::string surname();
        std::string gender();
        int birthyear();
        double rating();
        std::string fed();

        double score();
        static int getPlayerCount();
        
        bool IsBye() const;
        // round_details getRoundDetails(const int round_number);

        void setTPN(int tpn);
        void setFirstname(std::string firstname);
        void setSurname(std::string surname);
        void setGender(std::string gender);
        void setBirthyear(int birthyear);
        void setRating(double rating);
        void setFed(std::string fed);

        void setScore(double score);            // set the score to a fixed value
        void updateScore(double score);         // add to the score
        void addRound(round_details round);        // add details of round to scoresheet

        // Pairing details
        double m_score;
        std::vector<round_details> m_round;

    private:
        static int m_total_players;

        // Player details
        int m_tpn;
        std::string m_firstname;
        std::string m_surname;
        std::string m_gender;
        int m_birthyear;
        double m_rating;
        std::string m_fed;           // Federation   
        bool m_isbye;

        // Bye player constructor
        struct tag_bye{};
        Player(tag_bye);
};

#endif
