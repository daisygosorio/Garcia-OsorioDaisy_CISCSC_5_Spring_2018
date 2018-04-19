/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 19, 2018, 11:35 AM
 * Purpose: Calculating 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PI=4*atan(1);//Definition of PI

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int n, fctr1;
    
    
    //Input or initialize values Here
    fctr1=1;
    n=10;
            
    //Process/Calculations Here
    for (int i=1;i<=n;i++){
        fctr1*=i;
    }
    
    //Output Located Here
    cout<<n<<"! = "<<fctr1<<endl; 
    //Exit
    return 0;
}

