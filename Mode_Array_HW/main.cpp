/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on September 12, 2018, 1:30 PM
 * Purpose: Mode Array Routine
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
int *fillAry(int, int);
void prntAry(int*, int, int);
void swap (int &, int &);
void smlLst (int *, int, int);
void mrkSort(int *, int);
void shufle(int *, int, int);


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static)
    
    //Declare all Variables Here
    int size=100;
    int mod=10;
    int *array=fillAry(size, mod);
    
    //Input or initialize values Here
    
    //Print Array
    prntAry(array,size,mod);
    
    //Shuffle Array
    shufle(array,size,7);
    
    //Process/Calculations Here
    mrkSort(array,size);
    
    //Output Located Here
    prntAry(array,size,mod);
    
    //Clean Memory
    /* Note: This is important think of Dr.Lehr drunk party example. 
     * In other words do not forget this part ever. 
     */
    delete []array;
    
    //Exit
    return 0;
}
void shufle(int *a, int n, int nShuf){
    for(int shuf=1;shuf<=nShuf;shuf++){
        for(int i=0;i<n;i++){
            int temp=rand()%n;
            if (i!=temp)swap(a[i],a[temp]);//This allows for no swapping of 
                                           //element to occur with itself 
        }
    }
}
void mrkSort(int *a, int n){
    for (int i=0;i<n-1;i++){
        smlLst(a,n,i);
    }
}
void smlLst (int *, int, int){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[]i>)swap(a[pos],a[i])
    }
}
void swap (int &a, int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}
void prntAry(int *a,int n, int perLine){
    cout<<endl;
    for (int i=0; i<n;i++){
        cout<<a[i]<<" ";
        if(i&perLine==(perLine-1))cout<<endl;
    }

}
int *fillAry(int n, int m){
    int *array=new int[n];
    for (int i=0;i<n;i++){
        array[i]=i&m;
    }
}
