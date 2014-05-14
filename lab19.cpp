/////////////////////////////////////////////////////////////////////
// 
// Name: Rogelio Sergio Ramirez III
// Date: 27 MAR 14
// Class: CSCI/CMPE 1370.02
// Semester: Spring 2014
// CSCI/CMPE 1370 Instructor: Emmett Tomai
//
// This program asks for the number of votes for each candidate in
// an election. It then finds the percentage of votes received by
// each candidate, and reports the winner of the election.
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int sumList(int list[], int size);
int indexOfMax(int list[], int size);

const int NUM_CANDIDATES = 5; // The number of candidates

int main()
{
    string names[NUM_CANDIDATES]; // The names of the candidates
    int votes[NUM_CANDIDATES]; // The number of votes received by each candidate
    int totalVotes; // The total number of votes received by all candidates
    double percentVotes; // The percentage of votes received by a candidate
    int maxVotesIndex; // The index of the winner with the largest number of votes
    int i; // A counter

	
    ///////////////////////////////
    // Start of your code


    // Get the candidates' names and number of votes each received
    // Assume the user enters valid input

	for( i = 0; i < NUM_CANDIDATES; i++)
	{

	cout << "Enter the candidate's name: ";
	cin >> names[i];

	cout << "How many votes did " << names[i] << " get? ";
	cin >> votes[i];

	cout << endl;
	}


    // Calculate the total number of votes received by all candidates
    // (use the sumList function)
	
	totalVotes = sumList(votes, NUM_CANDIDATES);
	

    // Print each candidate's name, the number of votes she received,
    // and the percent of votes the candidate received

	cout << endl;
	cout << setw(15) << "Candidate" << setw(15) << "Num Votes" << setw(15) << "% of Votes" << endl;

	for(i = 0; i < NUM_CANDIDATES; i++)
		{
			percentVotes = 100*(votes[i] / static_cast <double> (totalVotes));

			cout << setw(15) << names[i] << setw(15) << votes[i] << setw(15) << setprecision(2)<< fixed << percentVotes << endl;
	}



    // Find the array index of the candidate with the largest number of votes
    // (use the indexOfMax function)

	maxVotesIndex = indexOfMax(votes, NUM_CANDIDATES);
	
    // Print the name of the winner

	cout << endl;

	cout << "The winner is: " << names[maxVotesIndex] << endl;

    // End of your code in the main function
    // Don't forget to complete the functions below
    ///////////////////////////////

    system("pause");

    return 0;
}

//
// Returns the sum of the numbers in the given array
//
// WRITE THE BODY OF THIS FUNCTION
//
int sumList(int list[], int size)
{
	int sum = 0;

	for( int i = 0; i < size; i++)
	{
		sum = sum + list[i];
	}

	return sum;
}

//
// Returns the index of the largest value in the given array (not the largest
// value, but the index of it)
//
// WRITE THE BODY OF THIS FUNCTION
//
int indexOfMax(int list[], int size)
{
	int index;
	int temp = list[0];

	for(int i = 0; i < size; i++)
	{

		if ( temp <= list[i])
			temp = list[i];
		index = i;
	}

	return index;
}