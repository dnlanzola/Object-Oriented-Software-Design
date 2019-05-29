//
//  TempDriver.cpp
//  This program determines the minimum and maximum
//  of two values using templates.
//
//  Created by Daniel Anzola Delgado on 4/6/17.
//

#include <iostream>
#include "FeetInches.h"
using namespace std;

// TEMPLATE FOR MAXIMUM VALUES
template <class T>
T maximum (T value1, T value2)
{
    T maximumValue = value1;
    
    if (value2 > maximumValue)
        maximumValue = value2;
    
    return maximumValue;
}

// TEMPLATE FOR MINIMUM VALUES

template <class T>
T minimum (T value1, T value2)
{
    T minimumValue = value1;
    
    if (value2 < minimumValue)
        minimumValue = value2;
    
    return minimumValue;
}




int main(int argc, const char * argv[]) {
    
    // VARIABLES
    int valI1;
    int valI2;
    
    double valD1;
    double valD2;
    
    string valS1;
    string valS2;
    
    FeetInches obj1;
    FeetInches obj2;

    
    // PROCEDURES
    
    // ASKS USER FOR TWO INTEGERS
    cout << "Enter the two integers: " << endl;
    cin >> valI1 >> valI2;
    
    // PRINTS MIN AND MAX
    cout << "The minimum of " << valI1 << " and " << valI2 << " is: " <<  minimum(valI1,valI2)<< endl;
    cout << "The maximum of " << valI1 << " and " << valI2 << " is: " << maximum(valI1,valI2) << endl;
    cout << endl;
    
    // ASKS USER FOR TWO FLOAT NUMBERS
    cout << "Enter two floating point numbers: " << endl;
    cin >> valD1 >> valD2;
    
    // PRINTS MIN AND MAX
    cout << "The minimum of " << valD1 << " and " << valD2 << " is: " << minimum(valD1,valD2) << endl;
    cout << "The maximum of " << valD1 << " and " << valD2 << " is: " << maximum(valD1, valD2) << endl;
    cout << endl;
    
    // ASKS USER FOR TWO STRINGS
    cin.ignore();
    cout << "Enter first string: " << endl;
    getline (cin, valS1);
    
    cout << "Enter second string: " << endl;
    getline (cin, valS2);
    
    // PRINTS MIN AND MAX
    cout << "The minimum of " << valS1 << " and " << valS2 << " is: " << minimum(valS1,valS2) << endl;
    cout << "The maximum of " << valS1 << " and " << valS2 << " is: " << maximum(valS1, valS2) << endl;
    cout << endl;
    
    // ASKS USER FOR TWO DISTANCES
    cout << "Enter the first distance (in feet, inches format): " << endl;
    cin >> obj1;
    
    cout << "Enter the second distance (in feet, inches format): " << endl;
    cin >> obj2;
    
    // PRINTS MIN AND MAX
    cout << "The minimum of " << obj1 << " and " << obj2 << " is: " << minimum(obj1, obj2) << endl;
    cout << "The maximum of " << obj1 << " and " << obj2 << " is: " << maximum(obj1, obj2) << endl;
    
    return 0;
}
