/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 10, 2018, 1:00 PM
 * Purpose:  This program averages three test scores
 */

//System Libraries Here
#include <iostream>   // I/O LIbrary 
#include <iomanip>    //Formatting Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int hgScore=95;//High Score = 95
    int score1;//Score 1
    int score2;//Score 2
    int score3;//Score 3
    float average;//Average of the three test score
    
    //Input Three Test Score
    cout<<"Enter 3 Test Score and I will average them"<<endl;
    cin>>score1>>score2>>score3;
   
    //Calculate the Average Score
    average=(score1+score2+score3)/3.0f;
    cout<<fixed<<showpoint<<setprecision(1);
    
    
    //Is the Average a High Score?
    if (average>=hgScore)
        cout<<"Congratulations! That's a high score"<<endl;
    
    /*Note:
     * This program uses a simple if statement.
     * If statement format as follows:
     * 
     * if (expression)
     *      statement;
     * 
     */
    
    //Output Located Here
    cout<<"Your average is "<<average<<endl;
    
    //Exit
    return 0;
}
