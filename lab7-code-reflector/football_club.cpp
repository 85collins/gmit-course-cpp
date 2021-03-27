#include"football_club.h"
#include <time.h>
#include <stdlib.h>

    FootballClub::FootballClub(){
        this->clubname = "NA";
        this->district = "NA";
    }
    FootballClub::FootballClub(string clubname, string district){
        this->clubname = clubname;
        this->district = district;
    }
    string FootballClub::getManagerName(){
        return name;
    }
    string FootballClub::getClubname(){
        return clubname;
    }
    string FootballClub::getDistrict(){
        return district;
    }
    void FootballClub::setManagerName(string name){
        this->name=name;
    }
    void FootballClub::setClubname(string clubname){
        this->clubname = clubname;
    }

    void FootballClub::setDistrictname(string district){
        this->district = district;
    }

    void FootballClub::printInfo(){
     cout<<clubname<<endl;
    }


    void FootballClub::addPlayerToSquad(Player tmp, int position){
        this->squad[position].setNumber(tmp.getNumber());
        this->squad[position].setName(tmp.getForename(), tmp.getSurname());
        this->squad[position].setPosition(tmp.getPosition());
        this->squad[position].setDOB(tmp.getDOB());
        this->squad[position].setPosition(tmp.getPosition());
        this->squad[position].setMobileNumber(tmp.getMobileNumber());

    }
    void FootballClub::printTeam(){

        for(int i=0;i<MAXSQUAD;i++){
            squad[i].printPlayerInfo();
        }

    }
    void FootballClub::printSquad(){
int num;
        for(int i=0;i<MAXSQUAD;i++){
                num = rand()% MAXSQUAD;
            squad[i].printPlayerInfo();
            cout<<"***JERSEY NUMBER*** ----- "<<num;
            if(num<=15) {
                cout<< " -----Starting on the Team"<<endl;
                }
                else{
                    cout<< " -----Substitute"<<endl;
                }

        }

    }

    void FootballClub::printManager(){
    cout<< "Manager -"<<getManagerName()<<endl;
    }

