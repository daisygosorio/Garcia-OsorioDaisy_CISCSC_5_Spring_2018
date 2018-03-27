/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 27, 2018, 11:25 AM
 * Purpose:  This program displays time
 */

//System Libraries Here
#include <iostream>
#include <iomanip>//Formating Library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char time;
    //Input or initialize values Here
    
    //Process/Calculations Here
    for (int hours=0;hours<=24;hours++){        
        for (int min=0;min<=60;min++){     
            for (int sec=0; sec<=60;sec++){
                cout<<hours<<":"<<min<<":"<<sec<<time<<endl;
                
            }
        }
    }    
    
    //Output Located Here
    
    //Exit
    return 0;
}

