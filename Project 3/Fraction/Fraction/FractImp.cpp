//
//  FractImp.cpp
//  The Fraction Implementation File
//
//  Created by Daniel Anzola Delgado on 2/19/17.
//  Copyright © 2017 Daniel Anzola. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Fraction.h"
using namespace std;

// CONSTRUCTOR
Fraction::Fraction(int n, int d)
{
    numerator = n;
    denominator = d;
}

//FUNCTION ADDITION: COMPUTES ADDITION OF TWO FRACTIONS
Fraction Fraction::operator+(const Fraction& fract2)
{
    Fraction result;
    
    // IF BOTH DENOMINATORS ARE EQUAL
    if (denominator == fract2.denominator)
    {
        result.numerator = numerator + fract2.numerator;
        result.denominator = denominator;
    }
    // IF DIFFERENT
    else
    {
        result.numerator = numerator*fract2.denominator + fract2.numerator*denominator;
        result.denominator = denominator*fract2.denominator;
    }
    
    //SIMPLIFIES THE RESULT
    result.simplify();
    return result;
}

//FUNCTION SUBSTRACTION: COMPUTES SUBSTRACTION OF TWO FRACTIONS
Fraction Fraction::operator-(const Fraction& fract2)
{
    Fraction result;
    
    // IF BOTH DENOMINATORS ARE EQUAL
    if (denominator == fract2.denominator)
    {
        result.numerator = numerator - fract2.numerator;
        result.denominator = denominator;
    }
    // IF DIFFERENT
    else
    {
        result.numerator = numerator*fract2.denominator - fract2.numerator*denominator;
        result.denominator = denominator*fract2.denominator;
    }
    
    //SIMPLIFIES THE RESULT
    result.simplify();
    return result;
}

//FUNCTION MULTIPLICATION: COMPUTES MULTIPLICATIONS OF TWO FRACTIONS
Fraction Fraction::operator*(const Fraction& fract2)
{
    Fraction result;
    
    result.numerator = numerator * fract2.numerator;
    result.denominator = denominator * fract2.denominator;
    //SIMPLIFIES THE RESULT
    result.simplify();

    
    return result;
}

//FUNCTION DIVISION: COMPUTES DIVISION OF TWO FRACTIONS
Fraction Fraction::operator/(const Fraction& fract2)
{
    Fraction result;
    
    result.numerator = numerator * fract2.denominator;
    result.denominator = denominator * fract2.numerator;
    //SIMPLIFIES THE RESULT
    result.simplify();
    
    
    return result;
}

// FUNCTION GREATEST COMMON DIVISION (GCD): computes the GCD of a fraction.
int Fraction::gcd(int num, int den)
{
    int aux = num % den;
    while(aux != 0)
    {
        num = den;
        den = aux;
        aux = num % den;
    }
    return den;
}

// FUNCTION SIMPLIFY: simplifies fractions.
void Fraction::simplify()
{
    int common = gcd(numerator,denominator);
    
    // IF THE GCD IS 1 OR -1 THERE IS NO SIMPLIFICATION
    if (common != 1 && common != -1)
    {
        numerator = numerator / common;
        denominator = denominator / common;
    }

}

//overload the operator <<

ostream& operator<<(ostream& os, const Fraction& fraction)

{
    
    //note that we print out a / as it is simply easier to do so!
    
    os << fraction.numerator << " / " << fraction.denominator;
    
    return os;
    
}



//overload the operator >>

istream& operator>>(istream& is, Fraction& fraction)

{
    
    char ch;
    
    
    
    is >> fraction.numerator;     //get the numerator
    
    is >> ch;                     //read and discard the '/'
    
    is >> fraction.denominator;   //get the denominator
    
    
    
    return is;
    
}
