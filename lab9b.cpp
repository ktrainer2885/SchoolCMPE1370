/////////////////////////////////////////////////////////////////////
//
// Name: Rogelio Sergio Ramirez III
// Date: 6 FEB 14
// Class: CMPE 1370.02
// Semester: Spring 2014
// CSCI/CMPE 1370 Instructor: Dr. Tomai
//
// Use a sentinal controlled loop to find the average of grades
// entered by the user. The sentinal value is -1.
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
    int grade; // The grade entered by the user
    int sum; // Sum of the grades
    int count; // Number of grades entered
    double avg; // Average of the grades
    
    
    ////////////////////////////////
    // Start of your code
    
	grade = 0;
	sum = 0;
	avg = 0;

	for (count = 0; grade != -1; count++)
	{	sum = sum + grade;

		cout << "Enter a grade or -1 to stop: ";
		cin >> grade;
		if (grade == -1)
			count = count - 1;

	}

	avg = sum / static_cast<double>(count);

	cout << "The average is: " << avg << endl;


    
    // Loop until the user enters -1
    // Each time through the loop, add the number input by the user
    // to the sum. Make sure not to include the sentinal value in the
    // sum or count!
   
    
    
    
    
    // Find the average of the grades entered by the user
    // and print the result

    
    
    
    // End of your code
    ////////////////////////////////

    system("pause");

    return 0;
}