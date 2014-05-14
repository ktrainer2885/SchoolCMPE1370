// ***********************************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1170
// Lab:			An array class
// Revised on:  10 APR 14
// Comment:		The code here is meant to be revised.
//
//------------------------------------------------------------------------------------
//
// This lab exercise is to practice defining a class with methods.
//
// ***********************************************************************************

#include <iostream>
#include <string>
using namespace std; 

// ***********************************************************************************
// In this lab, you'll be defining a slightly more useful class.
//
// Arrays are somewhat annoying to use because you always have to keep
// track of how many elements they have in a separate int variable.
// 
// You will define a better array class that stores both an array and an
// int size, and provides methods for common array operations.
// ***********************************************************************************

const int MAX_SIZE = 100;

// Part A.
// declare a class called MyArray with:
// 1) an array of MAX_SIZE doubles as a data member
// 2) an int called size as a data member
// 3) a constructor that takes no arguments
// 4) a Print function that prints the array
// 5) an Add function that takes a double parameter and returns a boolean
//    this method should add the double value to the end of the array
//    and return true, unless the array is full, in which case it should
//    return false

// DON'T FORGET THAT YOUR CLASS DEFINITION ENDS WITH ;

class MyArray
{
public:
	double data_array[MAX_SIZE];
	int size;
	MyArray();
	void print();
	bool add(double addon);
};





// Part B.
// define the three methods you declared in your class
// remember that their full name are: MyArray::MyArray, MyArray::Print and MyArray::Add

// 1) MyArray::MyArray should set the size to 0
MyArray::MyArray()
{
	size = 0;
}


// 2) MyArray::Print should print the array to the screen


void MyArray::print()
{
	for( int i = 0; i < size; i++)
	{
		cout << data_array[i] << endl;
	}
}




// 3) MyArray::Add should take a double and add it to the end of the array
//    and return true, unless the array is full, in which case it should
//    return false.  don't forget to update the size of the array!


bool MyArray::add(double addon)
{
	if(size < MAX_SIZE)
	{ 
		data_array[size] = addon;
		size = size++;
	}
	else
		return false;
	}


int main( )
{
	// Part C.
	// 1) declare a MyArray object called arr
	// 2) use your Add method to add the numbers: 1.2, 3.4, 5.6, 7.8
	// 3) call the print method to print the array

	MyArray arr;

	arr.add(1.2);
	arr.add(3.4);
	arr.add(5.6);
	arr.add(7.8);

	arr.print();


	system( "pause");
	
	return 0; 
}