/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 31, 2018, 10:00 AM
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
    int disc1,//Player 1 Disc 1
            disc2,//Player 1 Disc 2
            disc3,//Player 1 Disc 3
            disc4;//Player 1 Disc 4
    int pldisc1,// Player 2 Disc 1
            pldisc2,//Player 2 Disc 2
            pldisc3,//Player 2 Disc 3
            pldisc4;//Player 2 Disc 4
    
    
    
    int ngames;//Number of games
    
    //Initialize Variable
    
    //Random 4 Discs for Player 1 
    disc1=rand()%100+1;//[1,100]
    disc2=rand()%100+1;//[1,100]
    disc3=rand()%100+1;//[1,100]
    disc4=rand()%100+1;//[1,100]
    
    //Random 4 Discs for Player 1 
    pldisc1=rand()%100+1;//[1,100]
    pldisc2=rand()%100+1;//[1,100]
    pldisc3=rand()%100+1;//[1,100]
    pldisc4=rand()%100+1;//[1,100]
    
    //Map/Process Inputs to Outputs
    cout<<"This program will give a player four random numbers."<<endl;
    cout<<"Even Numbers represent Disc Color Blue."<<endl;
    cout<<"Odd Numbers represent Disc Color Red."<<endl;
    cout<<endl;
    cout<<"Player 1 has the following discs."<<endl;
    cout<<"Disc Number  "<<"    Disc Color "<<endl;
    
    /*Testing if Disc Number is Even or Odd
    * Blue Represents Even 
    * Red Represents Odd 
    * Using setw(6) for formatting output
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
    
    //Player 2 Checking Disc Color
    cout<<endl;
    cout<<"Player 2 has the following discs."<<endl;
    cout<<"Disc Number  "<<"    Disc Color "<<endl;
    if (pldisc1%2==0)
        cout<<setw(6)<<pldisc1<<"              Blue "<<endl;
    else
        cout<<setw(6)<<pldisc1<<"              Red "<<endl;
    
    if (pldisc2%2==0)
        cout<<setw(6)<<pldisc2<<"              Blue "<<endl;
    else
        cout<<setw(6)<<pldisc2<<"              Red "<<endl;
    
    if (pldisc3%2==0)
        cout<<setw(6)<<pldisc3<<"              Blue "<<endl;
    else
        cout<<setw(6)<<pldisc3<<"              Red "<<endl;
    
    if (pldisc4%2==0)
        cout<<setw(6)<<pldisc4<<"              Blue "<<endl;
    else
        cout<<setw(6)<<pldisc4<<"              Red "<<endl;
    
    
    //Displays Outputs
    
    //Exit Program!
    return 0;
}

