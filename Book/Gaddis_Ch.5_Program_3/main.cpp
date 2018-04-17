/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 17, 2018, 10:25 AM
 * Purpose:  This Program demonstrates a simple while loop
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
    int number;
    
    //Input or initialize values Here
    number=0;
    
    //Process/Calculations Here
    while (number< 5)
    {
        cout<<"Hello"<<endl;
        number++;
    }
    
    //Output Located Here
    cout<<"That's all"<<endl;
    //Exit
    return 0;
}

