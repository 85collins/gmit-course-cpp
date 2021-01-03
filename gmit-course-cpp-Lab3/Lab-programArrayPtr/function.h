#include <iostream>
#include <string>
using namespace std;



void LabInfo() {
 cout<<"Brian Collins\n";
 cout<<"Lab #3" << endl;

 cout<<endl;
 }


//Print the array of numbers and memory locations using a function.
//And Pass the array by value.
 void printArray(int array6numbers[],int ssize){

cout<<"Printing Array Elements:"<<endl;
    for(int i = 0;i <ssize; i++)
        {
    cout<<"Array Element "<<array6numbers[i]<<" & Stored Location = "<<&array6numbers[i]<<endl;
            }

    cout<<endl;
}



//A function that will pass the array by reference and also the scalar value.
//And multiply each number in the array by the scalar.
void multiplyScalar(int scalarNum,int *j,int ssize){

cout<<"Array Element multiplied by Scalar:"<<endl;
        for (int i = 0 ; i <ssize; ++i)
            {*j = *j * scalarNum;
            j++ ;}

}



//A Function using a 2d Array to design a Xmas tree and print the tree out.
void XmasTree(){

string arrayTree[7][1] =

{{"    x    "}, {"   xox   "}, {"  xoxox  "}, {" xoxoxox "},
{"xxxxxxxxx"}, {"    #    "},{"    #    "}};

for (int i = 0; i<7; ++i)
{
    for (int j = 0; j<1; ++j)
{
    cout<<arrayTree[i][j]<<endl;}
    }
}
