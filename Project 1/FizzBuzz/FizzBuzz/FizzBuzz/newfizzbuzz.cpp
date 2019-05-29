//  Project 1 - COP 3331
//
//  FizzBuzz
//
//  This is a modified version of the Fizz Buzz problem.
//  It has been modified so that in addition to the original
//  rules it will print "woof" for multiples of 7. For multiples
//  of 3 and 7 will print "FizzWoof" and multiples of 5 and 7
//  will print "BuzzWoof". The output has been formated so it
//  will print 5 values per line.
//
//  Created by Daniel Anzola Delgado on 1/26/17.
//  Copyright © 2017 Daniel Anzola Delgado. All rights reserved.
//

#include <iostream> 
using namespace std;

int main()
{
    //VARIABLES
    int i = 0;
    int j = 0;
    
    //PROCEDURES
    for(i=1; i<=100; i++)
    {
        //MULTIPLE OF 3 AND 5
        if( ((i%3)== 0 && (i%5) == 0))
        {
            cout << "FizzBuzz ";
            j++;
        }
        
        //MULTIPLE OF 3 AND 7
        else if((i%3)==0 && (i%7)==0)
        {
            cout << "FizzWoof ";
            j++;
        }
        
        //MULTIPLE OF 5 AND 7
        else if((i%5)==0 && (i%7)==0)
        {
            cout << "BuzzWoof ";
            j++;
        }
        
        //MULTIPLE OF 3
        else if((i%3)==0)
        {
            cout << "Fizz ";
            j++;
        }
        
        //MULTIPLE OF 5
        else if((i%5)==0)
        {
            cout << "Buzz ";
            j++;
        }
        
        //MULTIPLE OF 7
        else if((i%7)==0)
        {
            cout << "Woof ";
            j++;
        }
        
        else
        {
            cout << i << " ";
            j++;
        }
        
        //FORMAT: AFTER 5 ELEMENTS ARE PRINTED IT ENDS THE LINE
        if(j == 5)
        {
            cout << endl;
            j = 0;
        }
    }
    
    return 0;
}
