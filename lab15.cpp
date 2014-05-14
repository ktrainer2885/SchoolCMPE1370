// *********************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1370
// Lab:			value parameters vs. reference parameters
//                      (Zhixiang Chen lab 15)
// Date:		27 FEB 14
// Revised on:          06/26/2009 by sirisha surisetty
//                      03/01/2009 by etomai
// Comment:		The code here is meant to be revised.
//
//----------------------------------------------------------------------
//
// This lab exercise is to show big difference between value parameters
// and reference parameters.
// **********************************************************************

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cmath> 
#include <cstdlib>
#include <iomanip>
using namespace std; 

/**********************************************************************
 First, a couple example function definitions for Part A
 **********************************************************************/

// This function takes two parameters by value and tries to swap them  
void fun_1( int x, int y )
{
  // local variable declaration
  int tmp; 

  // use tmp to swap the values of x and y
  tmp=x;
  x=y; 
  y=tmp;
  
  // optional return, the function is ending anyway
  return;
}

// This function take two parameters by reference and tries to swap them  
void fun_2( int & x, int & y )
{
  // local variable declaration
  int tmp; 
  
  // use tmp to swap the values of x and y
  tmp=x;
  x=y; 
  y=tmp;
  
  // optional return, the function is ending anyway
  return;
}

/**********************************************************************
 Here is where you'll put your Part B function definitions
 **********************************************************************/

// your getNumbers function goes here

void getNumbers( int &x, int &y)
{
	cout << "Type in 2 numbers with a space inbetween and press enter: ";

	cin >> x >> y;

}



// your larger function goes here

bool larger( int x, int y, int &z)
{
	if ( x == y)
		return true;
	if ( x > y)
		z = x;
	if (y > x)
		z = y;
	return false;
}







// my friend main
int main( )
{
  
  /***************************************************************
   Part A. Swapping numbers

   The code below uses fun_1 and fun_2 to attempt to swap the values in 
   the variables number1 and number2.  Use the debugger to walk through
   the code (be sure to "step in" to the functions) and see what happens
   to the variables and parameters in main and in the functions.

  ***************************************************************/

  // variable declaration
  int number1, number2, bigger;
  bool equal;
  
  // initilization
  number1 = 20; 
  number2 = 44; 

  // see how value parameters work
  cout <<"Before calling fun_1 ..........."<<endl
       <<"number1 is " <<number1 <<" and number2 is "<<number2<<endl;

  fun_1(number1, number2); 

  cout<<"After calling fun_1 ..........."<<endl
      <<"number1 is " <<number1 <<" and number2 is "<<number2<<endl;
  
  // blank lines for clarity
  cout<<endl<<endl;
  
  //see how reference parameters work
  cout <<"Before calling fun_2 ..........."<<endl
       <<"number1 is " <<number1 <<" and number2 is "<<number2<<endl;

  fun_2(number1, number2); 

  cout<<"After calling fun_2 ..........."<<endl
      <<"number1 is " <<number1 <<" and number2 is "<<number2<<endl;
  
  
  /************************************************************************
   Part B. This part is for you to complete.  
   
   Define two functions up in the space above this main() function.  These
   functions will use reference parameters.
 
   (1) The first should be called getNumbers.  It should get two integers from
   the user.  Here in main, call getNumber so that it stores the two integers
   that it gets in the variables number1 and number2 (already declared above).

   (2) The second should be called larger. It should take two integers as input
   parameters.  If the two integers are equal, it should return true, otherwise it
   should return false and also the larger of the two (using a reference parameter).
   The heading of the function should be like:

   bool larger( int first, int second, int& larger ) 

   In main, call larger so that it stores the return value in the variable
   equal (already declared above) and the larger of the two value in the
   variable bigger (already declared).

   Make sure in your sample output you include cases where number1 is larger,
   where number2 is larger, and where they are equal!

  *************************************************************************/

  // reinitialize for Part B
  number1 = 0;
  number2 = 0;
  equal=false;
  bigger=0;


  // your function calls go here
 getNumbers( number1, number2 );
  
  equal = larger( number1, number2, bigger);




  // this code is to check and see what you did

  if( equal )
  {
	  // (neither one is bigger)
	  bigger = -1;
  }

  cout << "After calling your functions, number1 is " << number1
       << ", number2 is " << number2 << " and bigger is " << bigger << endl;

  system( "pause" );

  return 0; 
}