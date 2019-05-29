//
//  FeetInches.h
//  Template
//
//  Created by Daniel Anzola on 4/6/17.
//  Copyright © 2017 Daniel Anzola. All rights reserved.
//

#ifndef FEETINCHES_H
#define FEETINCHES_H
#include <stdio.h>
#include <iostream>
using namespace std;
// The FeetInches class holds distances or measurements
// expressed in feet and inches.

class FeetInches
{
private:
    int feet;        // To hold a number of feet
    int inches;      // To hold a number of inches

public:
    // Constructor
    FeetInches(int f = 0, int i = 0)
    { feet = f;
        inches = i;
        }
    
    // Mutator functions
    void setFeet(int f)
    { feet = f; }
    
    void setInches(int i)
    { inches = i;
         }
    
    // Accessor functions
    int getFeet() const
    { return feet; }
    
    int getInches() const
    { return inches; }
    
    // Overloaded operator functions
    bool operator > (const FeetInches &right)
    {
        bool decision = false;
        
        if (feet > right.feet)
            decision = true;
        else
        {
            if ((feet == right.feet && inches > right.inches))
                decision = true;
            else
                decision = false;
        }
        
        return decision;
        
    }
    
    
    bool operator < (const FeetInches &right)
    {
        bool decision = false;
        
        if (feet < right.feet)
            decision = true;
        else
        {
            if ((feet = right.feet && inches < right.inches))
                decision = true;
            else
                decision = false;
        }
        
        return decision;
        
    }
  
    
    friend ostream& operator<<(ostream& os, const FeetInches& values)
    {
        
        //prints in "# feet # inches" format
        
        os << values.feet << " feet " << values.inches << " inches";
        
        return os;
        
    }
    
    
    
    //overload the operator >>
    
    friend istream& operator>>(istream& is, FeetInches& values)
    {
        
        char ch;
        
        
        
        is >> values.feet;     //get the feet
        
        is >> ch;                     //read and discard the ' '
        
        is >> values.inches;   //get the inches

        
        
        
        return is;
        
    }
    
    
    
    
    
};

#endif

