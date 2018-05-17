/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 17, 2018, 9:35 AM
 * Purpose:  Inputting and Outputting Array Contents
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int numEmpy=6;//Number of Employees =6
    int hours[numEmpy];
    int count;
   
    //Input the Number of Hours Worked by Each Employee
    cout<<"Enter the Number of Hours Worked by Each Employee"<<endl;
    cin>>hours[0];
    cin>>hours[1];
    cin>>hours[2];
    cin>>hours[3];
    cin>>hours[4];
    cin>>hours[5];
    
    //Process/Calculations Here
    
    
    //Output Located Here
    cout<<"The Hours you entered are"<<endl;
    for(count=0;count<numEmpy;count++)
        cout<<"  "<<hours[count];
    cout<<endl;

    //Exit
    return 0;
}

