/////////////////////////////////////////////////////////////////////
// 
// Name: Rogelio Sergio Ramirez III
// Date: 20 MAR 14
// Class: CSCI/CMPE 1370
//
// These functions are used for the War card game.
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<time.h>
using namespace std;

//
// Generate random numbers in the range between one and the given range
// to fill an array
//
// DO NOT MODIFY THIS FUNCTION
//
void getNums(int arr[], int range, int size)
{
    int i; // A counter
    
	for( i = 0; i < size; i++ )
	{
        // Add a random number within the specified range to the array
        arr[i] = rand() % range + 1;
	}
}


//
// Display the cards each player pulled and the number of cards they have left
//
// DO NOT MODIFY THIS FUNCTION
//
void showCard(int hand_one[], int hand_two[], int one, int two)
{
	cout << "*****Number of cards in each player's deck*****\n";
	cout << setw(15) << "You: " << one;
	cout << setw(20) << "Computer: " << two << endl;
	cout << "You have the card: " << hand_one[0] << endl;
	cout << "The computer has the card: " << hand_two[0] << endl;
}


//
// Split the elements of a source array into two destination arrays
// The given size is the size of the destination arrays (they are the same size)
//
// WRITE CODE TO COMPLETE THIS FUNCTION
//
void splitArray(int dest_one[], int dest_two[], int source[], int size)
{
	int ctr = 0; // Counter that will go through the source[] array.
    int i; // A counter

    // Loop through the destination arrays.
    // Assign each element in a destination array the next element
    // in the source array. Use the ctr variable to keep track of the
    // current position in the source array.
   i = 0;

	while( ctr < size)
	{
		if(ctr % 2 == 0)
		{
			dest_one[ctr-i] = source [ctr];
		i++;
		}
		else
			dest_two[ctr-i] = source [ctr];
		ctr++;
		;
	}

    
    
    
}


//
// Shifts the items in an array one place to the left
// Throws out the first element in the array and sets the last element
// in the array to zero.
//
// WRITE CODE TO COMPLETE THIS FUNCTION
//
void shift(int arr[], int size)
{
    int i; // A counter
    
	
    // shift the array
    for( i = 0; i < size; i++)
	{
		arr[i] = arr [i+1];
	}
		
    
    // Set the last element in the array to zero

	arr[size - 1] = 0;

}