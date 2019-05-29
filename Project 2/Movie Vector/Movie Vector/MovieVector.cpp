//
//  MovieVector.cpp
//  Movie Vector
//
//  This progtamallows the user to enter movie
//  information, which is then stored in a vector.
//
//  Created by Daniel Anzola Delgado on 2/2/17.
//  Copyright © 2017 Daniel Anzola. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

struct movie
{
    string title;
    string director;
    int year;
    int time;
};

void ObtainMovieInfo(movie &obj);
void PrintMovies(vector <movie> pMovies, int size);

    int i = 0;

int main(int argc, const char * argv[]) {

    //VARIABLES

    char option;
    bool check = 0;
    
    movie temp;
    vector <movie> movies;
    
    //PROCEDURES
    while (check == 0)
    {
        
        // GETS MOVIE INFO
        ObtainMovieInfo(temp);
        
        // INSERTS MOVIE INFO IN VECTOR
        movies.push_back(temp);
        
        //VARIABLE FOR KEEPING TRACK OF SIZE OF VECTOR
        i++;
        

        // ASKS IF USER WANTS TO INPUT ANOTHER MOVIE
        cout << "Do you have more movie info to enter?" << endl;
        cout << "Enter y/Y for yes or n/N for no: ";
        cin >> option;
        
        // CONDITION TO END LOOP
        // CHECKS YES OR NO
        option = toupper(option);
        
        if (option == 'N')
            check = 1;
        
        //FIX READING LINE AFTER FIRST MOVIE
        cin.ignore();
        
    }//END WHILE
    
    // PRINTS ALL THE MOVIES
    PrintMovies(movies, i);
    
    return 0;
}

// OBTAINS MOVIE INFO FROM USER
void ObtainMovieInfo(movie &obj)
{
    cout << "Enter the title of the movie: ";
    getline(cin, obj.title);
    
    cout << "Enter the director's name: ";
    getline(cin, obj.director);
    
    cout << "Enter the year the movie was created: ";
    cin >> obj.year;
    
    cout << "Enter the movie length: ";
    cin >> obj.time;
}


// PRINTS THE VECTOR OF MOVIES
void PrintMovies(vector <movie> pMovies, int size)
{
    int i = 0;
    
    cout << "\nHere is the info that you entered:" << endl;
    while(i < size)
    {
        cout << "Movie Title: " << pMovies[i].title << endl;
        
        cout << "Movie Director: " << pMovies[i].director << endl;
        
        cout << "Movie Year: " << pMovies[i].year << endl;
        
        cout << "Movie Length: " << pMovies[i].time << endl;
        
        cout << "\n\n";
        
        i++;
    }
}


