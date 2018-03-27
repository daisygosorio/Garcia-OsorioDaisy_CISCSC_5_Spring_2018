/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on March 27, 2018 12:15 PM
 * Purpose: Program 5-1
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
    int x;//Variable x
    
    //Input or initialize values Here
    x=4;//Variable x starts at 4
    
    //Displays the value in number
    cout<<"The variable x = "<<x<<endl;
    cout<<"I will now increment x"<<endl;
    
    //Use of of postfix ++ to increment x
    x++;
    cout<<"Now the variable x = "<<x<<endl;
    cout<<"I will now increment x again"<<endl;
    
    //Use of of prefix ++ to increment x
    ++x;
    cout<<"Now the variable x = "<<x<<endl;
    cout<<"I will now decrement x again"<<endl;
    
    //Use of of postfix -- to decrement x
    x--;
    cout<<"Now the variable x = "<<x<<endl;
    cout<<"I will now decrement x again"<<endl;
    
    //Use of of prefix -- to increment x
    --x;
    cout<<"Now the variable x = "<<x<<endl;
  
    //Process/Calculations Here
    
    //Output Located Here
    
    //Exit
    return 0;
}

