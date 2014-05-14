//**************************************** 
// Carmina Edrozo, Rogelio Ramirez
// CSCI/CMPE 1370 
// Homework Assignment #4 
//**************************************** 

#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

const int MAX_SIZE = 1000;

// Specified class in assignment
class Item
{
private:
	string name;
	int sold;
	int remaining;
public:
	Item();
	Item(string init_name, int init_sold, int init_remaining);
	void item_change(string new_name, int new_sold, int new_remaining);
	void Print();
	int check_remain();
	int check_sold();
	string check_name();
	};

//the input file must be a string a number and another number like in homework 3
void import_file(ifstream &infile, Item out_array[], int &size);
void l2g_sort(Item list[], int length);
void g2l_sort(Item list[], int length);

// Constructor for default values
Item::Item()
{
	name = "";
	sold = 0;
	remaining = 0;
}
// Constructor with initial values
Item::Item(string init_name, int init_sold, int init_remaining)
{
	name = init_name;
	sold = init_sold;
	remaining = init_remaining;
}

// method to change prexisting data in class
void Item::item_change(string new_name, int new_sold, int new_remaining)
{
	name = new_name;
	sold = new_sold;
	remaining = new_remaining;
}

// Prints itself ( a single item ) 
void Item::Print()
{
	cout << name << setw(5) << sold << setw(5) << remaining << endl;
}

// Return remaining value
int Item::check_remain()
{
	return remaining;
}
// Return sold value
int Item::check_sold()
{
	return sold;
}

// Return name value
string Item::check_name()
{
	return name;
}

//Prints array using the Print method
void print_array(Item item_arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		item_arr[i].Print();
	}
}

// reads txt file and creates a class Item array out of data
void import_file(ifstream &infile, Item out_array[], int &size)
{
	string temp_name;
	int temp_sold, temp_remaining;

	size = 0;
	while (!infile.eof() && size < MAX_SIZE)
	{
		infile >> temp_name >> temp_sold >> temp_remaining;
		out_array[size].item_change(temp_name, temp_sold, temp_remaining);
		size++;
	}
}


// Selection sort example from homework
// This code is revised for Homework 4, came from Homework 4 document


void l2g_sort(Item list[], int length)
{
	//local vars
	int smallestPos;
	Item temp;

	// for every position in the array
	for (int i = 0; i < length; i++)
	{
		// find the smallest element starting at that position
		smallestPos = i;
		for (int j = i + 1; j < length; j++)
		{
			if (list[j].check_remain() < list[smallestPos].check_remain())
			{
				// found a smaller one, remember it and keep going
				smallestPos = j;
			}
		}

		// see if we found something smaller than list[i]
		if (list[i].check_remain() > list[smallestPos].check_remain())
		{
			// we did find a smaller one, so swap with list[i]
			temp = list[i];
			list[i].item_change(list[smallestPos].check_name(), list[smallestPos].check_sold(), list[smallestPos].check_remain());
			list[smallestPos].item_change(temp.check_name(), temp.check_sold(), temp.check_remain());
			// done sorting the array
		}
	}
}

	// Selection sort example from homework
	// This code is revised for Homework 4, came from Homework 4 document

void g2l_sort(Item list[], int length)
{
	//local vars
	int greatestPos;  
	Item temp;

	// for every position in the array
	for (int i = 0; i < length; i++)
	{
		// find the largest element starting at that position
		greatestPos = i;
		for (int j = i + 1; j < length; j++)
		{
			if (list[j].check_sold() > list[greatestPos].check_sold())
			{
				// found a larger one, remember it and keep going
				greatestPos = j;
			}
		}

		// see if we found something larger than list[i]
		if (list[i].check_sold() < list[greatestPos].check_sold())
		{
			// we did find a larger one, so swap with list[i]
			temp = list[i];
			list[i].item_change(list[greatestPos].check_name(), list[greatestPos].check_sold(), list[greatestPos].check_remain());
			list[greatestPos].item_change(temp.check_name(), temp.check_sold(), temp.check_remain());
			// done sorting the array
		}
	}
}
