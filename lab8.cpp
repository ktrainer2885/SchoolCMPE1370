/////////////////////////////////////////////////////////////////////
//
// Name: Rogelio Sergio Ramirez III
// Date: 30 JAN 14
// Lab 08
// Semester: Spring 2014
//
// Program Name: Medical Diagnosis Tool (complex conditions)
// Program Description: Asks the user for her symptoms and returns
//		a diagnosis.
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
    
    // NOTE - Assume that the user always provides valid input
	
    char fever = ' '; // 'y' if the user has a fever
    char stuffy = ' '; // 'y' if the user has a stuffy nose
    char rash = ' '; // 'y' if the user has a rash
    char earHurts = ' '; // 'y' if the user's ear hurts
    
	
    cout << "Disclaimer -- This should not be used for a real medical diagnosis" 
	<< endl << endl;

	/////////////////////////
	// Start of your code

	// Ask the user if he has a fever
	cout << "Do you have a fever? (y/n): ";
	cin >> fever;
	
	if (fever == 'n')
	{
		// Ask the user if he has a stuffy nose
		cout << "Do you have a stuffy nose? (y/n): ";
		cin >> stuffy;
	}
	else
	{
		// Ask the user if he has a rash
		cout << "Do you have a rash? (y/n): ";
		cin >> rash;

		if (rash == 'n')
		{
			// Ask the user if his ear hurts
			cout << "Does your ear hurt? (y/n): ";
			cin >> earHurts;
	
		}
	}
	
	
	
	// Using if - else if - else statments with complex conditions, make
	// a diagnosis. If the user enters characters other than 'y' or 'n', 
    // print "Unable to make a diagnosis"

	// Checks all variables to see if y or n to see if diagnosis can be found
	// If all y or n then proceeds to give diagnosis

	if (((((fever == 'y' || fever == 'n') 
			&& (stuffy == 'y' || stuffy == 'n')) 
			&& (rash == 'y' || rash == 'n')) 
			&& (earHurts == 'y' || earHurts == 'n')))
		{ 
			if (fever == 'n')
			{
				if (stuffy == 'y')
					cout << endl << "Diagnosis: You have a head cold." << endl;
				else
					cout << endl << "Diagnosis: You have hypochondria." << endl;
			}
			else if ( rash == 'y')
				cout << endl << "Diagnosis: You have the measles." <<endl;
			else if ( earHurts == 'y')
				cout << endl << "Diagnosis: You have an ear infection." <<endl;
			else
				cout << endl << "Diagnosis: You have the flu." << endl;
	}

			
	else cout << "Unable to make a diagnosis" << endl;

	// End of your code
	/////////////////////////

	system("pause");
	
	return 0;
}