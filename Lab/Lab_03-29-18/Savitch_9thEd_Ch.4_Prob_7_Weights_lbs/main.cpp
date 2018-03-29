/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Narch 29, 2018, 12:00 PM
 * Purpose:  My attraction to the Earth
 */

//System Libraries Here
#include <iostream>//I/O Library --> cout, endl
#include <iomanip>//FOrmat Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float GRAVITY=6.673e-8;//cm^3/g/sec^2
const float CMMTRS=0.01f;//Centimeters to Meters
const float MTRSFT=3.28f;//Meters to feet
const float LBSLUG=32.174f;// Pounds per Slug
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float myMass,msEarth, rEarth, myWt,myWtCnv;
    
    //Input or initialize values Here
    myMass=6;//6 slugs
    myWtCnv=myMass*LBSLUG;//Converted weight
    msEarth=5.972e27f;//grams
    rEarth=6.371e6f;//meters
    
    //Process/Calculations Here
    myWt=GRAVITY*CMMTRS*CMMTRS*CMMTRS
            *myMass*msEarth*MTRSFT
            /(rEarth*rEarth);
    
    //Output my Weight
    cout<<fixed<<setprecision(0)<<endl;
    cout<<myMass<<" slugs = "<<myWt<<" lbs "<<endl;
    cout<<myMass<<" slugs = "<<myWtCnv<<" lbs "<<endl;

    //Exit
    return 0;
}

