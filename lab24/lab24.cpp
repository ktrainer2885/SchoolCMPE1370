/////////////////////////////////////////////////////////////////////
//
// Rogelio Sergio Ramirez
// 17 APR 14
//
// Code to test the Room class
//
/////////////////////////////////////////////////////////////////////

#include "Room.h"

////////////////////////
// DO NOT MODIFY THIS FILE
////////////////////////

int main()
{
    // Create four room objects
    Room lr(15, 12, "Living Room");
    Room dr(12, 11, "Dining Room");
    Room b1(13, 10, "Master Bedroom");
    Room b2(10, 10, "Guest Bedroom");
    
    int area; // area of the house
    
    // Change the units of measurement to feet
    Room::units = "feet";

    // Print the number of rooms in the house
    cout << "Number of rooms in the house = ";
    cout << Room::numRooms << endl;
       
    // Print the rooms in the house
    cout << endl;
    Room::printHeader();
    lr.print();
    cout << endl;
    dr.print();
    cout << endl;
    b1.print();
    cout << endl;
    b2.print();
    cout << endl << endl;

    // Calculate and print the total area of the house
    area = lr.getArea() + dr.getArea() + b1.getArea() + b2.getArea();
    cout << "Total area of the house = " << area << " ";
    cout << Room::units << endl;
    
    system("pause");
    return 0;
}