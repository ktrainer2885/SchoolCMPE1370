// *****************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1170
// Lab:			Basic Pointers
//
//-----------------------------------------------------------------
//
// This lab exercise is to practice with pointers, classes and
// functions.
//
// *****************************************************************

#include <iostream>
#include <string>
using namespace std;

#include "pointers.h" 

int main( )
{
	
	/************************************************************************
	 Part A: pointer declarations, operators:
			 * : dereference operator
			 & : address operator
			 . : member selection operator
			 ->: dereference member selection operator 
	 ************************************************************************/
	//simple pointers
	int cat, dog;						//two int vars
	int *intPtr;						//an int pointer
	cat = 10; 
	dog = 20; 
	intPtr = &cat;						//intPtr points to cat, i.e., intPtr has the address of cat
	cout << "cat is	   " <<cat <<",  "
		 << "dog is    " <<dog <<",  "
		 << "intPtr is " <<intPtr<<",  "
		 <<"*intPtr is " <<*intPtr<<endl; 
	
	dog = *intPtr;						//get what is pointed by intPtr to dog
	*intPtr = 55;						//change what is pointed by intPtr to 55

	intPtr = &cat;						//intPtr points to cat, i.e., intPtr has the address of cat
	cout << "cat is	   " <<cat <<",  "
		 << "dog is    " <<dog <<",  "
		 << "intPtr is " <<intPtr<<",  "
		 <<"*intPtr is " <<*intPtr<<endl; 

	// class pointers
	studentType jane, joe;				//two students
	studentType *ptr;					//student pointer

	//using member selection operator . to access members of a class
	jane.firstName="Alice";				//initilization
	jane.lastName="Smith";
	jane.grade='A'; 

	//using member selection operator . to access members of a class
	joe.firstName="Alex";				//initilization
	joe.lastName="Black";
	joe.grade='B'; 

	ptr = &jane;						//ptr points to jane
	
	//use dereference member selection operator -> to access members of a class
	cout << ptr->firstName <<"  " 
		 << ptr->lastName  <<" got "
		 << ptr->grade << endl; 

	ptr = &joe;							//ptr points to joe

	//alternately, use dereference operator * together with member selection operator .
	//to access members of a class
	cout << (*ptr).firstName <<"  " 
		 << (*ptr).lastName  <<" got "
		 << ptr->grade << endl; 
	
	/*******************************************************************************
	 Part B: This part is for you to complete.

	    1. Define a new class bookType with *public* data members title, author, isbn, and price
	       (Add the definition of bookType into the header file)

	    2. Repeat Part A with doubles instead of ints and bookTypes instead of studentTypes
		   (make sure you run often and understand what the code is doing!)
	 *******************************************************************************/

	// Your code goes here


	double cats, dogs;						
	double *dblPtr;						
	cats = 10; 
	dogs = 20; 
	dblPtr = &cats;						
	cout << "cats is  " <<cats <<",  "
		 << "dogs is    " <<dogs <<",  "
		 << "dblPtr is " <<dblPtr<<",  "
		 <<"*dblPtr is " <<*dblPtr<<endl; 
	
	dogs = *dblPtr;						
	*dblPtr = 55;						

	dblPtr = &cats;						
	cout << "cats is	   " <<cats <<",  "
		 << "dogs is    " <<dogs <<",  "
		 << "dblPtr is " <<dblPtr<<",  "
		 <<"*dblPtr is " <<*dblPtr<<endl; 



	// class pointers
	bookType fiction, nonfiction;				
	bookType *bptr;					

	
	fiction.title="Hello World";				
	fiction.author="Smith";
	fiction.isbn="544-985-132254";
	fiction.price= 45;

	
	nonfiction.title="Goodbye";				
	nonfiction.author="Doe";
	nonfiction.isbn="544-985-873224";
	nonfiction.price=22;

	bptr = &fiction;						
	
	
	cout <<"Title: "<< bptr->title <<" Author: " 
		 << bptr->author  <<" ISBN: "
		 << bptr->isbn << " Price: $"
		 << bptr->price <<endl; 

	bptr = &nonfiction;							

	
	cout <<"Title: "<< (*bptr).title <<" Author: " 
		 << (*bptr).author  <<" ISBN: "
		 << (*bptr).isbn << " Price: $"
		 << (*bptr).price <<endl;



	/************************************************************************
	 Part C: Pointer parameter vs reference parameters vs value parameter
	 ************************************************************************/
	// var declaration
	int w=50, z=60;
	int u=30, v=40;
	int x=10, y=20;

	// example: call swapOne, passing it the variables w and z
	cout<<"before calling swapOne(...), w is " << w << " and z is " <<z <<endl; 
	swapOne(w, z);					
	cout<<"after calling swapOne(...), w is " << w << " and z is " <<z <<endl; 

	// your part: repeat the above code, but call swapTwo on the variables u and v
	//  note how it works differently

	// Your code goes here

	cout<<"before calling swapOne(...), u is " << u << " and v is " <<v <<endl; 
	swapTwo(u, v);					
	cout<<"after calling swapOne(...), u is " << u << " and v is " <<z <<endl; 



	// your part: repeat the above code, but call swapThree on the variables x and y
	//  how can you pass x and y into swapThree?
	//  note how it works differently

	// Your code goes here

	int *a=0, *b=0;

	a=&x;
	b=&y;

	cout<<"before calling swapOne(...), x is " << x<< " and y is " <<y <<endl; 
	swapThree(a, b);					
	cout<<"after calling swapOne(...), x is " << x << " and y is " <<y <<endl; 




	system("pause");

	return 0; 
}