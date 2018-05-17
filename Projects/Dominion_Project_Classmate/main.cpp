/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 17, 2018, 9:45 AM
 * Purpose: Set up Dominion Project
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const char NCARDS=99;

//Function Prototypes Here
void filMny  (char[], char);//Fill Money
void filPts  (char[],char);//
void filAct  (char[],char);//
void filPlry (char[],char);//
void prntDck (char[],char, char);//
void prntPly (char[][NCARDS],char);//
void shuffle (char[],char);


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Generator 
    srand(static_cast<unsigned int>(time(0)));
    
    
    //Declare all Variables Here
    const char NPLYRS=2;//Number of Players = 2
    const char NMNY=99-2*5;//2 Players start with 5 Bronze
    const char NPTS=90-2*2;//2 Players with 2 1pt cards
    const char NACT=100;
    char mnyDeck[NMNY];
    char ptsDeck[NPTS];
    char actDeck[NACT];
    char cards[NPLYRS][NCARDS];
    
    /*Note:
     * These are static arrays that are being declared.     
    */
    
    
    //Input or initialize values Here
    filMny (mnyDeck, NMNY);//Fill Money
    filPts (ptsDeck,NPTS);
    filAct (actDeck,NACT);
    filPlry (cards,NCARDS);
    prntDck (char[],char, char);
    prntPly (char[][NCARDS],char);
    
    //Process/Calculations Here
    
    //Output Located Here
 

    //Exit
    return 0;
}
/*Note:
 * Bubble Sort 
 * Take every card and compare to the card next to them. If the card was greater
 * then the cards would swap.  
 */
void shuffle (char c[],char card){
/*Note:
 * If you look online it says that if you shuffle 7 times it is random.
 * Swapping is occurring in the lines that follow.  
 */
    for(int shfl=1;shfl<7;shfl++){
        for(int card=0;card<n;card++){
            int random=rand()&n;
            char temp=c[card];
            c[card]=c[random];
            c[random]=temp;
        }
    }
}
void prntDck (char d[],char n, char perLine){
    for(int i=0;i<n;i++){
        cout<<d[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}


void prntPly (char p[][NCARDS],char n){
    cout<<endl;
    for(int i=0);i<n;i++){
    
    }
}

void filPts (char p[],char n){
    char cnt=0
    
}
void filAct (char a[],char n){
/*Note: 10 Cards with 10 Actions3
 *The 'a'+1 is incrementing the alphabet. So a, b, c,... 
 */
    char cnt=0;
    for (int i=1;i<10;i++){
        for (int j=1;j<=10;j++){
            a[cnt++]='a'+i;
        }
    }
    if(cnt!=n)cout"Error in filling the action deck";
    
}
void filPlry (char c[][NCARDS],char n){
    //Loop for both Players 
    //Each Player gets 5 bronze cards
    for (int ply=0;i,n;i++){
        for (int card=0;card<5;card++){
            c[ply][card]='B';
        }
        //Each player gets 2 1 pts cards
        for (int card=5;card<NCARDS;card++){
            c[ply][card]='1';
        }
    }
}