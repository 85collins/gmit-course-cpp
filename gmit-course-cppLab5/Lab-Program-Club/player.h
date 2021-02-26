#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iostream>


using namespace std;

class PlayerClass{      // The Class
private:                // Access specifier
    string forename;
    string surname;
    string position;
    int mobileNumber;

public:
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



};

#endif // PLAYER_H_INCLUDED
