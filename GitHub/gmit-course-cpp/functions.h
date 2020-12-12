#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
//EX1. A function called LabInfo() and call it from main.
void LabInfo () {

cout<< "Brian Collins\n";
cout<< "Lab #2"<<endl;
cout<<endl;
}

//EX2. A function that can take two number and return largest.
void LargeNum () {

    int a = 0;
    int b = 0;
cout<<"Enter two numbers\n";
cin>>a>>b;
if (a>b) {
  cout<<"The largest number is "<<a<<endl;
}
else {
cout<<"The largest number is "<<b<<endl;

cout<<endl;
}
}


//EX3. A function that can check the user has input a number between 1 and 100.
void numBT100() {

int num = 0;
cout<<"Input Number\n";
cin>>num;
if (num <=100)
    {
        cout<<"Less than 100\n";
    } else if (num > 100)
    {cout<< "More than 100\n";}

cout<<endl;
}

//EX4. A menu in your main program for the user to select the question/answer.
void Question() {

char choice = ' ';
cout<< "What would you like?\n";
cout<< "Please input your choice.\n";
cout<< "Drink = A, Meal = B, Drink + Meal = C.\n";
cin>>choice;
    switch (choice) {
    case 'a': cout<< "Drink coming right up."<<endl;
    break;
    case 'b': cout<< "Meal coming right up."<<endl;
    break;
    case 'c': cout<< "Drink & Meal coming right up."<<endl;
    break;}

    cout<<endl;
}

//EX5. A function that can take in the radius value calculate the area of a circle.
void RadCircle() {

float pi=3.14159;
float r = 0;
cout<<"Enter radius\n";
cin>> r;
cout<< "PI = 3.14159 * Rad * Rad = \n";
cout<< pi*r*r;
cout<<" answer\n";

cout<<endl;
}

//EX6. A fucntion that can take in two values and calculate the area of a rectangle.
void AreaRectangle() {

    float a;
    float b;
    cout<< "Length by Breath = Area of Rectangle.\n";
    cout<< "Enter Length.\n";
    cin>> a;
    cout<< "Enter Breath.\n";
    cin>> b;
    cout<< a * b;
    cout<< " Area = Answer."<<endl;

    cout<<endl;
}

//EX7. A function that can take in temperature and humidity and prints an alarm if too high.
void TempHumidAlarm() {

int temp;
int humid;
int temp_alarm = 95;
int humid_alarm = 90;
cout<< "Input Temperature & Humidity Readings\n";
cin>>temp>>humid;
if (temp >= temp_alarm)
{
    cout<< "Temperature Alarm\n";
} if (humid >= humid_alarm)
{
    cout << "Humidity Alarm\n";
}
cout<<endl;
}

//EX8. A function using a loop to test range of values from 0-120 meters, in 1 meter steps.
void RadCircle_1_120(){

float pi = 3.145;
float rad1;
cout <<"Finding the Area of a circle with Radius from 1 to 120\n";
cout <<"Press 0 to start count\n";

        for(int i=0;i <= 120;i++){
            rad1 = i;
cout<< "The area of circle is \n";
cout<< pi * rad1 * rad1<<endl;
cout<<"Radius = "<<rad1<<endl;
cout<< " "<<endl;
}
cout<<endl;}


//EX9. A temperature conversion from Celsius/Fahrenheit or Fahrenheit/Celsius.
void Celsius_2_Fahren(){

float celsius;
float fahrenheit;
char degree;

    cout<< "If you would like to convert Fahrenheit to Celsius enter = f \n";
    cout<< "If you would like to convert Celsius to Fahrenheit enter = c \n";
    cin>> degree;

    if (degree == 'f')
    {
      cout<< "Enter temperature in Fahrenheit: ";
      cin>>fahrenheit;
      cout<< "Temperature from Fahrenheit to Celsius is: " << (fahrenheit - 32) * (5.0/9.0) <<endl;
    }
     if (degree == 'c')
  {
    cout<< "Enter temperature in Celsius: ";
    cin>> celsius;
    cout << "Temperature from Celsius to Fahrenheit is: " << (celsius * 9.0) / 5.0 + 32 <<endl;
}
cout<<endl;}

//EX10. A function to find all the even number from 0 to 1000 and print them.
void EvenNum1_1000(){

    cout<< "Even numbers from 1 to 1000: \n";

for (int i = 1; i <= 1000; i++)
        {
        if (i % 2 == 0)
            cout<< i << ". "<<endl;}
            cout<<endl;
}

//EX11. A function that can take two interger values and finds all the odd numbers.
void FindOdd_Num(){


    int firstNum;
    int secondNum;
    cout<< "Enter your First & Lowest Number: \n";
    cin>> firstNum;
    cout<< "Enter your Second & Highest Number: \n";
    cin>> secondNum;
    cout<< "Odd numbers between both numbers are: \n";

    for(int i = firstNum; i <= secondNum; i++)

    if(i % 2 !=0)
    cout << i<< " "<<endl;
    cout<<endl;
}

//EX12. A overloaded function of Q11 that can take in an array of values.
void FindOdd_Num2(){

    cout<<"Function overload"<<""<<endl;

    int arr[100];
    int ii,sze,odd=0;
    cout<<"Enter size of the array \n";
    cin>>sze;
    cout<<"Enter elements of the array \n";
    for(ii=0; ii<sze; ii++)
    {
        cout<<"Enter the element arr["<<ii<<"] :";
        cin>>arr[ii];
    }
    for(ii=0; ii<sze; ii++)
    {
        if(arr [ii] % 2 !=0)
          odd++;
        }
    cout<<"Total odd numbers of an array : "<<odd<<endl;
    cout<<endl;
}

//EX13. A function that can create 6 random numbers.
 void RandomNum (){

int number;
int r;
srand(time(0));
cout<< "Below are 6 random numbers selected between 0 & 100. \n";
for(r = 1; r <= 6; r++)
{
number = rand() % 100;
cout << number  << "  .  "<<endl;
}
cout<<endl;
}

//EX14. Creating functions & fixing problems.
 void print_NUMBERS()
/* Print the numbers 5 through 9: */
{
int i=5;
while (i < 10)
{
 cout << i;
 cout << endl;
 i = i + 1;
}
cout<<endl;
}

void sum_NUMBERS()
/* Finding the sum 1 + 2 + 3 + ... + 20 */
{
int sum;
int i = 1;

sum = 0;
while (i <= 20)
{
 sum = sum + i;
 i = i + 1;
}
cout << "The sum = " << sum<<endl;
cout<<endl;
}


void grades()
/* Average a list of grades terminated by -1 */
{

int sum;
int count;
int grade;

sum = 0;
count = 0;
cout << "Enter grade (-1 to end): "; // prompt user for grade
cin >> grade; // read grade
while (grade != -1)
{
 sum = sum + grade;
 count = count + 1;
 /* Get next grade */
 cout << "Enter grade (-1 to end): ";
 cin >> grade;
}
if (count > 0)
 cout << "Average is " << (double) sum / count<<endl;

 cout<<endl;
}


//Ex15. A fucntion that will print “finished” 10 times, using 3 ways.
void FinishedEx(){

int a=1;
 while(a<=3)
 {
  a++;
  cout<<"FINISHED"<<endl;
 }
{
for(int c = 4; c <= 7;c++)

cout<<"*finished*"<<endl;
}
{
    int i = 8;
    do {
        cout<< "FiNiShEd\n";
        ++i;
    }
    while (i<= 10);}}





