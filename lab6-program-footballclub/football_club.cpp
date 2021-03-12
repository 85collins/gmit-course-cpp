#include "football_club.h"


    // Using :: Inherits from that class
    // Constructor
    FootballClub::FootballClub(string clubname, string district){
    this->clubname = clubname;
    this->district = district;
    }

    // Getter
    string FootballClub::getDistrict(){
    return district;
    }

    // Setter
    void FootballClub::setDistrict(string area){
         district = area;
    }

    // Getter
    string FootballClub::getStripColour(){
    return stripColour;
    }

    // Setter
    void FootballClub::setStripColour(string Colour){
         stripColour = Colour;
    }

    // Function to print Clubname
    void FootballClub::printInfo(){
    cout<< clubname << " " << district<< endl;
    }




