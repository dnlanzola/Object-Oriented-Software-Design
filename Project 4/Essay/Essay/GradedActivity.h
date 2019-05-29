//
//  Assignment 4
//  Project: Essay
//  File: GradedActivity.h
//
//  This file contains the GradedActivity class.
//
//  Created by Daniel Anzola on 3/19/17.
//

#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H


// GradedActivity class declaration

class GradedActivity
{
protected:
    double score;   // To hold the numeric score

public:
    //DEFAULT CONSTRUCTOR
    GradedActivity()
    {
        score = 0.0;
    }
    
    //CONSTRUCTOR
    GradedActivity(double s)
    {
        score = s;
    }
    
    //MUTATOR SCORE
    void setScore(double s)
    {
        score = s;
    }
    
    //ACCESSOR SCORE
    double getScore() const
    {
        return score;
    }
    
    //GETLETTERGRADE FUNCTION: THIS FUNCTION COMPUTES THE LETTER GRADE FROM A NUMERIC SCORE
    char getLetterGrade() const
    {
        char letterGrade; // To hold the letter grade
        
        if (score > 89)
            letterGrade = 'A';
        else if (score > 79)
            letterGrade = 'B';
        else if (score > 69)
            letterGrade = 'C';
        else if (score > 59)
            letterGrade = 'D';
        else
            letterGrade = 'F';
        
        return letterGrade;
    }
};
#endif
