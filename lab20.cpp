// ***********************************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1370.2
// Lab:			array of objects
// Revised on: 27 MAR 14
// Comment:		The code here is meant to be revised.
//
//------------------------------------------------------------------------------------
//
// This lab exercise is to practice using an array of objects for structured data.
//
// ***********************************************************************************

#include <iostream>
#include <string>
using namespace std;

/***********************************************************************************
 In this lab you will create a simple class to hold a 2d point.  A 2d point has
 two numbers, an x coordinate and a y coordinate.  We want to be able to print
 points like this:

  (5.1, 3.4)

 where 5.1 is the x and 3.4 is the y.

 To add two points together, you add the x values and the y values, so:

  (1, 2) + (3, 4) = (4, 6)

 To complete this lab you'll need to finish the class definition for point,
 finish and/or fix a few functions that work with points, and follow the
 directions in main.

 ***********************************************************************************/

// finish this class definition
class point
{
public:
	// data members go here
	double x;
	double y;
};

// finish this function that adds 2 points together
point add_points( point a, point b )
{
	// declare local point to hold the answer
	point answer;

	// add points a and b and store the answer in answer
	// (to add points, add their x values together and their y values together)
	
	answer.x = a.x + b.x;
	answer.y = a.y + b.y;


	return answer;
}

// function to print a point like (10.2, 13.4)
void print_point( point pt )
{
	// fix me!
	cout << "(" << pt.x << ", " << pt.y << ")" << endl;
}

// good old main
int main( )
{
	// declare an array of 10 points
	point pts[10];
	int index = 0;


	// set the points equal to (0, 0), (1, 10), (2, 20), etc...
	//  the 10th point should be (9, 90)
	// (use a loop!)
	for(int i = 0; i < 10; i++)
	{
		pts[i].x = i;
		pts[i].y = i * 10;
}

	// set the first point equal to the second point added to the third
	// (use the add_points function you finished above)

	pts[0]= add_points(pts[1], pts[2]);

	// use the print_point function you finished above to print all
	//  the points in the array (in a loop, of course)
	
	for( int i = 0; i < 10; i++)
	{

	print_point( pts[i]);

	}


	system( "pause");

	return 0;
}

