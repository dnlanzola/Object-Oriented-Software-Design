//
//  empDriver.cpp
//  Employee Class Driver
//
//  Driver program that tests the Employee class.
//
//  Created by Daniel Anzola Delgado on 2/2/17.
//  Copyright © 2017 Daniel Anzola. All rights reserved.
//

#include <iostream>
#include <string>
#include "Employee.h"

int raise(int n);
void print(Employee aux);

int main(int argc, const char * argv[]) {

    // VARIABLES
    Employee codedEmployee{"Nicole Watterson",42000};
    Employee newEmployee{};
    string tempName;
    int tempSalary;
    
    
    // PROCEDURES
    
    // ASKS USER TO INPUT EMPLOYEE INFO
    cout << "Enter an employee name: ";
    getline(cin, tempName);
    
    // SETS EMPLOYEE NAME
    newEmployee.setName(tempName);
    
    cout << "Enter the employee's monthly salary: ";
    cin >> tempSalary;
    
    // SETS EMPLOYEE SALARY
    newEmployee.setSalary(tempSalary);
 
    // PRINTS EMPLOYEES
    print(codedEmployee);
    print(newEmployee);
    
    // COMPUTES 10% RAISE
    codedEmployee.setSalary(raise(codedEmployee.getSalary()));
    newEmployee.setSalary(raise(newEmployee.getSalary()));
    
    // PRINTS EMPLOYEES WITH 10% RAISE
    cout << "\nHere are the employees and their yearly salaries with a 10% raise:" << endl;
    print(codedEmployee);
    print(newEmployee);
    
    return 0;
}

// COMPUTES 10% RAISE OF A SALARY
int raise(int n)
{
    n = n * 1.10;
    return n;
}

// PRINTS AN EMPLOYEE INFORMATION
void print(Employee aux)
{
    cout << aux.getName() << ": $" << aux.getSalary() << endl;
}
