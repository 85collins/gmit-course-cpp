#include <iostream>
#include <string>  // Header file needed to use strings
#include <iomanip> // Header file needed to use setw
#ifndef LABINFO_H_INCLUDED
#define LABINFO_H_INCLUDED


using namespace std;

void LabInfo() {

    cout << "Brian Collins" << endl;    // The Function of Question 1.
    cout << "Lab using classes" << endl;// Creating details of the Lab.
               }


class labInfo {   // Question 2 Creating a Class called labInfo

private:          // Question 5 Variables (Attributes) int Day, Int Month, int Year are made private.
     int Day;     // Reason for this is they can only be accessed within the class
     int Month;   // Recommended to be used when possible as a safer way of controlling
     int Year;    // the information in the program & prevent it from being altered.

public:

     string Name;  // Question 3. The other Attributes in the program are public
     string LabId; // Meaning, they can be accessed and modified from outside the code.



void printInfo(){  // Question 4. Function printInfo inside the Class
                   // Prints Name, Lab information & date.
    cout<< Name <<endl;
    cout << LabId <<endl;
    cout << "Date:" << Day <<setw(2)<< Month <<setw(5)<< Year<< endl; // setw Sets the width of the variable into the program
                }


void setdate(int DayTemp, int MonthTemp, int YearTemp ){
     Day = DayTemp;
     Month = MonthTemp;   // Question 5. Public Function that prints the private date.
     Year = YearTemp;     // Here we are passing the classes to a function.
                }
};





#endif // LABINFO_H_INCLUDED
