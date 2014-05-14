// ********************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1170
// Lab:			Function input/output vs. user input/output
//                      Adapted from Zhixiang Chen lab 14
// Date:		20 FEB 14
// Revised on:          06/26/2009 by sirisha surisetty
// Revised on:          02/23/2010 by etomai
//                      Removed header file use, added comments
// Comment:		The code here is meant to be revised.
//
//---------------------------------------------------------------------
//
// This lab exercise is to practice defining and calling simple functions.
//
// There is a lot of example code in this lab.  Reading code is at least
// as important as writing it, so take your time and understand what the
// various functions and statements are doing.
// *********************************************************************

#include <iostream>
#include <string>
using namespace std;

/***************************************************************
  Part A.

  The next four functions are all used to perform the same (trivial) task:

   1) ask the user to enter 2 numbers
   2) add them
   3) display the sum

  They differ in which parts they perform.  You need to understand how they
  differ from one another in order to do part B.

 ***************************************************************

// Version 1: takes no parameters, returns nothing (void)
// This function does all the work itself.
void fun_1( )
{
	// local variable declaration
	int x, y, sum; 
	
	// gets the two numbers from the user (part 1)
	cout << " (in fun_1) Enter two numbers ==> "; 
	cin >> x >> y; 
	
	// calculates the sum (part 2)
	sum = x + y; 
	
	// shows the sum (part 3)
	cout << " (in fun_1) The sum is " << sum << endl; 
	
	// optional return statement, returns nothing
	return;
}

// Version 2: takes 2 parameters, returns nothing (void)
// This function expects that you already have the two numbers (part 1)
//  and are passing them in as parameters
// It does parts 2 and 3.
void fun_2( int x, int y )
{
	// local variable declaration
	int sum; 
  
	// calculates the sum (part 2, using the values that were passed in)
	sum = x + y; 
  
	// show the sum (part 3)
	cout << " (in fun_2) The sum is " << sum << endl; 
  
	// optional return statement, returns nothing
	return;
}

// Version 3: takes no parameters, returns a double (the sum)
// This function expects that after it runs, you will take the return
//  value and do something with it (part 3).
// It does parts 1 and 2.
int fun_3()
{
	// local variable declaration
	int x, y, sum; 

	// gets the two numbers from the user (part 1)
	cout << " (in fun_3) Enter two numbers ==> "; 
	cin >> x >> y; 

	// calculates the sum (part 2)
	sum = x + y; 
  
	// return the sum, *not optional*, so that whoever called the function
	//  can do something with it
	return sum;
}

// Version 4: takes 2 parameters, returns a double (the sum)
// This function expects that you already have the two numbers (part 1)
//  and are passing them in as parameters.
// This function expects that after it runs, you will take the return
//  value and do something with it (part 3).
// It does part 2 only.
int fun_4( int x, int y )
{
	// local variable declaration
	int sum; 

	// calculates the sum (part 2, using the values that were passed in)
	sum = x + y; 

	// return the sum, *not optional*, so that whoever called the function
	//  can do something with it
	return sum;
}

/*

/***************************************************************
  Your Part B function definitions go here (instructions further down)
***************************************************************/

void steps_all()
{
	string st1, st2, st3;

	cout << "Please enter two series of characters (they can be words) seperated by a space and press enter: ";

	cin >> st1 >> st2;

	st3 = st1 + st2;

	cout << st3 << endl;

	return;
}

void steps_23(string x, string y)
{
	string st1;

	st1 = x + y;

	cout << st1 << endl;

	return;
}


string steps_12()
{
	string st1, st2, st3;

	cout << "Please enter two series of characters (they can be words) seperated by a space and press enter: ";

	cin >> st1 >> st2;

	st3 = st1 + st2;

	return st3;
}


string steps_2( string x, string y)
{
	string st1;

	st1 = x + y;

	return st1;
}








/***************************************************************
  Here is the main function, which will be executed whenever you run this program.
**************************************************************

int main( )
{

	/***************************************************************
    Part A.  Pay attention to how the four functions are used
	**************************************************************

	// local variable declarations (just like in any function)
	int number1, number2, result;	                  // vars to store the values
	int flag;			                              // to control which function gets used

	// setting the flag here controls which of the following 4 blocks of code is executed
	// compile and run for fun_1, see how it works
	// then redo for flag = 2, flag = 3 and flag = 4
	flag = 1;

	if( flag == 1 )
	{
		// the program only gets here if flag is set to 1

		// Using fun_1, it does all the work (parts 1, 2 and 3)
		cout << " Using fun_1 ......................... " << endl; 

		// Call fun_1
		fun_1();
	}

	if( flag == 2 )
	{
		// the program only gets here if flag is set to 2

		// Using fun_2, it only does parts 2 and 3
		cout << " Using fun_2 ......................... " << endl; 
		
		// so we (the caller) have to do part 1 first
		cout << " (in main) Enter two numbers ==> ";
		cin >> number1 >> number2;
		
		// then call fun_2 and pass it the two numbers
		fun_2( number1, number2 );
	}

	if( flag == 3 )
	{
		// the program only gets here if flag is set to 3

		// Using fun_3, it only does parts 1 and 2
		cout << " Using fun_3 ......................... " << endl; 
		
		// call fun_3 and get back the return value (the sum)
		result = fun_3();
		
		// now we (the caller) have to do part 3
		cout << " (in main) The sum is " << result << endl; 
	}
 
	if( flag == 4 )
	{
		// the program only gets here if flag is set to 4

		// Using fun_4, it only does part 2
		cout<<" Using fun_4 ......................... "<<endl; 
		
		// so we (the caller) have to do part 1 first
		cout << " (in main) Enter two numbers ==> ";
		cin >> number1 >> number2;
		
		// then call fun_4 and pass it the two numbers
		//  and get back the return value (the sum)
		result = fun_4( number1, number2 );
		
		// now we (the caller) have to do part 3
		cout << " (in main) The sum is " << result << endl; 
	}

	if( flag < 1 || flag > 4 )
	{
		// what is flag?
		cout << "Bad flag value: " << flag << endl;
	}
	*/
	/*******************************************************************************
     Part B. 

     This part is for you to complete.  You will re-do Part A for a different
     task.  That means you will need to define four functions (just like the four
     in Part A) and call them all here.  You don't have to copy the flag check
     if you don't want, you can just call all four functions every time.

     For this part, the task is:

      1) ask the user to enter 2 words
      2) concatenate them (this is string addition, "one" + "two" gives "onetwo")
      3) display the concatenated string

	*******************************************************************************/

	/*******************************************************************************
     Complete the Part B main code below.
	*******************************************************************************/

	// can do additional variable declarations here
int main()
{
	int flag; 
	string string1, string2, string3;

	// setting the flag here controls which of the following 4 blocks of code is executed
	flag = 4;

	if( flag == 1 )
	{
		// the program only gets here if flag is set to 1

		steps_all();

	}

	if( flag == 2 )
	{
		// the program only gets here if flag is set to 2

		cout << "Please enter two series of characters (they can be words) seperated by a space and press enter: ";

		cin >> string1 >> string2;


		steps_23(string1 , string2);

	}

	if( flag == 3 )
	{
		// the program only gets here if flag is set to 3

		string1 = steps_12();

		cout << string1 << endl;

	}
 
	if( flag == 4 )
	{
		// the program only gets here if flag is set to 4

		cout << "Please enter two series of characters (they can be words) seperated by a space and press enter: ";

		cin >> string1 >> string2;

		string3 =steps_2(string1,string2);

		cout << string3 << endl;



	}


	system( "pause");

	return 0; 
}