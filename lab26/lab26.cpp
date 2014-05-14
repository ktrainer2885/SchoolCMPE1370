// ***********************************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1170
// Lab:			Pointers and dynamic memory
//------------------------------------------------------------------------------------
//
// This lab exercise is to practice using pointers with classes, functions and
// dynamic memory.
//
// ***********************************************************************************

#include <iostream>
#include <string>
using namespace std;

// ***********************************************************************************
// This lab is pretty simple, just walks you through working with some pointers.
// PAY ATTENTION to what the pointers are doing!  Make sure you understand where
// the memory is that is being manipulated, and why the program behaves the way
// it does.
//
// Look through the functions below, then follow the directions in main.
// ***********************************************************************************

// the header file defines the QA class - go take a look and see what it does
#include "pointers_dynamic.h"

// this function takes a QA object and uses the SetAnswer method to change the
//  answer
void correct(QA badone)
{
	badone.SetAnswer("Yellow");
}

// this function takes a pointer to a QA object and uses the SetAnswer method to
//  change the answer.  see the difference?
void really_correct(QA * badone)
{
	badone->SetAnswer("Yellow");
}

// this function takes a pointer to an array of QA objects and the number of
// objects in the array
// (notice that passing a pointer to a single object or a pointer to multiple
// objects looks exactly the same - it's up to the function to know how many
// objects are at that memory location)
void set_questions(QA * qs, int ct)
{
	string temp;

	// interactively fill the question/answer pairs
	for (int i = 0; i < ct; i++)
	{
		cout << "Question " << i << "?: ";
		getline(cin, temp);
		// remember that pointers can use array notation
		qs[i].SetQuestion(temp);

		cout << "Answer " << i << ": ";
		getline(cin, temp);
		// remember that pointers can use array notation
		qs[i].SetAnswer(temp);
	}
}

// good old main
int main()
{
	// ------------------------
	// Part A. pointers, classes and functions

	// this line declares a QA object, using the constructor to set the question
	QA easy("What is your favorite color?");

	// this line sets the answer
	easy.SetAnswer("Blue.  Wait, no, Yellow!");

	// oops!  we set the wrong answer.  no problem, call the "correct" function
	// here, and pass in the QA object, to correct the answer

	correct(easy);

	// now use the Print method here to print it to see that...it's still wrong!  how
	// come?

	easy.Print();



	// okay, try something different

	// declare a pointer to a QA object

	QA *qpt = NULL;
	qpt = &easy;


	// set that pointer to point at the "easy" object



	// now you can use that pointer to call the "really_correct" function on our object

	really_correct(qpt);

	// try print it again here, should be good

	easy.Print();


	// ------------------------
	// Part B. dynamic memory allocation

	// let's ask the user how many question/answers they'd like to enter
	int ct;
	string temp;

	cout << "How many questions?: ";
	cin >> ct;
	cin.ignore(1, '\n');

	// great!  now declare a pointer to a QA object

	QA *q2pt = NULL;



	// now use that pointer to dynamically allocate an array of however many QA
	// objects the user specified

	q2pt = new QA[ct];

	// now that you've got your array, call the set_questions function here to
	// interactively set all those question/answer pairs.  you'll have to look
	// at set_questions to know how to use it.

	set_questions(q2pt, ct);

	// loop over ct...
	for (int i = 0; i < ct; i++)
	{
		// and print each QA object in the array you're pointing at
		q2pt[i].Print();

	}


	// that's it, don't forget to delete the memory you dynamically allocated

	delete[] q2pt;



	return 0;
}

/* For reference, my output looks like:
=================================================================
Tell me, oh great one: What is your favorite color?
...
Blue.  Wait, no, Yellow!!!!
=================================================================


=================================================================
Tell me, oh great one: What is your favorite color?
...
Yellow!!!
=================================================================

How many questions?: 3
Question 0?: what?
Answer 0: chicken butt
Question 1?: why?
Answer 1: chicken thigh
Question 2?: how
Answer 2: chicken cow

=================================================================
Tell me, oh great one: what?
...
chicken butt!!!
=================================================================


=================================================================
Tell me, oh great one: why?
...
chicken thigh!!!
=================================================================


=================================================================
Tell me, oh great one: how
...
chicken cow!!!
=================================================================
*/