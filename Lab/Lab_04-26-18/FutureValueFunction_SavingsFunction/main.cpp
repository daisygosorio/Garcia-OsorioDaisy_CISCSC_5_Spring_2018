/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on April 24, 2018, 11:27 AM
 * Purpose:  All Concepts for Chapter 6
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
const float CNVERC=1e2;//100

//Function Prototypes Here
float fval1(float, float, int);//Future Value with Power Function
float fval2(float, float, int);//Future Value with log/Exp
float fval3(float, float, int);//Future Value with for-loop
float fval4(float, float, int);//Future Value with for-loop
float fval5(float, float, int=12);//Future Value with for-lop
float fval4(float, float,float);//Future Value by overloading function 
float fval6(float, float,int,int &);//Future Value by Static Variable and 
float fval7(float, float,int);//Future Value by Static V

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float presVal,//Present value in $'s
            intRate;//Interest Rate in %
    int numCmp;//Number of compounding periods in years
    
    //Input or initialize values Here
    presVal=1e2f;//$100's
    intRate=6;//6 per cent 
    
    //Process/Calculations Here
    numCmp=72/intRate;
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value = $"<<presVal<<endl;
    cout<<"Interest Rate = "<<intRate<<"%"<<endl;
    cout<<"Number of compounding periods            = "<<numCmp<<" years"<<endl;
    cout<<"Savings using FV -> Power                = $"
            <<fval1(presVal,intRate/CNVERC, numCmp)<<endl;
    cout<<"Savings using FV -> Log/Exp              = $"
            <<fval2(presVal,intRate/CNVERC, numCmp)<<endl;
    cout<<"Savings using FV -> for-Loop             = $"
            <<fval3(presVal,intRate/CNVERC, numCmp)<<endl;
    cout<<"Savings using FV -> Recursion            = $"
            <<fval4(presVal,intRate/CNVERC, numCmp)<<endl;
    cout<<"Savings using FV -> Default 12           = $"
            <<fval5(presVal,intRate/CNVERC, numCmp)<<endl;
    cout<<"Savings using FV -> Default 12           = $"
            <<fval5(presVal,intRate/CNVERC, numCmp)<<endl;
    float fnumCmp=numCmp;
    cout<<"Savings using FV -> Overload             = $"
            <<fval4(presVal,intRate/CNVERC, fnumCmp)<<endl;
    int count;
    for (int i=1; i<=4;i++){
    cout<<"Savings using FV -> Static & Reference   = $"
            <<fval6(presVal,intRate/CNVERC,numCmp,count)<<endl;
    cout<<"fval6 was called"<<count<<"times"<<endl;
    }
    cout<<"Savings using FV -> Default 12           = $"
            <<fval7(presVal,intRate/CNVERC, numCmp)<<endl;
    //Exit
    return 0;
}

//00000011111122222233333334444444455555566666677777777888888888889999999999
//34567891234567891234567891234567891234657891234567891324657891234567891324567
//                          Future Value Functions 
//Inputs:
//  pv -> present value in $'s
//  ir ->interest rate in decimal value
//  n  ->number of compounding periods (yrs)
//Outputs:
//  fv -> future value in $'s 
//00000011111122222233333334444444455555566666677777777888888888889999999999
//34567891234567891234567891234567891234657891234567891324657891234567891324567

float fval1(float pv, float ir, int n){
    return pv*pow((1+ir),n);
}
float fval2(float pv, float ir, int n){
    return pv*exp(n*log (ir));
}
float fval3(float pv, float ir, int n){
    for(int i=1; i<=n;i++){
        pv*=(1+ir);
    }
    return pv;
}
float fval4(float pv, float ir, int n){
    if (n<=0)return pv;
    return fval4(pv,ir,n-1)*(1+ir);
}
float fval5(float pv, float ir, int n){
    if (n<=0)return pv;
    return fval4(pv,ir,n-1)*(1+ir);
}
float fval4(float pv, float ir, float n){
    for(int i=1; i<=n;i++){
        pv*=(1+ir);
        return pv;
    }
}
float fval6(float pv, float ir,int n, int &cnt){
    static int count;//Default initialized to 0
    for(int i=1; i<=n;i++){
        pv*=(1+ir);
    }
    //Returns the count through the parameter list
    cnt=++count;//Increment the count of each function cell
        return pv;
}
float fval7(float pv, float ir, int n){
    for(int i=1; i<=n;i++){
        pv*=(1+ir);
    }
    if(n==12){
        cout<<"Future Value = $"<<pv<<endl;
        exit(0);
    }
        return pv;
}
