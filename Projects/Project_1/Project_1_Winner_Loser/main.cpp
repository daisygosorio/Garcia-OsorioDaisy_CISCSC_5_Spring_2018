/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on April 23, 2018, 10:00 AM
 * Purpose: Determines if Player is a winner or loser
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
    
   int Rdisc1,//Rival Player Disc 1
            Rdisc2,//Rival Player Disc 2
            Rdisc3,//Rival Player Disc 3
            Rdisc4;//Rival Player Disc 4
    //Initialize Variable
    
    //Random 4 Discs for Player and Rival Player
    disc1=rand()%100+1;//[1,100]
    disc2=rand()%100+1;//[1,100]
    disc3=rand()%100+1;//[1,100]
    disc4=rand()%100+1;//[1,100]
    
    Rdisc1=rand()%100+1;//[1,100]
    Rdisc2=rand()%100+1;//[1,100]
    Rdisc3=rand()%100+1;//[1,100]
    Rdisc4=rand()%100+1;//[1,100]
    
    //Map/Process Inputs to Outputs
    cout<<"This program will give a player four random numbers."<<endl;
    cout<<"Even Numbers represent Disc Color Blue."<<endl;
    cout<<"Odd Numbers represent Disc Color Red."<<endl;
    cout<<"Player has the following discs."<<endl;
    cout<<"Disc Number  "<<"    Disc Color "<<endl;
    
    /*Testing if Disc Number is Even or Odd
    Blue Represents Even 
    Red Represents Odd 
    Using setw(6) for formatting output
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
        
    //Rival Player Disc Numbers and Colors
    cout<<"Rival Player has the following discs."<<endl;
    cout<<"Disc Number  "<<"    Disc Color "<<endl;
    if (Rdisc1%2==0)
        cout<<setw(6)<<Rdisc1<<"              Blue "<<endl;
    else
        cout<<setw(6)<<Rdisc1<<"              Red "<<endl;
    
    if (Rdisc2%2==0)
        cout<<setw(6)<<Rdisc2<<"              Blue "<<endl;
    else
        cout<<setw(6)<<Rdisc2<<"              Red "<<endl;
    
    if (Rdisc3%2==0)
        cout<<setw(6)<<Rdisc3<<"              Blue "<<endl;
    else
        cout<<setw(6)<<Rdisc3<<"              Red "<<endl;
    
    if (Rdisc4%2==0)
        cout<<setw(6)<<Rdisc4<<"              Blue "<<endl;
    else
        cout<<setw(6)<<Rdisc4<<"              Red "<<endl;
    
    
    /*Deciding if Player is Winner or Loser
     * If all four disc are the same color then the Player wins
    */
    
    //Checking if Player 1 has 4 Disc the same color
    if (disc1%2==0 && disc2%2==0 && disc3%2==0 && disc4%2==0)
        cout<<"Player wins the game"<<endl;
    else
        cout<<"Player loses the game"<<endl;
    
    //Checking if Player 2 has 4 Disc the same color
    if (Rdisc1%2==0 && Rdisc2%2==0 && Rdisc3%2==0 && Rdisc4%2==0)
        cout<<"Rival Player wins the game"<<endl;
    else
        cout<<"Rival Player loses the game"<<endl;
    
    //Displays Outputs
    
    
    
    //Exit Program!
    return 0;
}
