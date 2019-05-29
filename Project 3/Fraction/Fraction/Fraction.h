//
//  Fraction.h
//  The Fraction Class
//
//  Created by Daniel Anzola Delgado on 2/19/17.
//  Copyright © 2017 Daniel Anzola. All rights reserved.
//

#ifndef Fraction_h
#define Fraction_h
using namespace std;

// CLASS FRACTION
class Fraction
{
private:
    int numerator;
    int denominator;
    
    void simplify();
    int gcd(int num, int den);
    
public:
    // CONSTRUCTOR WITH 0 AND 1 AS PARAMETERS
    Fraction(int n=0, int d=1);
    Fraction operator+(const Fraction& fract2);
    Fraction operator-(const Fraction& fract2);
    Fraction operator*(const Fraction& fract2);
    Fraction operator/(const Fraction& fract2);
    friend ostream& operator<<(ostream&, const Fraction&);
    friend istream& operator>>(istream&, Fraction&);
};



#endif /* Fraction_h */
