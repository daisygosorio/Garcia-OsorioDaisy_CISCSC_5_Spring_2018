/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 29, 2018, 11:20 AM
 * Purpose:  Calculating Pennis for Pay
 */

//System Libraries Here
#include <iostream>//I.O Library
#include <iomanip>// Format Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned int totPay, pyPrDay;//Pennies for pay
    char numDays=31;//Most number of days in a month
    
    //Input or initialize values Here
    pyPrDay=1;//1 penny on the first day 
    totPay=pyPrDay;//Total Amount
    
    //Process/Calculations Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<" Day      Pay          Total"<<endl;
    for (int day=1; day<=numDays;day++){
        cout<<setw(2)<<day
            <<setw(12)<<pyPrDay/100.0f
            <<setw(14)<<totPay/100.0f<<endl;
        pyPrDay*=2;
        totPay+=pyPrDay;
        
    }
    //Output Located Here
    

    //Exit
    return 0;
}

