// *********************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1170
// Title:	        Program setup and input
// Date:		23 JAN 14
// Revised on:          
// Comment:		The code here is meant to be revised.
//
//----------------------------------------------------------------------
//
// Practice doing a complete program setup, simple input, processing and
// output
//
// **********************************************************************

// include the iostream library here
#include <iostream>

// add a statement to use the standard namespace here
using namespace std;

// function for your code
void your_code()
{
	// declare three variables to hold real numbers

	double x, y, z;



	// prompt the user to enter three real numbers (e.g. print "Please enter three real numbers:")

	cout << "Please type in three numbers and hit enter between each number." << endl;

	// and store those numbers in your three variables

	cin >> x >> y >> z;

	// write statements to print out "The product of those numbers is: " and print the product

	cout << "The product of thsoe numbers is: " << x * y *z << endl;

	// write statements to print out "The second number divided by the third is: " and print the quotient
	
	cout << "The second number diveded by the third is: " << y / z << endl;

}

// your main function goes here
int main()
{
	// >>>>>> execution starts here! <<<<<<
	
	// call the your_code function here
	
	your_code();

	system( "pause");

	// return statement here to end your main function
	return 0;
}

  
/*********************************************
 Your output should look like:

 Please enter three real numbers: 4.8 2.4 1.2
 The product of those numbers is 13.824
 The second number divided by the third is 2

*********************************************/

