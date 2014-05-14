// ***********************************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1370.02
// Lab:			structured data
// Revised on:	27 MAR 14
// Comment:		The code here is meant to be revised.
//
//------------------------------------------------------------------------------------
//
// This lab exercise is to practice using classes for structured data.
//
// ***********************************************************************************

#include <iostream>
#include <string>
using namespace std;

#include "shopping_cart_functions.h"

/***********************************************************************************
 In this lab you will use a simple class to keep track of a "shopping cart"
 full of items.  The code in main runs, but the functions in the header file
 aren't complete, so it doesn't work very well.

 Your job is to go finish those functions so that the output looks like this:

Please enter the name of your item: cheese
 Quantity? 2
 Price? (e.g. $2.99): $2.50
Please enter the name of your item: bread
 Quantity? 1
 Price? (e.g. $2.99): $1.99
Please enter the name of your item: fancy little candies
 Quantity? 15
 Price? (e.g. $2.99): $.89
Your cart:
 0: cheese  2 @ $2.5
 1: bread  1 @ $1.99
 2: fancy little candies  15 @ $0.89
Your grand total is: $20.34

 ***********************************************************************************/


// good old main
int main( )
{
	cart_item items[3];
	int n = 3;
	double total = 0;

	// do input n times
	for( int i=0; i<n; i++ )
	{
		items[i] = get_item();
	}

	// display the cart
	cout << "Your cart:" << endl;
	for( int i=0; i<n; i++ )
	{
		cout << " " << i << ": ";
		print_item( items[i] );
		cout << endl;
	}	

	// calculate total cost
	for( int i=0; i<n; i++ )
	{
		total = total + cost( items[i] );
	}
	cout << "Your grand total is: $" << total << endl;

	system( "pause");

	return 0;
}

