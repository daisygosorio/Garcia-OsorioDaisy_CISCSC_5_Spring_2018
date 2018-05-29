/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 29, 2018, 1:45 PM
 * Purpose:  This program takes daily sales figures over a period of time and
 *           calculates their total
 */

//System Libraries Here
#include <iostream>  // I/O LIbrary 
#include <cmath>     // Math Library
#include <iomanip>   // Formatting Library
#include <cstdlib>   // exit () function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int days;        //Number of days
    float total=0.0f; //Accumulator, initialized with 0
    
    //Input the Number of Days
    cout<<"For how many days do you have sales figures?"<<endl;
    cin>>days;
    
    //Use a Loop to get the Sales for each day and accumulate a total;
    for (int count=1; count <=days;count++){//Notice how days is the end bound
        float sales;
        cout<<"Enter the sales for day "<<count<<" : ";
        cin>>sales;
        total+=sales;//Accumulates the running total (total=total+sales)
    }
    
    //Display the total sales
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"The total sales are $"<<total<<endl;
    
   
    //Exit
    return 0;
}
