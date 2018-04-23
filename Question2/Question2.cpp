/*
Task:

Write a main program that dynamically allocates memory (e.g., with malloc or new)
or a string which could contain up to 256 characters.  Copy your name into the
allocated string.  Be sure to clean up prior to exiting main()

*/

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string myName = "Adam T. Croft";
	string* p_myName = new string[256];
	p_myName = &myName;
	cout << *p_myName << endl;

	delete p_myName;

    return 0;
}

