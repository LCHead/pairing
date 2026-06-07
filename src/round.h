// Header file for round
// Begun 06/06/26

#ifndef ROUND_H
#define ROUND_H

#include <vector>
#include <string>

using namespace std;

class Round{

    public:
        static int m_total_rounds;

        Round();
        Round(int round);
        ~Round();

        int roundID();
        void setRoundID(int round);
        static int getRoundCount();

    private:
        int m_roundid;

};

#endif
