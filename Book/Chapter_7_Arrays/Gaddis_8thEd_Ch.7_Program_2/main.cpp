/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 17, 2018, 9:35 AM
 * Purpose: Program 7-1 rewritten
 *          Using two for loops
 *          One for inputting the values into the array
 *          Another for displaying the contents of the array
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int numEmpy=6;//Number of Employees =6
    int hours[numEmpy];//Each Employee's hours
    int count;//Loop counter
   
    //Input
    
    //Process/Calculations Here
    for(count=0;count<numEmpy;count++){
       cout<<"Enter the Number of Hours Worked by Each Employee"
               <<(count+1)<<" : ";
       /*Note:
        * (count+1) means ...
        * hours for employee number 1 are stored in hours[0]
        * hours for employee number 2 are stored in hours[1] and so on
        */
       cin>>hours[count];
    }
    
    
    //Output Located Here
    cout<<"The Hours you entered are :"<<endl;
    for (count=0;count<numEmpy;count++)
        cout<<" "<<hours[count];
    cout<<endl;
    
    //Exit
    return 0;
}
/*Note:
 * This is program 7-1.
 * 7-1 shows the array hours being used to store and display values entered by
 * the user.
 * 
 * 
 * //Declare all Variables Here
 * const int numEmpy=6;//Number of Employees =6
 * int hours[numEmpy];
 *  
 * //Input the Number of Hours Worked by Each Employee
 *   cout<<"Enter the Number of Hours Worked by Each Employee"<<endl;
 *   cin>>hours[0];
 *   cin>>hours[1];
 *   cin>>hours[2];
 *   cin>>hours[3];
 *   cin>>hours[4];
 *   cin>>hours[5];
 *   
 * 
 * //Process/Calculations Here   
 * 
 * //Output Located Here
 *  cout<<"The Hours you entered are"<<endl;
 *  cout<<"  "<<hours[0];
 *  cout<<"  "<<hours[1];
 *  cout<<"  "<<hours[2];
 *  cout<<"  "<<hours[3];
 *  cout<<"  "<<hours[4];
 *  cout<<"  "<<hours[5]<<endl;
 * 
 * //Exit
 *  return 0;
 */

