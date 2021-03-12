#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDED
#include "player.h"

#include <iostream>


using namespace std;


//class name//Access specifier//class name
class FootballClub: public PlayerClass{     // Inherit atributes from one class to another
private:                                    // Access specifier
    string clubname;
    string district;
    string stripColour;
    int Squad [22];
    int Team [11];

public:

    // Constructor
    FootballClub();
    FootballClub(string clubname, string district);


    string getDistrict();                // Getters, grouped together
    string getStripColour();


    void setDistrict(string district);   // Setters, grouped together
    void setStripColour(string stripColour);

    void printInfo();                    // Function to print information

    void addPlayerClass(PlayerClass lab, int position){
    PlayerClass Team[position].setName(lab.getSurname());
    PlayerClass Team[position].setDob(lab.getDob());
    }



};

#endif // FOOTBALL_CLUB_H_INCLUDED
