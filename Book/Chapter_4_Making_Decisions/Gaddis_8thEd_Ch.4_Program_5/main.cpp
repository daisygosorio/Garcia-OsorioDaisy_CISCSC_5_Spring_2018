/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 15, 2018, 1:00 PM
 * Purpose: Don't Confuse == with =
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
    if(average=100)
        cout<<"Congratulations! That's a perfect score"<<endl;
    
    /*Note:
     *      There is a difference between = and ==
     *      =  assignment operator
     *      == equality operator
     * Example:
     *      x=3 assigns the value 3 to x, while
     *      x==3 determines whether x is equal to 3
     * In this program average=10, meaning that the variable average has a value
     * of 100. Therefore, regardless of what the user inputs for the score1, 
     * score2, score 3. The program will display Congratulations! That's a 
     * perfect score, every single time. 
     */
    
    //Exit
    return 0;
}
