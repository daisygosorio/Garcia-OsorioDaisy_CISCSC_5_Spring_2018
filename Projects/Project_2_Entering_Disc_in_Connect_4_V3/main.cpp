/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 31, 2018, 1:00 PM
 * Purpose: Connect 4 
 */

//System Libraries 
#include<iostream>// I/O Library ---> cout, endl
#include<iomanip>//Formatting Function
#include<cstdlib>//Random Function srand
#include<ctime>//Time
using namespace std;//namespace I/O stream library created

//User Libraries
//Global Constants
const int COLS=7;// Columns for 2-D Array

// Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
void fillAry(int [][COLS],int);//Filling Array
void prntAry(int [][COLS],int);//Printing Array
void chngeMe(int);//Passing by Value
int sum(int, int );//Returning a Value from a function 
void prjctV1();


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare 2D Array 
    const int SIZE=42;
    const int ROWS=6;//There are 6 Rows in Connect 4 Grid
    int array[ROWS][COLS];//Two-Dimensional Array 6 Rows and 7 Columns 
    
    //Declaring 1D Array
    //This Array is To show the Number of Columns on Connect 4 Grid
    const int heading=7;
    int nmbCol[heading];
    
    //Demonstrating Project 1 
    cout<<"Computer will demonstrate Project 1 of Connect 4"<<endl;
    cout<<endl;
    prjctV1();
    cout<<endl;
    
    //User Enters the Numbers 1-7
    cout<<"Computer will first create Connect 4 Grid"<<endl;
    cout<<"Enter the Numbers 1-7 in Order to Create Seven Columns"<<endl;
    cin>>nmbCol[0];
    cin>>nmbCol[1];
    cin>>nmbCol[2];
    cin>>nmbCol[3];
    cin>>nmbCol[4];
    cin>>nmbCol[5];
    cin>>nmbCol[6];
    
    //Declaring Variables 
    int number;//Number that User Enters
    int total;//Total of Number and Number
       
    //Filling 2D Array
    fillAry (array, SIZE);
    
    //Printing Connect 4 Grid
    cout<<"        Connect 4 Grid.  "<<endl;
    cout<<"   "<<nmbCol[0]<<"   "<<nmbCol[1]<<"   "<<nmbCol[2]<<"   "<<nmbCol[3]
            <<"   "<<nmbCol[4]<<"   "<<nmbCol[5]<<"   "<<nmbCol[6]<<endl;
    cout<<" -----------------------------"<<endl;
    prntAry(array,ROWS);
    cout<<" -----------------------------"<<endl;
    cout<<endl;
    
    //User Enters a Number 1-7
    cout<<"Enter a number between 1-9"<<endl;
    cin>>number;
    while(number<1 || number>9 )
    {
        cout<<"Error"<<endl;
        cout<<"Enter a number between 1-9"<<endl;
        cin>>number; 
    }
    
    //Display Number from Main
    cout<<"The Number you entered = "<<number<<endl;
    
    //Passing the value in number
    chngeMe(number);
    
    //Display The value in number again from Main
    cout<<"The Number you entered = "<<number<<endl;
   
    //Display sum function using number
    cout<<"The sum of "<<number<<" and "<<number<<endl;
    total=sum(number,number);
    cout<<total<<endl;
    
    //Exit Program!
    return 0;
}
void prntAry(int a[][COLS],int rows){
    for(int row=0;row<rows;row++){
        cout<<" | ";
        for(int col=0;col<COLS;col++){
            cout<<a[row][col]<<" | ";
        }
        cout<<endl;
    }
}

void fillAry(int a[][COLS],int rows){
    for(int row=0; row<rows;row++){
        for(int col=0;col<COLS;col++){
            a[row][col]=rand()%9+1;// Range is [0,1]
        }
        cout<<endl;        
    }
    cout<<endl;
}
void chngeMe(int myValue){
 // Change the Value of Number
    myValue=12;
    
 //Display the value in myValue 
 cout<<"Are you sure you did not enter ? "<<endl;
 cout<<myValue<<endl;
    
}
int sum(int num1 , int num2 ){
    return num1+num2;
}

void prjctV1(){
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
     If all four disc are the same color then the Player wins
    */
    //Player
    if (disc1&&disc2&&disc3&&disc4%2==0)
        cout<<"Player wins the game"<<endl;
    else
        cout<<"Player loses the game"<<endl;
    
    //Rival Player
    if (Rdisc1&&Rdisc2&&Rdisc3&&Rdisc4%2==0)
        cout<<"Rival Player wins the game"<<endl;
    else
        cout<<"Rival Player loses the game"<<endl;
    
}