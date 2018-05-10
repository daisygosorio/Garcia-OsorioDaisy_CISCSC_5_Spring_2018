/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 3, 2018, 9:40 AM
 * Purpose:  
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
void rdFile(ifstream &, char [],int);
void wrtFile(ofstream &, char [],char [],int);
int score(char [], char [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int NQSTNS=20;//Number of Questions 
    char key[NQSTNS], answers[];//Answers and key
    char keyFlNm[]="key.dat";
    string ansFlNm="answers.dat";
    char scrFlNm="score.dat";
    ifstream keyFl,ansFl;
    ofstream scrFl;
    
    
    //Input or initialize values Here
    keyFl.open(keyFlNm);
    ansFl.open(ansFlNm.c_str());
    scrFl.open(scrFlNm);
    
    
    
    //Process/Calculations Here
    rdFile(keyFl,key,NQSTNS);
    rdFile(ansFl,answers,NQSTNS);
    wrtFile(scrFl, key, answers, NQSTNS);
    int scrs=score(char [],char[],int);
    
   
    
    //Output Located Here
    cout<<"The % Score Received = "<<100.0f*scrs/NQSTNS*100<<endl;
    
    //Close files
    keyFl.close();
    ansFl.close();
    scrFl.close();
    
    //Exit
    return 0;
}
void rdFile(ifstream & in , char keyAns[],int size){
    for(int i=0;i<size;i++){
        in>>keyAns[i];
    }

}
void wrtFile(ofstream & out, char key [], char ans[],int size){
    for(int i=0;i<size;i++){
        if(key[i]==ans[i])out<<i<<". Correct"<<endl;
        else out<<i<<".Incorrect"<<endl;
    }
}
int score(char ans[], char key[],int size){
    int correct=0;
    for(int i=0,i<size;i++){
        if(key[i]==ans[i])correct++;
    }
    return correct;
}
