/*
Task:

Write a program that defines and uses a struct to store information about an employee.
Provide for storing their first and last names, employee number, and salary.
Write a main program that initializes the struct for a typical employee.
*/

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	struct Employee
	{
		// Public member variables
		string firstName;
		string lastName;
		int idNumber;

		// Hire a new employee
		Employee(string fn, string ln, int id, int s)
		{
			firstName = fn;
			lastName = ln;
			idNumber = id;
			salary = s;
		};

		// Get rid of an employee
		~Employee() {};

		// Get Bob's salary if we must ask for it
		int getSalary()
		{
			return salary;
		}

	private:
		// Bob's salary is private, personal info
		int salary;
	};

	// Put bob on the stack
	Employee bob =
	{
		"Bob",		//firstName
		"Barker",	//lastName
		19304,		//idNumber
		200000,		//salary (private)
	};

	// Print out Bob's personal information
	cout << "Your employee is " << bob.firstName << " " << bob.lastName << endl;
	cout << bob.firstName << "'s ID number is " << bob.idNumber << endl;
	cout << "His salary is technically private information but..." << endl;
	cout << "He makes $" << bob.getSalary() << " per year" << endl;

	return 0;
}