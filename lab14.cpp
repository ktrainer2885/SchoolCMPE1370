// **********************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1170
// Lab:			Geometry functions
// Date:		20 FEB 14
// Revised on:  
// Comment:		The code here is meant to be revised.
//
//------------------------------------------------------------------------
//
// Writing and using some more functions.
//
// There is a lot of example code in this lab.  Reading code is at least
// as important as writing it, so take your time and understand what the
// various functions and statements are doing.  Instructions to complete
// the lab begin down in the main function.
// ************************************************************************

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*************************************************************
 Some example functions for your reference (they're called in main)
 *************************************************************/

// sum3 from class
// double is the return type, sum3 the name, and it requires 3 double parameters x, y and z
double sum3( double x, double y, double z )
{
	// when this function is called, the values it was called with are copied into
	// x, y and z
  
	// declare a sum variable to hold the sum
	double sum;
	
	// calculate the sum
	sum = x + y + z;
	
	// return the sum to whoever called the function
	return sum;
}

// absolute value
// uses more than one return statement
double absolute_value( double num )
{
	// when this function is called, the value it was called with is copied into
	// num
	
	if( num > 0 )
	{
		return num;        // if num > 0, stop here and return num
	}
	else
	{
		return -1 * num;   // otherwise, stop here and return -1 * num
	}
	
	// it never gets here
}

// a void function, doesn't return anything this just prints some things to the
// screen
void print_score( string name, int score )
{
  // when this function is called, the values it was called with are copied into
  // name and score

  cout << name;
  cout << " got a ";
  cout << score;
  cout << " on the test.";
  cout << endl;

  // no return statement needed

}


/*************************************************************
 Functions used in main for this lab
 *************************************************************/

// an input function, this one takes no parameters and returns a double
double get_side()
{
	// local variable to hold the user input
	double input;
	
	// cout and cin are global variables, meaning they can be used
	//  in any function without passing them in and out
	cout << "Please enter a side of the triangle: ";
	cin >> input;
	
	// return the input value that we got from the user
	return input;
}


// your function to get the area of the triangle should go here (Part A)
// make sure you think through the proper input parameters and return type!

double area_of_triangle(double x, double y, double z)
{
	double at;
	double sp;


	sp = (x+y+z)/2.0;
	
	at = sqrt( sp * (sp - x) * (sp - y) * (sp - z));

	return at;
}






// your function to find the longest side should go here (Part B)
// make sure you think through the proper input parameters and return type!

double find_longest_length ( double x, double y, double z)
{
	double longest;

	if ( x >= y && x >= z)
		longest = x;
	if ( y > x && y > z)
		longest = y;
	if ( z > x && z > y)
		longest = z;

	return longest;
}


void print_greatest( double x)
{
	cout << x << " is the greatest rumber!" << endl;

	return;
}




// your function to speak of the greatness of a number should go here (Part C)
// make sure you think through the proper input parameters and return type!








/*************************************************************
 The main function, executed automatically when the program is run
 *************************************************************/

int main()
{
	/* ================= THE EXAMPLES SECTION ================== */
	// run the code, look at how the functions are called and defined
	
	// quick function example to jog your memory
	double x;
	
	// this is the function call, it calls the function by name (sum3) and
	//  provides three values (5.0, 6.0 and 7.0)
	// the function returns a value (the sum) which gets stored here in x
	// (remember that the variable x here in main is different than any
	//  variable x in another function!)
	x = sum3( 5.0, 6.0, 7.0 );
	cout << "The example sum is: " << x << endl;
	
	
	// more example function calls for your reference
	double abs_val;
	abs_val = absolute_value( 78 );
	cout << "The absolute value of 78 is: ";
	cout << abs_val;
	cout << endl;
	
	abs_val = absolute_value( -78 );
	cout << "The absolute value of -78 is: ";
	cout << abs_val;
	cout << endl;
	
	print_score( "Jethro", 56 );
	

	/* ================= Triangle Geometry ================== */
	
	// we're going to work with triangles here, so we need 3 side lengths
	double side1, side2, side3;
	
	// consider this familiar code that asks the user to enter a number:
	cout << "Please enter a side of the triangle: ";
	cin >> side1;
	
	// the same code can be put into a function (which I did), and instead of
	//  copy-and-pasting the code here for the second and third sides, we just
	//  call that function two times
	side2 = get_side();
	side3 = get_side();
	
	cout << "The three sides are: ";
	cout << side1;
	cout << ", ";
	cout << side2;
	cout << " and ";
	cout << side3;
	cout << endl;
	
	
	cout << "-------------- YOUR PART A --------------" << endl;
	// the following code calculates the area of the triangle with sides
	//  side1, side2 and side3
	double semiperimeter;
	double area;
	
	semiperimeter = (side1 + side2 + side3)/2.0;
	area = sqrt( semiperimeter * (semiperimeter - side1) * (semiperimeter - side2) * (semiperimeter - side3) );
	
	// output to see what it came up with
	cout << "The area computed here in main is: " << area << endl;
	
	// reset area
	area = -1;
	
	// that same code could be placed in a function and called like:
	// area = area_of_triangle( <some parameters it needs> );
	
	// your part: go define area_of_triangle in the space above main, then call
	//  it right here to calculate the area using the values you've already got
	//  in side1, side2 and side3
	
	area = area_of_triangle( side1, side2, side3);



	
	// output to check your changes, should print the same thing as above
	cout << "The area computed by your function is: " << area << endl;
	

	cout << "-------------- YOUR PART B --------------" << endl;

	double longest_side = -1;

	longest_side = find_longest_length( side1, side2, side3);


	// write a function that takes the three sides of a triangle and returns the
	//  longest one, then call it right here with side1, side2 and side3 to
	//  assign the value of the variable longest_side.
	// note that function names have to be different from variable names, so
	//  don't name your function longest_side.






	
	// redundant output to check your changes, should print the same thing as above
	cout << "The longest side computed by your function is: " << longest_side << endl;
		
	cout << "-------------- YOUR PART C --------------" << endl;
	// write a function that takes a real number and prints to the screen a 
	//  sentence about how great it is, for example:
	//    3 is the greatest number!
	// call it right here with the longest_side variable

	print_greatest(longest_side);


system ( "pause");
	

	return 0;
}
