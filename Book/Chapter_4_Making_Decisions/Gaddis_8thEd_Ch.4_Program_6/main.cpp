/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 15, 2018, 1:00 PM
 * Purpose: Expanding the if statement
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
    int score1, score2, score3;//Test Score 1, Test Score 2, Test Score 3
    float average;// Average for Test Score 1,2,3
    int hghScre=95;//High Score equals 95
  
    //Input Three Test Scores
    cout<<"This program will calculate your average test score"<<endl;
    cout<<"Enter 3 Test Score "<<endl;
    cin>>score1>>score2>>score3;
    
    //Process/Calculations Here
    average=(score1+score2+score3)/3;
    
    //Output Located Here
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"Your average is "<<average<<endl;
    
    //Did you get a perfect score?
    if(average>hghScre)
    {
        cout<<"Congratulations!"<<endl;
        cout<<"That's a high score"<<endl;
        cout<<"You deserve a pat on the back"<<endl;
    }
    
    /*Note:
     * if (expression)
     *   {
     *     statement1;
     *     statement2;
     *     statement3;
     *     //Place as many statements here as necessary
     *   }
     *When placing multiple statements in an if statement is important to us 
     *{}braces after the expression. Do not forget to indent statements inside 
     *the braces. Indenting statements makes it easier to read the code. 
     */
    
    //Exit
    return 0;
}
