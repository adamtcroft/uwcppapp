/*
Task:

Write a function getfloats() that uses pass by reference to return two floating point values
to the calling program.  Inside the function, use printf to request the user enter two floating
point values.  Inside the function, use scanf to read the floating point values from the input.
Call this function from a main program.  In the main program, print the values returned by
reference from the function.
*/

#include "stdafx.h"

// Declare getfloats() so I can use it later
float getfloats(float &num1, float &num2);

int main()
{
	// Instantiate the floats to zero
	float num1 = 0.0, num2 = 0.0;

	// Print out the starting values
	printf("Your values start as %f and %f, respectively.\n", num1, num2);

	// Get new values by reference
	num1, num2 = getfloats(num1, num2);

	// Print out the new values
	printf("Now your values are %f and %f.\n", num1, num2);
    return 0;
}

float getfloats(float &num1, float &num2)
{
	printf("Enter two floating point values:\n");
	scanf("%f %f", &num1, &num2);
	return num1, num2;
}