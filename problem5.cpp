
// **********************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1170
// Lab:			Exam 3 recap
// Revised on:  6 MAR 14
// Comment:		The code here is meant to be revised.
//
//-----------------------------------------------------------------------
//
// The purpose of this lab is to give you a chance to understand what you
// did right or wrong on exam 3.
// **********************************************************************

#include <iostream>

using namespace std;

/*************************************************************************************

THIS CODE WILL NOT COMPILE!  Until you add your function to it.

"Write the definition for a function that takes a whole number as a parameter,
then asks the user to type in that many numbers, and passes out the sum of the
numbers typed in."

Write your function here, then run the test code in main to see if it works.
If you can't figure out what it is supposed to do, start asking questions.  To
make the test code work, name your function:

my_get_numbers

*************************************************************************************/

// your code here

double my_get_numbers(int x)
{
	double sum = 0, in;
	cout << "Please type in " << x << " numers with a space in between and press enter." << endl;

	for (int i = x; i > 0; i--)
	{
		cin >> in;
		sum = sum + in;
	}
	return sum;
}













// good old main
int main()
{
	double x;

	cout << "Calling my_get_number with the value 3..." << endl;
	x = my_get_numbers(3);

	cout << "...it returned " << x << ", is that what you expected?" << endl;

	system("pause");

	return 0;
}