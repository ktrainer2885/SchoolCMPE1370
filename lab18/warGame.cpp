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

#include "warGame_functions.h"

const int SIZE = 10;

int main()
{
  int deck[SIZE]; // The deck of cards
  int hand_one[SIZE] = {0}; // A hand of cards, with all elements initialized to zero
  int hand_two[SIZE] = {0}; // A hand of cards, with all elements initialized to zero
  int tmp1; // Temporary variable to hold a card
  int tmp2; // Temporary variable to hold a card
  int size1 = SIZE / 2; // Number of cards in hand 1
  int size2 = SIZE / 2; // Number of cards in hand 2
  string tmpStr; // Used for asking the user to press enter to continue
  
  // Seed the random number generator
  srand(static_cast<int>(time(NULL)));
  
  
  // Get a deck of numbers (to represent cards)
  // Because we are simulating a deck of cards, we will get random numbers
  // in the range of 1 to 13.
  getNums(deck, 13, SIZE);
  
  // Deal the deck between the two players
  splitArray(hand_one, hand_two, deck, SIZE);
  
  //loop until one player has no more cards.
  while( size1 != 0 && size2 != 0 )
  {
    // Show the card at the frond of each players hand
    showCard(hand_one, hand_two, size1, size2);
    
    // Store the front cards into temporary variables
    tmp1 = hand_one[0];
    tmp2 = hand_two[0];
    
    // Shift the cards forward in each hand
    shift(hand_one, size1);
    shift(hand_two, size2);
    
    // If the first player has the higher card 
    if ( tmp1 > tmp2 )
    {
      cout << "You have the higher card!" << endl;
      
      // We are going to add one card to Player 1's hand and
      // remove a card from Player 2's hand. So increase the size
      // of the Player 1 array and decrease the size of the
      // Player 2 array by one.
      size1++;
      size2--;
      
      //add both cards to the end of Player 1's hand
      hand_one[size1 - 2] = tmp1;
      hand_one[size1 - 1] = tmp2;
      
    }
    
    // If the computer has the higher card
    else if ( tmp2 > tmp1 )
    {
      cout << "The computer has the higher card!" << endl;
      
      // We are going to add one card to Player 2's hand and
      // remove a card from Player 1's hand. So increase the size
      // of the Player 2 array and decrease the size of the
      // Player 1 array by one.
      size1--;
      size2++;
      
      // Add both cards to the end of Player 2's hand
      hand_two[size2 - 2] = tmp2;
      hand_two[size2 - 1] = tmp1;
      
    }
    
    // If both players have the same value card
    else
    {
      cout << "Tie!" << endl;
      // Don't change the size of the players' hands
      
      // Put each player's card at the end of their hand
      hand_one[size1 - 1] = tmp1;
      hand_two[size2 - 1] = tmp2;
      
    }
    
    // Pause the game at the end of each turn
    cout << "Press return to continue. ";
    getline(cin, tmpStr);
    
    cout << endl;
  }
  
  // Output the winner of the game
  if(size1 == 0)
  {
      cout << "The computer wins the game!" << endl;
  }
  else if(size2 == 0)
  {
      cout << "You win the game!" << endl;
  }
  
  return 0;
}







