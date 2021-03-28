#include"football_club.h"


    FootballClub::FootballClub(){
        this->clubname = "NA";
        this->district = "NA";
    }
    FootballClub::FootballClub(string clubname, string district){
        this->clubname = clubname;
        this->district = district;
    }
    string FootballClub::getManager(){
        return name;
    }
    string FootballClub::getClubname(){
        return clubname;
    }
    string FootballClub::getDistrict(){
        return district;
    }
    void FootballClub::setManager(string forename,string surname){
        Manager->setName(forename,surname);
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
                if(squad[i].getNumber()<=15)
                {
                squad[i].printPlayerInfo();
                cout<< " -----Starting on the Team"<<endl;
                }
                else
                {
                    squad[i].printPlayerInfo();
                    cout<< " -----Substitute"<<endl;
                }

        }

    }

    void FootballClub::printManager(){
    cout<< "Manager -"<<Manager->getForename()<<""<<Manager->getSurname()<<endl;
    }

