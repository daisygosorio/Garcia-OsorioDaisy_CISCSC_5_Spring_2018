/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 3rd, 2018, 11:20 AM
 * Purpose:  Retirement
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    //Salary in $/year, Return on Investment in %, 
    //Savings required in $, Percentage Deposit in %
    float salary,roi,savReq,percDep;//Initial Conditions
    //Number of Years, Savings at the Beginning of the year
    //Interest Earned at the End of the year,
    //Deposit at the end of the year
    const int NYRS=100;//Size of the array
    int nYears=50;//Number of Years the array is utilize 
    float svBegYr[NYRS],inEndYr[NYRS],dpEndYr[NYRS];
    int year[NYRS];
    
    
    //Initialize
    salary=1.e5f;     //$100,000
    roi=5e-2;         //5%
    savReq=salary/roi;//Savings required to retire
    percDep=1e-1f;    //10% 
    nYears=50;        //50 years
    svBegYr[0]=0;        //No savings int $'s at start
    inEndYr[0]=0;        //No interest at the beginning
    dpEndYr[0]=percDep*salary;//Deposit at the end of every year
       
    //Map/Process Inputs to Outputs
    year[0]=2021;
    int nYear;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Year     Savings  Interest   Deposit"<<endl;
    for( nYear=0;nYear<=nYears&&savReq>svBegYr[nYear];
            nYear++){
        cout<<setw(2)<<nYear
                <<setw(8)<<year[nYear]
                <<setw(12)<<svBegYr[nYear]
                <<setw(10)<<inEndYr[nYear]
                <<setw(10)<<dpEndYr[nYear]<<endl;
        int isvBgYr=(svBegYr[nYear]+inEndYr[nYear]+dpEndYr[nYear]+0.005)*100;//Calculates in Pennies
        year[nYear+1]=year[nYear]+1;
        svBegYr[nYear+1]=isvBgYr/100;//Shifts back to dollars
        dpEndYr[nYear+1]=dpEndYr[nYear];
        inEndYr[nYear+1]=svBegYr[nYear+1]*roi;
    }
    
    //Output the Last Year
    cout<<"Savings to Retire = $"<<svBegYr[nYear]
            <<" in year "<<year[nYear]<<endl;
 
    
    //Output the results

    
    //Exit program!
    return 0;
}