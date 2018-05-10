/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 3, 2018, 9:40 AM
 * Purpose: This program demonstrates how a misplaced semicolon 
 *          prematurely terminates an if statement
 */

//System Libraries Here
#include <iostream>// I/O LIbrary 
#include <iomanip>//Formatting Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int x=0;//Let x=0
    int y=10;//Let y=10
   
    //Process/Calculations Here
    if (x>y);
        cout<<"X is greater than y"<<endl;
   /*Note:
    * This program demonstrates how a ;(semicolon) can terminate an if statement
    * Remember that an if statement has the following format
    * if (expression)
    *       statement;
    * The ; goes after the statement not the (expression)
    */
    
    //Output Located Here
    cout<<"X = "<<x<<" and Y = "<<y<<endl;
    //Exit
    return 0;
}
