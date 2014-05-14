// *********************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1370 Tomai
// Lab:			value parameters vs. reference parameters
// Date:		27 FEB 14
// Revised on:          
// Comment:		The code here is meant to be revised.
//
//----------------------------------------------------------------------
//
// This lab exercise is to practice converting code into functions
// that use reference parameters.
// **********************************************************************

#include <iostream>
#include <string>
using namespace std;

/**********************************************************************
 First, some functions for you to use.  You'll be calling these functions in
 part A, then can use them as reference for part B.
 **********************************************************************/

// takes an integer variable by value and returns its value doubled
int double_by_value( int a )
{
  a = a * 2;
  return a;
}

// takes an integer variable by reference and changes its value by doubling it
void double_by_reference( int& a )
{
  a = a * 2;
}

/**********************************************************************
 Your part B functions go here
**********************************************************************/

// Your readNumber function definition should go here.
// This function should read in a single number from the user.

double readNumber()
{
	double x;
	cin >> x;
	return x;
}





// Your classifyNumber function definition should go here.
// It should take a number as a parameter and figure out whether it is positive, negative
//  or zero, then update the proper counter.

void classifyNumber( int x, int &a, int &b, int &c)
{
	if( x == 0)
		c++;
	if( x > 0)
		a++;
	if( x < 0)
		b++;
}
		






// Your printResults function definition should go here.
// It should output the count of each type of number.  For example:

//   There were 1 positive numbers
//   There were 4 negative numbers
//   There were 5 zeros

void printResults(int x, int y, int z)
{
	cout << "There were " << x << " positive numbers." << endl;
	cout << "There were " << y << " negative numbers." << endl;
	cout << "There were " << z << " zeros" << endl;

}



// good old main
int main()
{
  /**********************************************************************
   Part A.

   In this lab you'll be writing and using functions that have both value and
   reference parameters.  Refer to the slides from the last lectures for
   explanation and examples of how they work.
  
   As a refresher, consider the functions double_by_value and
   double_by_reference, defined above.  Both functions take a number and double
   it, but one uses a value parameter and a return value while the other uses a
   reference parameter.
  **********************************************************************/
  
  cout << "-------------- YOUR PART A --------------" << endl;
  int x = 15;
  
  cout << "x is: " << x << endl;
  
  // Call the function double_by_value to double the value in
  //  the variable x.
  x = double_by_value( x );

  
  cout << "After doubling, x is: " << x << endl;
  
  // Call the function double_by_reference to double the value in
  //  the variable x again.
  
  double_by_reference( x ); 

  cout << "After doubling again, x is: " << x << endl;


  /**********************************************************************
   Part B.

   The code below is supposed to read in 10 numbers from the user and keep count
   of the number of positive numbers, negative numbers, and zeros.  It uses 3
   functions - readNumber, classifyNumber and printResults - which have not been
   defined.

   Uncomment this code and write the function definitions, in the space
   provided above the main function, to make it work.

  **********************************************************************/
  
  
  cout << "-------------- YOUR PART B --------------" << endl;
  cout << "(This is where you type in 10 numbers)" << endl;

  int positive_count = 0, negative_count = 0, zero_count = 0;
  int i, number;
  
  for( i = 0; i < 10; i++ )
  {
    number = readNumber();
    classifyNumber( number, positive_count, negative_count, zero_count );
  }

  printResults( positive_count, negative_count, zero_count );
 

  system( "pause");

  return 0;
}