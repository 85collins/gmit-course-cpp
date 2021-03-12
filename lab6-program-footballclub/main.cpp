#pragma once
#include <iostream>
#include "football_club.h"
#include "player.h"
#include <string>

using namespace std;

int main()
{

    FootballClub lab5("ST Bernards","Galway");

    lab5.setStripColour("Yellow Blue");
    lab5.setDistrict("Galway");
    cout<< lab5.getStripColour()<<" "<< lab5.getDistrict()<<endl;

    lab5.printInfo();

    cout<<" "<<endl;

    PlayerClass mylab5("Brian", "Collins","Defender",1234567);
    mylab5.setPosition("Defender");
    mylab5.setMobileNumber(1234567);
    cout<< mylab5.getPosition()<<" "<< mylab5.getMobileNumber()<<endl;

    mylab5.printPlayerInfo();

    cout<<" "<<endl;

    int squadMax = 23;
    PlayerClass player1;

    player1.setMobileNumber(808080);
    player1.setName ("Eoin", "Goal");
    player1.setDob ("1966");
    lab5.addPlayerClass (player1,4);

    PlayerClass player2;

    player2.setMobileNumber(808080);
    player2.setName ("Mark", "Bench");
    player2.setDob ("1962");
    lab5.addPlayerClass() (player2,5);


}
