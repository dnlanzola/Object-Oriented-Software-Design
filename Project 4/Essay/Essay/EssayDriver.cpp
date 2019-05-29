//
//  Assignment 4
//  Project: Essay
//  File: EssayDriver.cpp
//
//  This program determines the letter grade, given the scores of four categories
//  (grammar, spelling, correct length, and content), of an essay.
//
//
//  Created by Daniel Anzola on 3/19/17.
//

#include <iostream>
#include "Essay.h"

using namespace std;

bool check20(int num);
bool check30(int num);

int main(int argc, const char * argv[])
{
    //VARIABLES
    double Gpoints = 0.0;
    double Spoints = 0.0;
    double Lpoints = 0.0;
    double Cpoints = 0.0;
    bool error = true;
    
    
    while (error == true)
    {
        //GET GRAMMAR POINTS (THIS NUMBER IS CHECKED IF IN RANGE 0 - 30)
        cout << "How many grammar points did the student earn? (0 - 30): ";
        cin >> Gpoints;
        
        if (check30(Gpoints) == true)
            cout << "Invalid. Enter a number from 0 through 30." << endl;
        else
            error = false;
    }
    
    error = true;
    while (error == true)
    {
        //GET SPELLING POINTS (THIS NUMBER IS CHECKED IF IN RANGE 0 - 20)
        cout << "How many spelling points did the student earn? (0-20): ";
        cin >> Spoints;

        if (check20(Spoints) == true)
            cout << "Invalid. Enter a number from 0 through 20." << endl;
        else
            error = false;
    }
    
    error = true;
    while (error == true)
    {
        //GET LENGTH POINTS (THIS NUMBER IS CHECKED IF IN RANGE 0 - 20)
        cout << "How many points for length did the student earn? (0 - 20): ";
        cin >> Lpoints;
        
        if (check20(Lpoints) == true)
            cout << "Invalid. Enter a number from 0 through 20." << endl;
        else
            error = false;
    }
    
    error = true;
    while (error == true)
    {
        //GET CONTENT POINTS (THIS NUMBER IS CHECKED IF IN RANGE 0 - 30)
        cout << "How many points for content did the student earn? (0 - 30): ";
        cin >> Cpoints;
    
        if (check30(Cpoints) == true)
            cout << "Invalid. Enter a number from 0 through 30." << endl;
        else
            error = false;
    }
    
    //CREATION OF AN ESSAY OBJECT
    Essay obj;
    
    //STORES POINTS FOR EACH CATEGORY IN ESSAY OBJECT
    obj.setGrammar(Gpoints);
    obj.setSpelling(Spoints);
    obj.setcLength(Lpoints);
    obj.setContent(Cpoints);
    
    cout << endl;
    
    //DISPLAYS POINTS FOR EACH CATEGORY
    cout << "Grammar points: " << obj.getGrammar() << endl;
    cout << "Spelling points: " << obj.getSpelling() << endl;
    cout << "Length points: " << obj.getcLength() << endl;
    cout << "Content points: " << obj.getContent() << endl;
    
    //DISPLAYS OVERALL SCORE
    cout << "Overall score: " << obj.getScore() << endl;
    
    //DISPLAYS LETTER GRADE
    cout << "Grade: " << obj.getLetterGrade() << endl;
     
    return 0;
}
//END OF MAIN



// Function: check20
// Evaluates if a number is less than 0 or greater than 20.
bool check20(int num)
{
    if (num < 0 || num > 20)
        return true;
    
    return false;
}

// Function: check30
// Evaluates if a number is less than 0 or greater than 30.
bool check30(int num)
{
    if (num < 0 || num > 30)
        return true;
    
    return false;
}

