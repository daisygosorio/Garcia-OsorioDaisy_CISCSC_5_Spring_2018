/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 20, 2018, 10:07 AM
 * Purpose:  Prime Number Not
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random Generator 
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    char num2Tst;//2-100
    bool prime;//Determine if num2Tst is prime 
  
    //Input or initialize values Here
    num2Tst=rand()%99+2;//[2,100]
  
    
    //Process/Calculations Here
    prime=true;
    prime=num2Tst==2?true&&prime:prime&&num2Tst%2;
    prime=num2Tst==3?true&&prime:prime&&num2Tst%3;
    prime=num2Tst==4?true&&prime:prime&&num2Tst%4;
    prime=num2Tst==5?true&&prime:prime&&num2Tst%5;
    prime=num2Tst==6?true&&prime:prime&&num2Tst%6;
    prime=num2Tst==7?true&&prime:prime&&num2Tst%7;
    prime=num2Tst==8?true&&prime:prime&&num2Tst%8;
    prime=num2Tst==9?true&&prime:prime&&num2Tst%9;
    prime=num2Tst==10?true&&prime:prime&&num2Tst%10;
    //Output Located Here
    cout<<static_cast<int>(num2Tst)
       <<" is "
            <<(prime?"Prime":"Not Prime")<<endl;
    //Exit
    return 0;
}

