#include "labInfo.h"




void labInfo::LabInfo() {

    cout << "Brian Collins" << endl;    // The Function of Question 1.
    cout << "Lab using classes" << endl;// Creating details of the Lab.
               }



void labInfo::printInfo(){  // Question 4. Function printInfo inside the Class
                   // Prints Name, Lab information & date.
    cout<< Name <<endl;
    cout << LabId <<endl;
    cout << "Date:" << Day <<setw(2)<< Month <<setw(5)<< Year<< endl; // setw Sets the width of the variable into the program
                }


void labInfo::setdate(int DayTemp, int MonthTemp, int YearTemp ){
     Day = DayTemp;
     Month = MonthTemp;   // Question 5. Public Function that prints the private date.
     Year = YearTemp; }   // Here we are passing the classes Attributes to a function.


