// *****************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1170
// Lab:			Basic Pointers
// *****************************************************************

#include <iostream>
#include <string>
using namespace std; 

//define studentType
// NOTE! the data members are public, not private
//       this class is essentially a struct
class studentType 
{
 public:
  string firstName, lastName;				// first, last names for students
  char grade;						//letter grades
}; 

class bookType
{
public:
	string title, author, isbn;
	double price;
};

// swapOne takes two parameters by reference 
void swapOne(int & x, int & y)
{
	// how does this differ from swapTwo below?
	int temp; 
	temp = x;					
	x = y; 
	y = temp; 
}

// swapTwo takes two parameters by value 
void swapTwo(int x, int y)
{
	// how does this differ from swapOne above?
	int temp; 
	temp = x;					
	x = y; 
	y = temp; 
}

// swapThree takes two pointer parameters (by value)
void swapThree(int * x, int * y)
{
	// how does this differ from both swapOne and swapTwo above?  what memory is being changed?
	int temp; 
	temp = *x;					
	*x = *y; 
	*y = temp; 
}

