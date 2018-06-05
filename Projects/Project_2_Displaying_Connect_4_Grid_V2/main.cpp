/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 31, 2018, 1:00 PM
 * Purpose: Displaying Connect 4 Grid 
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

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables 
    const int SIZE=42;
    const int ROWS=6;//There are 6 Rows in Connect 4 Grid
    int array[ROWS][COLS];//Two-Dimensional Array 6 Rows and 7 Columns 
       
    //Filling Array
    fillAry (array, SIZE);
    
    //Printing Connect 4 Grid
    cout<<"This program will display Connect 4 Grid."<<endl;
    cout<<"   1   2   3   4   5   6   7"<<endl;
    cout<<" -----------------------------"<<endl;
    prntAry(array,ROWS);
    
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
            a[row][col]=rand()%1+0;// Range is [0,1]
        }
        cout<<endl;        
    }
    cout<<endl;
}

