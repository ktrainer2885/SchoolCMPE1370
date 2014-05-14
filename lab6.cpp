/////////////////////////////////////////////////////////////////////
//
// Name: Rogelio Sergio Ramirez III
// Date: 30 JAN 14
// Class: CSCI/CMPE 1170.02
// Semester: Spring 2014
// CSCI/CMPE 1370 Instructor: Emmett Tomai
//
// Program Name: Magic 8 Ball
// Program Description: Simulate a Magic 8 Ball
//
////////////////////////////////////////////////////////////////////
#include<iostream>
#include<cstdlib>
#include<string>
#include<time.h>

// This is the prototype for the getRandomNum function that was
// written by the instructor.
int getRandomNum(int lowRange, int highRange);

using namespace std;

int main()
{
	
	int number = 0; // The random number

	// Seed the random number generator
	// (this is necessary for generating random numbers)
	srand(static_cast<int> (time(NULL))); 

	
	////////////////////
	// Start of your code
	string question;

	//prompt the user to enter a question

	cout << "Please ask your question to the magic 8 ball." << endl;

	cin >> question;

	
	
	
	// We don't need to save the question so we can ignore the user input

	
	
	
	
	
	// this statement uses the getRandomNum function to generate a random
	//  number and store it in the variable named number
	// the 0, 4 are called parameters and specify that the function call
	//  should evaluate to a number between 0 and 4 (we'll talk about this later)
	number = getRandomNum( 0, 4 );
	
	
	
	
	
	// using if-else statements, use the random number to select an answer.

	if ( number == 0)
		cout << "Yes" << endl;
	else if ( number == 1)
		cout << "Maybe" << endl;
	else if ( number == 2)
		cout << "No" << endl;
	else if ( number == 3)
		cout << "Ask again later" << endl;
	else
		cout << "I don't know" << endl;
	
	// End of your code
	////////////////////
	
	system("pause");
	return 0;

}

//
// Returns a random number in the range of the lowRange and
// highRange parameters (inclusive)
//
int getRandomNum(int lowRange, int highRange)
{
	int randNum;
	
	randNum =  ( rand() % (highRange - lowRange + 1) ) + lowRange;
	
	return randNum;
}	