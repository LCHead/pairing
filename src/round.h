// Header file for round
// Begun 06/06/26

#ifndef ROUND_H
#define ROUND_H

#include <vector>
#include "player.h"

using namespace std;

class Round{

    public:
        Round();
        Round(const Round& round);
        ~Round();

        int roundID();
        void setRoundID(int round);

        void playGame(Player* white,Player* black,const double score_white,const double score_black);   // game
        void playGame(Player* player, Player* bye, const double score);     // bye

        void updateTPNs(vector<Player*>& playerlist);
        void updateTPNs(vector<Player>& playerlist);

        static int getRoundCount();

    private:
        static int m_total_rounds;

        int m_roundid;
};

#endif
