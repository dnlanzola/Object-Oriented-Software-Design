//
//  Employee.h
//  The Employee Class
//
//  Created by Daniel Anzola Delgado on 2/2/17.
//  Copyright © 2017 Daniel Anzola. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <string>
using namespace std;

class Employee
{
private:
    string fullName;
    int salary;
    
public:
    Employee();
    Employee(string n, int s);
    void setName(string name);
    void setSalary(int sal);
    string getName() const;
    int getSalary() const;
};

// CONSTRUCTOR I: NO PARAMETERS
Employee::Employee()
{
    fullName = ' ';
    salary = 0;
}

// CONSTRUCTOR II: WITH PARAMETERS
Employee::Employee(string n, int s)
{
    fullName = n;
    salary = s;
}

// MUTATOR FUNCTION: NAME
void Employee::setName(string name)
{
    fullName = name;
}

// MUTATOR FUNCTION: SALARY
void Employee::setSalary(int sal)
{
    salary = sal;
}

// ACCESSOR FUNCTION: NAME
string Employee::getName() const
{
    return fullName;
}

// ACCESSOR FUNCTION: SALARY
int Employee::getSalary() const
{
    return salary;
}

#endif /* Header_h */
