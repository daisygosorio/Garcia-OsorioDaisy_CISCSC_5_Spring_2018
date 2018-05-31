/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on May 15th, 2018, 10:05 AM
 * Purpose:  Static Array of 1D and 2D
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries
#include "Array1D.h"//Identify the struct already created

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
Array1D *fillAry(int);
void prntAry(Array1D *,int);
int **fillAry(int,int);
void prntAry(int **,int,int);


//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=100;
    int rows=10;
    int cols=10;
    
    //Initialize Variables
    Array1D *array=fillAry(size);
    int **array2=fillAry(rows,cols);
    
    //Print the Array
    prntAry(array,10);
    prntAry(array2,rows,cols);
    
    //Clean Up
    delete[]array->data;
    delete array;
    //De-Allocate the columns
    for(int row=0;row<rows;row++){
        delete []array2[row];
    }
    //De-Allocate the rows
    delete []array2;
            
    //Exit stage right!
    return 0;
}
void prntAry(int **a,int rows,int cols){
    cout<<endl;
    for(int row=0;row<rows;row++){     
        for(int col=0;col<cols;col++){
            cout<<a[row][col]<<" ";                      
        }
        cout<<endl;
    }
    cout<<endl;
}

int **fillAry(int rows,int cols){
    //Allocate rows
    int **a=new int*[rows];
    //Allocate columns
    for(int row=0;row<rows;row++){
        a[row]=new int [cols];
    }
    //Fill the Array
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
            a[row][col]=rand()%90+10;
        }
    }    
    return a;
}
void prntAry(Array1D a,int n, int perLine){
    cout<<endl;
    for(int i=0;i<a.size;i++){
        cout<<a.data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
        
Array1D *fillAry(int n){
    //Allocate memory 
    Array1D*a=new Array1D;
    a->size=n;
    a->data=new int[a->size];
    
    //Fill Array
    for(int i=0;i<n;i++){
        a->data[i]=rand()%90+10;//[10,99]
    }
    return a;
}