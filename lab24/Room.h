/////////////////////////////////////////////////////////////////////
//
// Name: Rogelio Sergio Ramirez III
// Date: 17 APR 14
// Class: CMPE 1370
// Semester: Spring 2014
// CSCI/CMPE 1370 Instructor: E. Tomai
//
// Class that represents a room
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;


// Class definition: do not modify
class Room
{
public:
    Room(int l, int w, string n);
    void setLength(int l);
    int getLength() const;
    void setWidth(int w);
    int getWidth() const;
    void setName(string n);
    string getName() const;
    int getArea() const;
    void print() const;
    static void printHeader();
    static int numRooms;
    static string units;
    
private:
    int length;
    int width;
    string name;
};

////////////////////////////////////
// Your code begins here
// I have provided comments describing each function that you need to write.

// Initialize the static variables
int Room::numRooms = 0;
string Room::units = "";

//
// Constructor
//
Room::Room( int l, int w, string n)
{
	setLength(l);
	setWidth(w);
	setName(n);
	numRooms++;
}

//
// Set the length of the room

//
// The length must be greater than zero
//
	void Room::setLength(int l)
{
	length = l;
}

//
// Return the length of the room
//
	int Room::getLength() const
	{
		return length;
	}

//
// Set the width of the room
//
// The width must be greater than zero
//
	void Room::setWidth(int w)
	{
		width=w;
	}


//
// Return the width of the room
//
	int Room::getWidth() const
	{
		return width;
	}

//
// Set the name of the room
//
	void Room::setName(string n)
	{ 
		name=n;
	}



//
// Return the name of the room
//
	string Room::getName() const
	{
		return name;
	}

//
// Calculate the area of the room
//
	int Room::getArea() const
	{
		return width*length;
	}


//
// Print information about the room in a nice format
//
// Follow the example in the lab assignment picture
//
	void Room::print() const
	{
		cout << left << setw(20) << name;
		cout << setw(10) << length;
		cout << setw(10) << width;
		cout << setw(10) << getArea();

	}

//
// Print a header for room information
//
// Follow the example in the lab assignment picture
//
	 void Room::printHeader()
	{ 
		cout<< left<< setw(20) << "Room Name";
		cout << setw(10) << "Length";
		cout << setw(10) << "Width";
		cout << setw(20) << "Area" << endl;
	 }


// End of your code
////////////////////////////////////
