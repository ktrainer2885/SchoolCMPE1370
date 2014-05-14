// *********************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1170
// Lab:			working with arrays
// Date:		March 20, 2014
// Revised on:          
// Comment:		The code here is meant to be revised.
//
//----------------------------------------------------------------------
//
// This lab exercise is to practice declaring arrays, changing them, and
// using functions to change them.
// **********************************************************************

#include <iostream>
#include <string>
using namespace std;

// function prototypes go here

void print_array( double a[], int size );
void add_three( double a[], int size);
void copy_array( double a[], double b[], int size);
void reverse_array(double a[], double b[], int size);


// function definitions go here

void print_array( double a[], int size )
{
  int i;
  
  cout << "Printing array: " << endl;
  for( i=0; i<size; i++ )
  {
    cout << i << ": " << a[i] << endl;
  }
}

void add_three( double a[], int size)
{
	for ( int i = 0; i<size; i++)
  {
	  a[i] = a[i] + 3.0;
  }
}

void copy_array( double a[], double b[], int size)
{
	for ( int i = 0; i < size; i++)
	{
		b[i]= a[i];
	}
}

void reverse_array(double a[], double b[], int size)
{
	for( int i = 0; i < size; i++)
	{ 
		b[i] = a[size - 1- i];
	}
}