/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on April 26, 2018, 12:10 PM
 * Purpose:  Shooter Program
 */

//System Libraries Here
#include <iostream>// I/O LIbrary 
#include <cmath>//Math Library
#include <iomanip>//Formatting Library
#include <cstdlib>//Srand
#include <ctime>//
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions


//Function Prototypes Here
float frand();//Probability from 0 to 1 
bool shoot(float);
void shoot(bool, float, bool &, bool&);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    bool aLive, bLive, cLive;
    char remain;
    float aPk, bPk, cPk;
    int aCnt, bCnt, cCnt;
    
    //Initialize 
    aCnt=bCnt=cCnt=0;
    aPk=1.0f/3.0f;
    bPk=1.0f/2.0f;
    cPk=1.0f;
    
    //Counting 
    
    aLive=bLive=cLive=true;
    
    //Test the shoot function
    int count=0;
    for (int i=1;i<1000;i++){
        if (shoot (aPk))count++;
    }
    cout<<count<<endl;
    
    //Map/Process Inputs to Outputs
    do{
        shoot(aLive,aPk, cLive,bLive);
        shoot(bLive,bPk, cLive,aLive);
        shoot(cLive,cPk, bLive,aLive);
            if(aLive){
                if(cLive)           cLive=shoot(aPk);
                else if (bLive)     bLive=shoot(aPk);
                
            }if (bLive){
                if (cLive)         cLive=shoot(bPk);
                else if (aLive)    aLive=shoot(bPk);
            }if (cLive){
                if(bLive)bLive=shoot(cPk);
                else if (aLive)    aLive=shoot(cPk);
            }  
           remain=aLive+bLive+cLive;
    }while(remain>1);
            
    //Output
    cout<<"Aaron Pk ="<<aPk<<endl;
    cout<<"Bob Pk   ="<<aPk<<endl;
    cout<<"Carl Pk  ="<<aPk<<endl;
    cout<<"Aaron is "<<(aLive?"Alive":"Deceased")<<endl;
    cout<<"Bob   is "<<(bLive?"Alive":"Deceased")<<endl;
    cout<<"Carl  is "<<(cLive?"Alive":"Deceased")<<endl;        
    
    //Exit
    return 0;
}
bool shoot (float pk){
    if(frand()>pk)return true;
    return false;
}

float frand(){
    static float MAXRAND=pow(2,31)-1;
    return rand()/MAXRAND;
}
void shoot(bool aLive, float, bool &, bool&){
if(aLive){
         if(cLive)           cLive=shoot(aPk);
         else if (bLive)     bLive=shoot(aPk);
}
