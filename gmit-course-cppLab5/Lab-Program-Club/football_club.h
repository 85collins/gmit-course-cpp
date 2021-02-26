#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDED


#include <iostream>


using namespace std;

class FootballClub{      // The Class
private:                 // Access specifier
    string clubname;
    string district;
    string stripColour;

public:

    // Constructor
    FootballClub(string clubname, string district);

    string getClubname();
    string getDistrict();                // Getters, grouped together
    string getStripColour();

    void setClubname(string clubname);
    void setDistrict(string district);   // Setters, grouped together
    void setStripColour(string stripColour);

    void printInfo();                    // Function to print information




};

#endif // FOOTBALL_CLUB_H_INCLUDED
