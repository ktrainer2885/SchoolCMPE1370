// **********************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CMPE 1370
// Lab:			Functions and conditions
// Date:		20 FEB 14
// Revised on:          01/28/2010 by etomai
// Comment:		The code here is meant to be revised.
//
//------------------------------------------------------------------------
//
// ************************************************************************

#include <iostream>
#include <string>
using namespace std; 

// ************************************************************************
// Conditional execution
//
// In this lab you will write three functions:
//
//  1) get_score
//
//  This function will ask the user to enter a score between 0 and 100 and
//  return the value that the user enters
//
//  2) calculate_grade
//
//  This function must take the score as a parameter, and return the appropriate
//  letter grade as a char.  Use if/else in this function.
//
//     90-100   A
//     80-89    B
//     70-79    C
//     60-69    D
//     0-59     F
//
//  3) print_result
//
//  This function must take the score and the letter grade as parameters, and
//  print them out.
//
//
// When you run your program, it should look something like:
//
// Please enter your score (0-100): 85
// A score of 85 earns a B
//
// ************************************************************************

// your functions go here, above main

double get_score()
{
	double x;

	cout << "Please enter your score (0-100): ";
	
	cin >> x;

	return x;
}

char calculate_grade ( double x)
{
	char grade;

	if (x <= 59)
		grade = 'F';
	if (x >= 60 && x <= 69)
		grade = 'D';
	if (x >= 70 && x <= 79)
		grade = 'C';
	if (x >= 80 && x <= 89)
		grade = 'B';
	if (x >= 90 && x <= 100)
		grade = 'A';

	return grade;
}


void print_result( double x, char y)
{
	cout << "A score of " << x << " earns a " << y << endl;

	return;
}

int main( )
{
  // declare any local variables you will need

	int score;

	char grade; 


  // call your get_score function and store the score in a local variable

	score = get_score();

	

  // call your calculate_grade function, passing the score value in, and storing the 
  //  letter that is returned in a local variable

	grade = calculate_grade( score );

	

  // call your print_result function, passing in the score and letter grade

	print_result( score, grade);


  system ( "pause" );


  return 0; 
}