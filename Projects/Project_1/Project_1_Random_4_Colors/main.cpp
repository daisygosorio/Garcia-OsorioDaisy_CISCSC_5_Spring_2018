/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on April 17, 2018, 10:00 AM
 * Purpose: To Pick Four Random Color Between Red and Blue
 */

//System Libraries 
#include<iostream>// I/O Library ---> cout, endl
#include<iomanip>//Formatting Function
#include<cstdlib>//Random Function srand
#include<ctime>//Time
using namespace std;//namespace I/O stream library created

//User Libraries
//Global Constants
// Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables 
    int disc1,//Disc 1
            disc2,//Disc 2
            disc3,//Disc 3
            disc4;//Disc 4
    
    int ngames;//Number of games
    
    //Initialize Variable
    
    //Random 4 Discs
    disc1=rand()%100+1;//[1,100]
    disc2=rand()%100+1;//[1,100]
    disc3=rand()%100+1;//[1,100]
    disc4=rand()%100+1;//[1,100]
    
    //Map/Process Inputs to Outputs
    cout<<"This program will give a player four random numbers."<<endl;
    cout<<"Even Numbers represent Disc Color Blue."<<endl;
    cout<<"Odd Numbers represent Disc Color Red."<<endl;
    cout<<"Player has the following discs."<<endl;
    cout<<"Disc Number  "<<"    Disc Color "<<endl;
    
    /*Testing if Disc Number is Even or Odd
    *Blue Represents Even 
    *Red Represents Odd 
    *Using setw(6) for formatting output
    */
    if (disc1%2==0)
        cout<<setw(6)<<disc1<<"              Blue "<<endl;
    else
        cout<<setw(6)<<disc1<<"              Red "<<endl;
    
    if (disc2%2==0)
        cout<<setw(6)<<disc2<<"              Blue "<<endl;
    else
        cout<<setw(6)<<disc2<<"              Red "<<endl;
    
    if (disc3%2==0)
        cout<<setw(6)<<disc3<<"              Blue "<<endl;
    else
        cout<<setw(6)<<disc3<<"              Red "<<endl;
    
    if (disc4%2==0)
        cout<<setw(6)<<disc4<<"              Blue "<<endl;
    else
        cout<<setw(6)<<disc4<<"              Red "<<endl;
    
    //Displays Outputs
    
    //Exit Program!
    return 0;
}

