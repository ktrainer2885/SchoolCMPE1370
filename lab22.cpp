// ***********************************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1170
// Lab:			A time class
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
#include <iomanip>
using namespace std; 

// ***********************************************************************************
// In this lab, you'll be defining a simple time class with a constructor
// and a method, in addition to data members.
//
// ***********************************************************************************

// Part A.
// declare a class called Time with
// 1) two int data members called hour and min
// 2) a boolean data member called am
// 3) a constructor that takes no arguments
//    (remember that a constructor has the same name as the class, and no return value)
// 4) a Print method that takes no arguments and returns void

// DON'T FORGET THAT YOUR CLASS DEFINITION ENDS WITH ;

class Time
{
	
public:
	int hour, min;
	bool am;
	Time();
	void print();
};




// Part B.
// define the two methods you declared in your class
// remember that their full name are: Time::Time and Time::Print

// 1) Time::Time should set hour and min to 0 and am to true

Time::Time()
{
	hour = 0;
	min = 0;
	am = true;
}




// 2) Time::Print should print the time in the format "10:05am"
// to guarentee a preceding 0 in the minute, print it like:
//  cout << setw(2) << setfill( '0' ) << minute_var;


void Time::print()
{
	string a_or_p;

	if( am == true)
		a_or_p = "am";
	if(am == false)
		a_or_p = "pm";

	cout << hour << ":" << setw(2) << setfill ( '0' ) << min << a_or_p;
}

// Part C.
// for contrast, declare a global function print that takes a Time
//  object and prints it, returning nothing

void print(Time time)
{
	string a_or_p;

	if( time.am == true)
		a_or_p = "am";
	if(time.am == false)
		a_or_p = "pm";

	cout << time.hour << ":" << setw(2) << setfill ( '0' ) << time.min << a_or_p;

}

int main( )
{
	// Part D.
	// 1) declare a Time object called now
	// 2) set the hour, min and am members to the current time
	// 3) call the class print method to print the time
	// 4) call the global print function to print it again
	
	Time now;

	cout << "Please set the current time in the format. Note that am is typed as a 1 and pm is typed in as 0: hours minutes am"<< endl;

	cin >> now.hour >> now.min >> now.am;

	now.print();

	cout << endl;

	print( now);

	cout << endl;




	system( "pause");

	return 0; 
}