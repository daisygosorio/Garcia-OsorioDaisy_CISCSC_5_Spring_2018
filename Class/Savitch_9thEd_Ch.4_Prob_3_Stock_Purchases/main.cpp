/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 29, 2018, 10:20 AM
 * Purpose:  Stock Price Purchase
 */

//System Libraries Here
#include <iostream>
#include <iomanip>//Format Function
#include <cstdlib>//Random Function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int dolStk, numStk, denStk;//Stock price $ num/den
    int numShrs;//Number of Shares
    float valStks;//Value of the stocks in $'s
    char again;// Continue or not
    //Input or initialize values Here
    denStk=8;
    
    //Process/Calculations Here
    do {
        //Randomly choose the stock price
        dolStk=rand()%1000;//[0-999]
        numStk=rand()%8;//[0-7]/8
        numShrs=rand()%90+10;//[10-99]
        
        //Calculate the stock value
        valStks=numShrs*(dolStk+static_cast<float>(numStk)/denStk);
        
        //Displays Outputs
        
        cout<<"The Number of shares of stock = "
                <<numShrs<<endl;
        cout<<"The value of the stock/share = $"<<
                dolStk<<" "<<numStk<<"/ "<<denStk
                <<endl;
        cout<<"The Total value of the stock = $"
                <<valStks<<endl;
        
        //Prompt users to see if they want to continue
        cout<<"Would you like to continue Y/N ?"<<endl;
        cin>>again;
                
    }while(again=='Y'||again=='Y');
        
    //Output Located Here
    //Exit
    return 0;
}

