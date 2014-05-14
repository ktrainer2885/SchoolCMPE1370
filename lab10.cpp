// **********************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CMPE 1370
// Name:		More than just counter loops
// Date:		6 FEB 14
// Revised on:  
// Comment:		The code here is meant to be revised.
//
//-----------------------------------------------------------------------
//
// This lab exercise focuses on doing more than just counting in loops
//
// Compile and run your program. When everything is fine, submit
// it via blackboard.
// **********************************************************************

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

/************************************************************************
 Game time

 In this lab you'll be modifying what may be the lamest game evah.  You'll
 be modfiying the code in main as well as in the play_game function to
 make it (slightly) more interesting.  Each part builds on the prior part,
 so you don't need to copy anything, just make changes.

 First off, compile and run the code so you can see what it does.  If it
 errors, stop and ask the TA what's wrong before you move on.


 YOUR PART A - modify play_game

 Did you run it?  Really?  Okay, now modify the play_game function.

 Change the annoucement to say:
    "Now I will make up six random numbers between 1 and 100!"
 
 Then use a for loop in the play_game function to make it do so.  The output 
 should look like:
 
   Now I will make up six random numbers between 1 and 100!
   Behold, it is: 86
   Behold, it is: 52
   Behold, it is: 51
   Behold, it is: 53
   Behold, it is: 99
   Press any key to continue . . .



 YOUR PART B - modify main

 One of the ways to use a loop is to do something however many times
  the user wants to.  Modify the game by putting it a loop in main
  around the play_game call to do so.
 At the end of each game, ask the user if they want to play again.
 If they enter 'n', then quit, otherwise keep going.  The output should 
  look like (note that it only asks *after* each game):

   Now I will make up six random numbers between 1 and 100!
   Behold, it is: 37
   Behold, it is: 79
   Behold, it is: 37
   Behold, it is: 20
   Behold, it is: 89
   Behold, it is: 95
   Would you like to play again? (y/n) y
   Now I will make up six random numbers between 1 and 100!
   Behold, it is: 72
   Behold, it is: 8
   Behold, it is: 22
   Behold, it is: 40
   Behold, it is: 79
   Behold, it is: 75
   Would you like to play again? (y/n) n
   Press any key to continue . . .
 

 YOUR PART C - modify play_game again

 Modify the play_game function again so that if it generates a random number
  greater than 90, it prints "ARRGH" instead of "Behold" and stops with the
  random numbers right there.  However, it should still ask the user if it
  should try again.  It should look like:

   Now I will make up six random numbers between 1 and 100!
   Behold, it is: 13
   Behold, it is: 75
   Behold, it is: 36
   Behold, it is: 90
   Behold, it is: 86
   ARRGH, it is: 97
   Now I will make up six random numbers between 1 and 100!
   Behold, it is: 25
   ARRGH, it is: 97
   Would you like to play again? (y/n) y
   Now I will make up six random numbers between 1 and 100!
   Behold, it is: 46
   Behold, it is: 81
   ARRGH, it is: 99
   Would you like to play again? (y/n) y
   Now I will make up six random numbers between 1 and 100!
   Behold, it is: 58
   Behold, it is: 83
   Behold, it is: 45
   Behold, it is: 28
   Behold, it is: 59
   Behold, it is: 4
   Would you like to play again? (y/n) n
   Press any key to continue . . .

 **********************************************************************/

void play_game()
{
	int random_number, count = 0;

	// talk it up
	cout << "Now I will make up six random number between 1 and 100!";
	cout << endl;

	// get a random number
	random_number = 1 + rand() % 100;

	// wow the crowd
	for ( count = 0; count <= 5; count++)
	{
		random_number = 1 + rand() % 100;

		if (random_number <=90)
		{
			cout << "Behold, it is: ";
			cout << random_number;
			cout << endl;
		}
		else
		{
			cout <<"ARRGH, it is: " << random_number << endl;
			count = 5;
		}
	}
}

// Good old main, nothing beats main
int main()
{
	// seed the random number generator once
	srand( static_cast<int>( time(NULL) ) );

	char playagain = ' ';

	while ( playagain != 'n')
	{
		// play the game
		play_game();

		cout << "would you like to play again? (y/n): ";
		cin >> playagain;

	}

	system( "pause");

	// and done
	return 0;
}
