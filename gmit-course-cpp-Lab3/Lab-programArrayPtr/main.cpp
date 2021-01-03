
#include "function.h"
#include <iostream>
#include <string>
using namespace std;



int main(){

    //Task 1
    LabInfo();


    //Task 2. Program to takes in 6 numbers into an array.
    //Using a loop to check all numbers should be (>0 and <100).
    int ssize = 6;
    int myarray[ssize];
    cout<<"Enter 6 elements of the array from 0 to 100 Please: \n";
    for(int i=0; i<ssize; i++)
    {
        cout<<"Enter the element number ["<<i+1<<"] :";
        cin>>myarray[i];


        if(myarray [i] >=100||myarray [i]<=0)
        {
    cout<<"Try Again, Please enter from 0 to 100:"<<endl;
         --i;}

         cout<<"The Array element you entered is: ";

        {
        cout<<myarray[i]<<endl;

       }
cout<<endl;
}


//Task 3. Print the array of numbers and memory locations.
printArray(myarray,ssize);
cout<<endl;



//Task 4. User inputs 1 number called scalar .
    int scalarNum;
    cout<<"Input 1 Number called Scalar. \n";
    cin>>scalarNum;
    cout<<endl;


//Task 5. A function that will pass the array by reference and also the scalar value.
// Andmultiply each number in the array by the scalar.
multiplyScalar(scalarNum,&myarray[0],ssize);
        cout<<endl;


//Task 6. Print the UPDATED Array of numbers and memory locations.
printArray(myarray,ssize);
cout<<endl;


//Task 7. Print A 2d Array of a Xmas Tree.
  XmasTree();
   }

