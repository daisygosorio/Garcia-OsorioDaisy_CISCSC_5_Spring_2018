/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 29, 2018, 10:20 AM
 * Purpose: Pattern Display of * using a Loop
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
    //Declare all Variables Here
    int rows;
    
    //Input or initialize values Here
    cout<<"Enter the Number of Rows for the Pyramid"<<endl;
    cin>>rows;
    
    //Process for Pattern A
    cout<<"Pattern A"<<endl;
    for(int i=1;i<=rows;i++){//Letting rows be end bound
        for( int j=1;j<=i;j++){
            cout<<"*";//By not putting endl; here the cycle repeats until false
        }
        cout<<endl;
    }
 
    //Process for Pattern B
    cout<<"Pattern B "<<endl;
    for(int i=rows;i>=1;i--){//Letting rows be end bound
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    //Output Located Here
   
    //Exit
    return 0;
}
