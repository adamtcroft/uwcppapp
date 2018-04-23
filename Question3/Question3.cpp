/*
Task:

Write a function printNumbers() that uses pass by value to print out the values of two
passed in numbers.  Call this function from a main program.

*/

#include "stdafx.h"
#include <iostream>

// Declare my printNumbers function
void printNumbers(int num1, int num2);

int main()
{
	// Declare two numbers
	int num1 = 5, num2 = 6;

	// Pass them to the function by value
	printNumbers(num1, num2);

    return 0;
}

void printNumbers(int num1, int num2)
{
	std::cout << "The first number is " << num1 << std::endl;
	std::cout << "The second number is " << num2 << std::endl;
}

