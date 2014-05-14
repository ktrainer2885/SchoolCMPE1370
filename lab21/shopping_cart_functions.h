// ***********************************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1370.2
// Lab:			structured data
// Revised on:  27 MAR 14
// Comment:		The code here is meant to be revised.
//
//------------------------------------------------------------------------------------
//
// This lab exercise is to practice using classes for structured data.
//
// ***********************************************************************************

//************* class definitions ****************

// class definition
class cart_item
{
public:
	string description;
	double price;
	int quantity;
};

//************* function prototypes ****************

// prototypes
cart_item get_item();
void print_item( cart_item ci );
double cost( cart_item ci );

//************* function definitions ****************

// get the user to input an item (I got this one)
// note how it creates a local cart_item variable and returns it, just like you
//  might do with any other data type
cart_item get_item()
{
	cart_item ci;
	char ch = ' ';

	cout << "Please enter the name of your item: ";
	getline( cin, ci.description );

	cout << " Quantity? ";
	cin >> ci.quantity;

	cout << " Price? (e.g. $2.99): ";
	ch = cin.peek();
	while( !isdigit( ch ) && (ch != '.') )
	{
		// skip non-digits
		cin.ignore( 1, '$' );

		ch = cin.peek();
	}
	cin >> ci.price;
	
	// throw away newline or getline will get messed up on the next call
	cin.ignore( 1, '\n' );
	
	return ci;
}

// print out an item object, should look like:
//  Apple  5 @ $1.29
void print_item( cart_item ci )
{
	// fix me!
	cout << ci.description << " " << ci.quantity << " @ " << "$" << ci.price;
}

// calculate total cost of an item (quantity * price)
double cost( cart_item ci )
{
	// fix me!
	double cost;

	cost = ci.price * ci.quantity;

	return cost;
}


