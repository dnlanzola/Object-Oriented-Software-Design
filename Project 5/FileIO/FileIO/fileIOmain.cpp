//
//  fileIOmain.cpp
//  Assignment #5
//
//  This program reads a file and counts the number of values within the file.
//  Also, it computes the sum of the values and the average.
//
//  Created by Daniel Anzola Delgado on 3/30/17.
//

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {

    // VARIABLES
    string fileName;
    ifstream inFile;
    int counter = 0;
    int sum = 0;
    int value = 0;
    double average = 0.0;
    
    // GETS THE NAME OF THE FILE FROM USER
    cout << "Enter the filename: ";
    getline (cin,fileName);
    
    // OPENS THE FILE
    inFile.open(fileName);
    
    // LOOP TO COUNT AND COMPUTE SUM OF VALUES WITHIN THE FILE
    while (inFile >> value)
    {
        counter++;
        sum = sum + value;
        average = average + value;
    }
    
    // COMPUTES AVERAGE
    average = average/counter;
    
    // SETS COUT TO DISPLAY TWO DECIMAL PLACES
    cout << setprecision(2) << fixed;
    
    
    // DISPLAY RESULTS
    // NUMBER OF VALUES IN THE FILE
    cout << "Number of numbers: " << counter << endl;
    // SUM OF THE VALUES
    cout << "Sum of the numbers: " << sum << endl;
    // AVERAGE OF THE VALUES
    cout << "Average of the numbers: " << average << endl;
    

    return 0;
}
