/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 15, 2018, 10:05 AM
 * Purpose:  Investigate Sort
 */

//System Libraries Here
#include <iostream>// I/O LIbrary 
#include <ctime>//
#include <cstdlib>//exit () function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void filAry(int[],int);
void prntAry(int[], int, int);
void mrkSort(int[], int);
void swap(int & ,int &);
void swapLgc(int &,int &);
void smlLst(int [],int,int);
int  binSrch(int [],int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
   
    //Initialize values Here
    filAry(array,SIZE);
    
    //Print Array
    prntAry(array,SIZE,10);
    
    //Process/Calculations Here
    mrkSort(array,SIZE);
    
    //Output Located Here
    prntAry(array,SIZE,10);
    
    //Find an element
    int find=50;
    cout<<find<<" was found at index = "
            <<binSrch(array, SIZE, find)<<endl;
  
    //Exit
    return 0;
}
int binSrch(int a[],int n, int val){
    //Declare and Initialize Variables 
    int beg, end, middle;
    beg=0;
    end=n;
    //Loop and Find
    do{
        middle=(end+beg)/2;
        if (a[middle]==val)return middle;
        else if (a[middle]>val){
            end=middle-1;
        }else{
            beg=middle+1;
        }
    }while(end>=beg);
    return -1;
}

void mrkSort(int a[], int n){
    for(int i=0; i<n-1;i++){
        smlLst(a,n,i);
    }
}

void smlLst(int a[], int n, int pos){
    for(int i=pos+1;i<n;i++){
        if (a[i]<a[pos])swap(a[i], a[pos]);
    }
}

void swapLgc(int &a, int &b){
    /*Note:
     * a=a^b
     * b=a^b=(a^b)^b=a
     * a=a^b=(a^b)^a=b
     */
    
    a=a^b;
    b=a^b;
    a=a^b;
}

void swap(int &a,int &b){
    /*Note:
     * This is commonly used and the same as the void swapLgo
     */
    int temp=a;
    a=b;
    b=temp;
    
}

void prntAry(int a[], int n, int perLine){
    cout<<endl;
    for(int i=0;1<n;i++){
        cout<<a[i]<<" ";
        if (i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
void filAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10,99]
    }
}