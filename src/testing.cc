// Testing classes
// Begun 06/06/26

#include <iostream>
#include <vector>
#include <string>
#include "player.h"

using namespace std;

int main(){

    // Initialise
    string name = "Joe";
    string surname = "Bloggs";
    double rating = 2000.0;
    string gender = "M";
    int birthyear = 1990;

    // Testing
    Player joe = Player(name,surname,gender,birthyear,rating);
    cout << joe.firstname() << endl;

}