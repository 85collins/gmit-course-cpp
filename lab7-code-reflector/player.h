#include <iostream>

using namespace std;



class Player{
private:
    string forename;
    string surname;
    string position;
    string mobileNumber;
    int dob;
    int number;

public:
    Player();
    Player(string forename, string surname);
    Player(int number, string forename, string surname, int mobileNumber, string position);

    void printPlayerInfo();
    string getForename();
    string getSurname();
    void setName(string name);
    void setName(string forename,string surname);

    void setPosition(string position);
    string getPosition();
    void setMobileNumber(string mobileNumber);
    string getMobileNumber();

    void setNumber(int number);
    int getNumber();

    void setDOB(int dob);
    int getDOB();

};

