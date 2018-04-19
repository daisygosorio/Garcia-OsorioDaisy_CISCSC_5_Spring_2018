/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 19, 2018, 12:00 PM
 * Purpose: Random Numbers used in approximating PI 
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PI=4*atan(1);//Definition of PI
const float MXRND=pow(2,31)-1;//2^31-1

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    float apprxPI;// Approximate value of PI given # terms in sequence
    int nDarts;//Number of darts in our dart game
    int inCrc1;//Number of darts in circle 
    
    //Input or initialize values Here
    inCrc1=0;
    nDarts=10000;
            
    //Process/Calculations Here
    for (int dart=1; dart<=nDarts; dart++){
        float x=rand()/MXRND;
        float y=rand()/MXRND;
        if (x*x+y*y<=1)inCrc1++;
    }
    apprxPI=4.0f*inCrc1/nDarts;//Approximates PI
    
        //Output Here
    cout<<"After "<<nDarts
            <<" terms the Approximate Value of PI = "<<apprxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;
    
    //Exit
    return 0;
}

