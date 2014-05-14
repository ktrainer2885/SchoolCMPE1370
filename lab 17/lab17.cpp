// *********************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1170
// Lab:			working with arrays
// Date:		March 20 2014
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

// all the functions you define should go in this header file
#include "basic_arrays.h"

int main()
{
  // This lab is about working with arrays.
  // First, we'll declare a couple arrays to work with.  These
  //  are arrays of doubles, and we'll make them big so that we
  //  can store as much as we want to (even if in practice we
  //  don't use all that space).
  double a1[100];
  double a2[100];
  
  // Arrays are useful because they allow you to do repetitive
  //  actions over a set of data, in this case numbers.  This
  //  typically involves using a counting for loop.

  // Here we'll have the user type 5 numbers in and store them is
  //  one of our arrays.
  // An element in an array is referred to in terms of its position
  //  using the [] notation, such as a1[2].  Each element is a block
  //  of memory and behaves exactly like a normal variable.
  int i;
  int length = 5;
  
  cout << "Please enter " << length << " numbers: ";
  for( i=0; i<length; i++ )
  {
    cin >> a1[i];
  }
  
  cout << "-------------- YOUR PART A --------------" << endl;
  // For this lab, I've provided a function to print an array (in the
  //  header file).  To work, it requires you pass it an array and the
  //  number of valid elements in that array.  Call print_array here
  //  to see if the numbers you typed in were properly stored.

  // USE THE length VARIABLE, NOT THE NUMBER 5!

  print_array( a1, length);



  cout << "-------------- YOUR PART B --------------" << endl;
  // In this part, write a function that adds 3.0 to each element
  //  in an array. Call your function on array a1, then print it out 
  //  again.

  // USE THE length VARIABLE, NOT THE NUMBER 5!

  add_three(a1, length);
  print_array( a1, length);


  
  cout << "-------------- YOUR PART C --------------" << endl;
  // At the beginning of this file, we declared and allocated space for
  //  two arrays. Write a function to copy the values from one array to 
  //  another. Call your function here to copy the values in array a1 to
  //  array a2, then print out array a2.
  
  // USE THE length VARIABLE, NOT THE NUMBER 5!

  copy_array(a1, a2, length);
  print_array( a2, length);





  cout << "-------------- YOUR PART D --------------" << endl;
  // Write a function to take the numbers from an array and copy them 
  //  into another array in reverse. Use it to copy from a1 into a2, then 
  //  print a2.
  // So if a1 is 1,2,3,4,5 then a2 should be 5,4,3,2,1.

  // USE THE length VARIABLE, NOT THE NUMBER 5!
  
  reverse_array(a1, a2, length);
  print_array( a2, length);


  system( "pause");

  return 0;
}