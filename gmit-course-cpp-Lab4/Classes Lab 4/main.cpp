#include <iostream>

/* Brian Collins G00364362
   Queation 1 function called LabInfo() with Lab details

   Question 2 A class in the main file with the name labInfo containing 5 attributes nam, labId, day, month, year.

   Question 3 In main create an object of your new class and set its attributes in main function.

   Question 4 In labInfo class create a public fucntion call printInfo() printing class attributes.

   Question 5 Make the date variables private, Create a public function in the class that will set the date.

   Question 6 Create 2 new files called labInfo.h and labInfo.cpp.

   Question 7 Move your class and its functions to the .h file and .cpp file */


using namespace std;

#include "labInfo.h"


int main()
{
    LabInfo(); // Question 1


    labInfo mylab; // Question 2

    mylab.Name = "Brian Collins";
    mylab.LabId= "Lab 4";
/*  mylab.Day = 12;      Question 2, 3 & 4. Originally when i implemented question 2, 3 & 4 the program ran smoothly.
    mylab.Month = 2;     When i altered the program at Question 5 an error displayed saying "labInfo Day is private within
    mylab.Year = 2021;   this context" I had made them private at Question 5 */



   mylab.setdate(12,2,2021); // Access to the private date

   mylab.printInfo();        // Function calling to print information

}
