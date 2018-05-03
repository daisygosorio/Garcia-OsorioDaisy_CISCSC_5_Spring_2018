/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 3, 2018, 9:40 AM
 * Purpose:  Retirement Function 
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
    //Salary in $/year, Return on Investment in %
    //Salary required in $, Percentage Deposit in %
    float salary,roi,savReq,percDep;//Initial Conditions
    
    int nYears;
    float svBegYr,inEndYr,dpEndYr;
    
    //Input or initialize values Here
    salary=1.e5f;                //$100,000
    roi-5e-2;                    //5%
    savReq=salary/roi;
    percDep=1e-1f;               //10%
    nYears=50;                   //50 Years
    svBegYr=0;                   //No savings int $'s at start
    inEndYr=0;                   //No interest at the beginning 
    dpEndYr=percDep*salary;      //Deposit at the end of every year
    
    //Process/Calculations Here
    int year=2021;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year Year Savings  Interest Deposit "<<endl;
    for (int nYear=0;nYear<=nYears&&savReq>svBegYr;nYear++){
        cout<<setw(2)<<nYear
                <<setw(6)<<year
                <<setw(12)<<svBegYr
                <<setw(10)<<inEndYr
                <<setw(10)<<dpEndYr<<endl;
        int isvBegYr=(svBegYr+inEndYr+dpEndYr)*100;
        svBegYr=isvBegYr/100;//Shifts back to dollars 
        inEndYr=svBegYr*roi;
    }
    cout<<"Savings to Retire = $ "<<svBegYr
            <<"in year"<<year<<endl;
    //Output Located Here
   
    //Exit
    return 0;
}
