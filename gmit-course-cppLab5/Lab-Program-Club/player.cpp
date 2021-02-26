#include "player.h"


    // Using :: inherits from that class
    // Constructor
    PlayerClass::PlayerClass(string forename,string surname,string position,int mobileNumber){
    this->forename = forename;
    this->surname = surname;
    this->position = position;
    this->mobileNumber = mobileNumber;
    }
    // Getter
    string PlayerClass::getForename(){
    return forename;
    }
    // Setter
    void PlayerClass::SetForename(string forename){

    }
    // Getter
    string PlayerClass::getSurname(){
    return surname;
    }
    // Setter
    void PlayerClass::setSurname(string surname){

    }
    // Getter
    string PlayerClass::getPosition(){
    return position;
    }
    // Setter
    void PlayerClass::setPosition(string position){

    }
    // Getter
    int PlayerClass::getMobileNumber(){
    return mobileNumber;
    }
    // Setter
    void PlayerClass::setMobileNumber(int mobileNumber){

    }
    // Function to Print Player Info
    void PlayerClass::printPlayerInfo(){
    cout<< forename <<" "<< surname <<endl;
    }

