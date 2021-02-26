#include <iostream>
#include <string>
#include "football_club.h"
#include "player.h"
using namespace std;




int main()
{
    // Football Club Info
    FootballClub lab5("ST Bernards", "Galway");

    lab5.setStripColour("Yellow Blue");
    lab5.setDistrict("Galway");
    cout<< lab5.getStripColour()<<" "<< lab5.getDistrict()<<endl;

    lab5.printInfo();


    // Player Info
    PlayerClass mylab5("Brian", "Collins","Defender",1234567);
    mylab5.setPosition("Defender");
    mylab5.setMobileNumber(1234567);
    cout<< mylab5.getPosition()<<" "<< mylab5.getMobileNumber()<<endl;

    mylab5.printPlayerInfo();



    return 0;
}
