#include <iostream>
#include "functions.h"
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
 //EX1. A function called LabInfo() and call it from main.
 LabInfo ();



 //EX2. A function that can take two number and return largest.
 LargeNum ();



 //EX3. A function that can check the user has input a number between 1 and 100.
 numBT100();



 //EX4. A menu in your main program for the user to select the question/answer.
 Question();



 //EX5. A function that can take in the radius value calculate the area of a circle.
 RadCircle();



 //EX6. A fucntion that can take in two values and calculate the area of a rectangle.
 AreaRectangle();



 //EX7. A function that can take in temperature and humidity and prints an alarm if too high.
 TempHumidAlarm();



 //EX8. A function using a loop to test range of values from 0-120 meters, in 1 meter steps.
 RadCircle_1_120();



 //EX9. A temperature conversion from Celsius/Fahrenheit or Fahrenheit/Celsius.
 Celsius_2_Fahren();



 //EX10. A function to find all the even number from 0 to 1000 and print them.
 EvenNum1_1000();



 //EX11. A function that can take two interger values and finds all the odd numbers.
 FindOdd_Num();



 //EX12. A overloaded function of Q11 that can take in an array of values.
 FindOdd_Num2();



 //EX13. A function that can create 6 random numbers.
 RandomNum ();



 //EX14. Creating functions & fixing problems.
 print_NUMBERS();
 /* Print the numbers 5 through 9: */

 sum_NUMBERS();
 /* Finding the sum 1 + 2 + 3 + ... + 20 */

 grades();
 /* Average a list of grades terminated by -1 */



 //Ex15. A fucntion that will print “finished” 10 times, using 3 ways.
 FinishedEx();


    return 0;
}
