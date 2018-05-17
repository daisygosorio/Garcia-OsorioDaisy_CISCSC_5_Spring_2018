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
void filDeck(char[],char);
char suit(char);
char face(char);
void shuffle(char[],char);
void prtDeck (char[],char,char);
void selSort(char[],char);
void deal(char[],char, char[],char);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Seeding the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const char DECKSZ=52;//Deck Size =52
    char deck[DECKSZ];
    const char HNDSZ=5;
    char hand[HNDSZ];
    
    //Input or initialize values Here
    filDeck(deck,DECKSZ);
    shuffle(deck,DECKSZ);
    selSort(deck,DECKSZ);
    prtDeck (deck,DECKSZ,13);
    for (int tryit=1;tryit<=10;tryit++){
        deal (deck,DECKSZ,hand,HNDSZ);
        prtDeck (deck,HNDSZ,HNDSZ);
    }
    prtDeck (deck,DECKSZ,13);


    /*Note:
     * So Basically your deck of cards is an array. 
     */
    
    //Process/Calculations Here
   
    
    //Output Located Here
   
    //Exit
    return 0;
}

void deal(char deck[],char nDkCrds, char hand[],char nHdCrds){
    static char current=0;
    if (current>nDkCrds-nHdCrds){
        shuffle(deck, nDkCrds);
        current=0;
    }
    for (int card=0; card<nHdCrds;card++){
        hand[card]=deck[current++];
    }
}
 /*Note:
 * Selection Sort searches for min value in order to sort
 * 
 */
void selSort(char deck[],char dkSize){
    for(int lstSize=0;lstSize<dkSize-1;lstSize++){
        char idxSml=lstSize;
        for(int fndSml=lstSize+1;fndSml<dkSize;fndSml++){
            if (deck[idxSml]>deck[fndSml]{
                idxSml=fndSml;
            }
        }
        char temp=deck[lstSize];
        deck[lstSize]=deck[idxSml];
        deck[idxSml]=temp;
    }

}
void filDeck(char c[],char n){
    for (int eachCrd=0;eachCrd<n;eachCrd++){
        c[eachCrd]=eachCrd;
    }
}
char suit(char card){
    string suitVal="SDCH";
    return suitVal[card/13];
}
char face(char card){
    string faceVal="A23456789TJQK";
    return faceVal[card%13];
}
void shuffle(char c[],char nCard){
    for(int shfl=1;shfl<=7;shfl++){
        for (int card=0;card<nCard;card++){
            int random=rand()%nCard;
            char temp=c[card];
            c[card]=c[random];
            c[random]=temp;
         }
    }

}

void prtDeck (char deck[],char nCard, char perLine){
    for(int card=0;card<nCard;card++){
        cout<<face(deck[card])<<suit(deck[card])<<" ";
        if{card%perLine==(perLine-1)}cout<<endl;
    }

}