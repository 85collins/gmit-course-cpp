#include "football_club.h"


    // Using :: Inherits from that class
    // Constructor
    FootballClub::FootballClub(string clubname, string district){
    this->clubname = clubname;
    this->district = district;
    }

    // Getter
    string FootballClub::getClubname(){
    return clubname;
    }

    // Setter
    void FootballClub::setClubname(string clubname){

    }

    // Getter
    string FootballClub::getDistrict(){
    return district;
    }

    // Setter
    void FootballClub::setDistrict(string district){

    }

    // Getter
    string FootballClub::getStripColour(){
    return stripColour;
    }

    // Setter
    void FootballClub::setStripColour(string stripColour){

    }

    // Function to print Clubname
    void FootballClub::printInfo(){
    cout<< clubname << " " << district<< endl;
    }
