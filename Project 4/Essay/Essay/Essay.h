//
//  Assignment 4
//  Project: Essay
//  File: Essay.h
//
//  This file contains the Essay class. Which is a derived class of GradedActivity.
//
//  Created by Daniel Anzola on 3/19/17.
//

#ifndef Essay_h
#define Essay_h
#include "GradedActivity.h"

class Essay : public GradedActivity
{
private:
    double grammar;
    double spelling;
    double cLength;
    double content;
    
public:
    
    //MUTATOR GRAMMAR
    void setGrammar(int g)
    {
        grammar = g;
    }
    
    //MUTATOR SPELLING
    void setSpelling(int s)
    {
        spelling = s;
    }
    
    //MURATOR LENGTH
    void setcLength(int l)
    {
        cLength = l;
    }
    
    //MURATOR CONTENT
    void setContent(int c)
    {
        content = c;
    }


    //ACCESSOR GRAMMAR
    double getGrammar() const
    {
        return grammar;
    }

    //ACCESSOR SPELLING
    double getSpelling() const
    {
        return spelling;
    }

    //ACCESSOR CLENGTH
    double getcLength() const
    {
        return cLength;
    }

    //ACCESSOR CONTENT
    double getContent() const
    {
        return content;
    }
    
    //FUNCTION GETSCORE: THIS FUNCTIONS COMPUTES THE SUM OF THE FOUR CATEGORIES
    double getScore()
    {
        return grammar+spelling+cLength+content;
    }

    //REDEFINED FUNCTION GETLETTERGRADE: THIS FUNCTION OBTAINS THE SCORE FROM THE
    //GETSCORE FUNCTION AND CALLS THE INNER GETLETTERGRADE FUNCTION FROM THE PARENT CLASS
    char getLetterGrade()
    {
        score = getScore();
        return GradedActivity::getLetterGrade();
    }
};

#endif /* Essay_h */
