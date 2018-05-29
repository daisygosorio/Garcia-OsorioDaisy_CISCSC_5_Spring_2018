/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 29, 2018, 10:20 AM
 * Purpose:  This program initializes a string array
 */

//System Libraries Here
#include <iostream>// I/O LIbrary 
#include <cmath>//Math Library
#include <iomanip>//Formatting Library
#include <cstdlib>//exit () function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here


//Program Execution Begins Here
int main(int argc, char** argv) {
    //This is an example of a string array that is initialized with strings
    const int SIZE=9;
    string planets[SIZE]={"Mercury","Venus","Earth","Mars","Jupiter",
                          "Saturn","Uranus","Neptune",
                          "Pluto (a dwarf planet)"};
   
    //Input or initialize values Here
    
    //Process/Calculations Here
    cout<<"Here are the planets"<<endl;
    for (int count=0;count<SIZE;count++)
        cout<<planets[count]<<endl;
    
    //Output Located Here
   
    //Exit
    return 0;
}
