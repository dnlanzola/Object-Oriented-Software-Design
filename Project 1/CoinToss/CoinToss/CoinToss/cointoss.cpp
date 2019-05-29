//
//  Project 1
//  CoinToss
//
//  This program simulates a coin toss and determines
//  if it is realistic.
//
//  Created by Daniel Anzola Delgado on 1/26/17.
//  Copyright © 2017 Daniel Anzola Delgado. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int tossCoin();
bool realistic(int h, int tosses);

int main(int argc, const char * argv[])
{
    //VARIABLES
    srand(static_cast <unsigned int> (time(0)));
    int heads = 0;
    int tails = 0;
    int coin = 0;
    int times = 0;
    int i = 0;
    int j = 0;
    bool valid = false;
    bool real = false;
    
    //PROCEDURES
    
    //THIS LOOPS HELP TO READ INPUT UNTIL THE USER
    //INPUTS A VALID NUMBER
    while (valid == false)
    {
        //ASKS USER TO ENTER NUMBER OF TOSSES
        cout << "Enter number of times you want to toss the coin: ";
        //READS INPUT
        cin >> times;
        
        //CHECKS IF THE INPUT IS LESS THAN 10
        if (times < 10)
            cout << "ERROR: Number of tosses must be greater than 10.\n";
        else
            valid = true;
    }
    
    while( i <= (times - 1))
    {
        //GENERATES A NEW RANDOM COIN (EITHER TAIL OR HEADS)
        coin = tossCoin();
        
        //IF THE COIN HOLDS '0' IT WILL BE HEADS
        if(coin == 0)
        {
            cout << "Heads ";
            heads++;
        }
        
        //IF THE COIN HOLDS '1' IT WILL BE TAILS
        if( coin == 1)
        {
            cout<<"Tails ";
            tails++;
        }
        
        i++;
        j++;
        
        //FORMAT: AFTER 10 COINS PRINTED IT WILL END THE LINE
        if (j == 10)
        {
            cout << "\n";
            j = 0;
        }
    }//END WHILE
    
    //PRINTS NUMBER OF HEADS AND TAILS
    cout << "\nTotal number of Heads: " << heads;
    cout << "\nTotal number of Tails: " << tails << endl;
    
    //PRINTS IF SIMULATION IS REALISTIC OR NOT
    cout << "This simulation is ";
    //CALLS FUNCTION THAT DETERMINES IF REALISTIC OR NOT.
    real = realistic(heads, times);
    if (real == true)
        cout << "realistic.\n" << endl;
    else
        cout << "not realistic.\n" << endl;
    
    
    return 0;
}

//FUNCTION: tossCoin
//RETURNS A RANDOM NUMBER EITHER 0 OR 1
int tossCoin()
{
    return rand() % 2;
}

//FUNCTION: realistic
//BASED ON THE NUMBER OF HEADS AND TOSSES IT WILL
//DETERMINE IF THE FUNCTION IS REALISTIC OR NOT
bool realistic(int h, int tosses)
{
    int k;
    
    //FORMULA TO OBTAIN THE PERCENTAGE
    k = (h * 100) / tosses;
    
    //CHECKS IF THE PERCENTAGE IS WITHIN THE RANGE OF 45% AND 55%
    if (k >= 45 && k <= 55)
        return true;
 
    return false;
}
