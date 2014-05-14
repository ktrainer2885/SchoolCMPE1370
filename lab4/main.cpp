/////////////////////////////////////////////////////////////////////
//
// Name: Rogelio Sergio Ramirez III
// Date: 23 JAN 14
// Class: CSCI/CMPE 1170
//
// Program Name: Magic Number
// Program Description: Calculate a person's magic number based on
//      their birthday.
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
	
	// These are the variables you will use for this program.
	// Notice how we use descriptive variable names so it is easy to
	// tell the meaning of the variable.
	int day = 8; // Replace with the day of your birth
	int month = 12; // Replace with the month of your birth
	int year = 1985; // Replace with the year of your birth
	int magicNum;

/////////////////////////////////////////////////////////////////////
	// Start of your code

	// Calculate the magic number for the given birthday and store
	// the result in the magicNum variable.
	// The magic number is the month multiplied by the year,
	// modulus the day.

	magicNum = (month * year) % day;

	cout << "The magic number for " << month << "-" << day << "-" << year << " is: " << magicNum << endl;
	

	// Using the variables, print out the given birthday and its 
	// corresponding magic number.
	// Refer to the example output in the lab description.


	// End of your code
/////////////////////////////////////////////////////////////////////

	system("pause");

	return 0;
}
