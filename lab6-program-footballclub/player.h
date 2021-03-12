#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "football_club.h"

#include <iostream>


using namespace std;

//class name//Access specifier//class name
class PlayerClass: public FootballClub {      // Inherit atributes from one class to another
private:                                      // Access specifier
    string forename;
    string surname;
    string position;
    int mobileNumber;
    int dob;

public:
    PlayerClass();
    PlayerClass(string forename, string surname);

    PlayerClass(string forename,string surname,string position, int mobileNumber);

    string getPosition();
    string getForename();             // Getters, grouped together
    string getSurname();
    int getMobileNumber();

    void SetForename(string forename);
    void setSurname(string surname);  // Setters, grouped together
    void setPosition(string position);
    void setMobileNumber(int mobileNumber);


    void printPlayerInfo();


    void setName(string forename, string surname){
    this-> forename=forename;
    this-> surname=surname;
    }

    void setDob(string year){
    this->dob.setDate(year)
    }

    int getDob(){
    return dob;
    }


};

#endif // PLAYER_H_INCLUDED
