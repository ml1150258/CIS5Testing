/*
Author:  Dr. Mark E. Lehr
Date:    
Purpose: Template for C++ programs to be used in the course
         CSC/CIS 5.  Copied for each assignment problem
*/

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Code Execution Begins Here
int main(int argc, char** argv) {
    //Initilize Random Number Seed
    
    //Declare Variables
    char msg[]="Hello World!";
    string name;

    //Initialize Variables
    cout<<msg<<endl;
    cout<<"What is your name?"<<endl;
    cin>>name;

    //Process/Map inputs to outputs

    //Output data
    cout<<"Hello "<<name<<endl;

    //Exit stage right!
    return 0;
}