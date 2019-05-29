//
//  FractDriver.cpp
//
//  This program performs basic math operations on fractions.
//  It computes addition, substraction, multiplication,
//  and division.
//
//  Created by Daniel Anzola Delgado on 2/19/17.
//  Copyright © 2017 Daniel Anzola. All rights reserved.
//

#include <iostream>
#include "Fraction.h"
using namespace std;

int main(int argc, const char * argv[]) {

    // VARIABLES
    Fraction obj1;
    Fraction obj2;
    Fraction result;
    
    // PROCEDURES
    
    // ASKS USER FOR FRACTIONS
    cout << "Enter the first fraction in the form a/b: ";
    cin >> obj1;
    
    cout << "Enter the second fraction in the form a/b: ";
    cin >> obj2;
    
    cout << endl;
    
    // DISPLAYS BOTH FRACTIONS
    cout << "Fraction 1: " << obj1 << endl;
    cout << "Fraction 2: " << obj2 << endl;
    
    cout << endl;
    
    // COMPUTES ADDITION
    cout << obj1 << " + " << obj2 << " = " << obj1 + obj2 << endl;
    
    // COMPUTES SUBSTRACTION
    cout << obj1 << " - " << obj2 << " = " << obj1 - obj2 << endl;
    
    // COMPUTES MULTIPLICATION
    cout << obj1 << " * " << obj2 << " = " << obj1 * obj2 << endl;
    
    // COMPUTES DIVISION
    cout << "(" << obj1 << ") / (" << obj2 <<  ") = " << obj1 / obj2 << endl;
    
    return 0;
}
