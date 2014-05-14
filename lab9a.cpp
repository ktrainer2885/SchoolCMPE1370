
/////////////////////////////////////////////////////////////////////
//
// Name: Rogelio Sergio Ramirez III
// Date: 6 FEB 14
// Class: CMPE 1370-02
// Semester: Spring 2014
// CSCI/CMPE 1370 Instructor: Dr. Tomai
//
// Use looping to ensure that the user inputs a proper value.
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
	char ans; // The user's answer to the question
	int age; // The user's age
	bool correct; // The boolean flag

    

	////////////////////////////////
	// Beginning of your code

	ans = ' ';
	correct = false;

	


	// Ask the user a yes/no question and make sure the response is
	// either y or n

	while (!correct)
	{
		cout << "Do you like ice cream? (y/n): ";
		cin >> ans;

		if (ans == 'y' || ans == 'n')
		{
			correct = true;
			cout << endl;

		}
		else
			cout << "Please awnser with a 'y' or 'n' only." << endl;
	}




	// Get the user's age
	// Make sure the user enters her age as a number

	correct = false;

	while (!correct)
	{
		cout << "Enter you are as an integer: ";
		cin >> age;

		if (!cin)
		{
			cin.clear();
			cin.ignore(2000, '\n');
			cout << "Please awnser only with numbers." << endl;
		}
		else
		{

			correct = true;
			cout << endl;

		}
	}




	// End of your code
	////////////////////////////////

	cout << "Thanks for your input!" << endl;


	system("pause");

	return 0;
}