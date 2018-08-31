/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on August 31, 2018 10:09 A.M.
 * Purpose:  Convert Celsius to Fahrenheit
 */

//System Libraries Here
#include <iostream>   // I/O LIbrary 
#include <cmath>     //Math Library
#include <iomanip>   //Formatting Library
#include <cstdlib>   //exit () function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here (Variables 7 characters or less)
    unsigned int fhrenht,// Fahrenheit temperature
            celsius;// Celsius temperature
    
    //Input or initialize values Here
    cout<<"This program will calculate the Fahrenheit temperature"<<endl;
    cout<<"Enter a temperature of Celsius"<<endl;
    cin>>celsius;
    
    //Process/Calculations Here
    //Equation for conversion from Celsius to Fahrenheit 
    fhrenht=(celsius*9)/5+32;
   
    
    //Output Located Here
    //Display temperature in Celsius and Fahrenheit
    cout<<"Celsius temperature    = "<<celsius<<endl;
    cout<<"Fahrenheit temperature = "<<fhrenht<<endl;
    
    //Exit
    return 0;
}
/*Note:
 * Add a loop to set limits on input temperature 
 */
