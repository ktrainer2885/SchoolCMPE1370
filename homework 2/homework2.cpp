//**************************************************************************
// Rogelio Sergio Ramirez
// CSCI/CMPE 1370
//Homework Assignment 2
//**************************************************************************

#include <iostream>

using namespace std;


void read_fraction(int &numerator, int &denominator)
{
	cin >> numerator;
	cin.ignore(100, '/');
	cin >> denominator;

}

void read_operation(char &operation)
{
	cin >> operation;
}

void fraction_add(int numerator_a, int denominator_a, int numerator_b, int denominator_b, int &numerator_c, int &denominator_c)
{
	numerator_c = numerator_a * denominator_b + numerator_b * denominator_a;
	denominator_c = denominator_a * denominator_b;
}

void fraction_sub(int numerator_a, int denominator_a, int numerator_b, int denominator_b, int &numerator_c, int &denominator_c)
{
	numerator_c = numerator_a * denominator_b - numerator_b * denominator_a;
	denominator_c = denominator_a * denominator_b;
}

void fraction_mult(int numerator_a, int denominator_a, int numerator_b, int denominator_b, int &numerator_c, int &denominator_c)
{
	numerator_c = numerator_a * numerator_b;
	denominator_c = denominator_a * denominator_b;
}

void fraction_div(int numerator_a, int denominator_a, int numerator_b, int denominator_b, int &numerator_c, int &denominator_c)
{
	numerator_c = numerator_a * denominator_b;
	denominator_c = numerator_b *denominator_a;
}

int gcd(int numerator, int denominator)
{
	int remainder, gcd;
	remainder = numerator % denominator;

	while (remainder != 0)
	{
		numerator = denominator;
		denominator = remainder;
		remainder = numerator % denominator;
	}

	gcd = denominator;

	return gcd;
}

void reduce_fraction(int &numerator, int &denominator)
{
	int lcm;

	if (numerator == 0)
		return;
	if (numerator >= denominator)
	{
		if (numerator % denominator == 0)
		{
			numerator = numerator / denominator;
			denominator = denominator / denominator;
		}
		else
		{
			lcm = gcd(numerator, denominator);
			denominator = denominator / lcm;
			numerator = numerator / lcm;
		}
	}

	if (numerator < denominator)
	{
		if (denominator % numerator == 0)
		{
			denominator = denominator / numerator;
			numerator = numerator / numerator;
		}
		else
		{
			lcm = gcd(numerator, denominator);
			denominator = denominator / lcm;
			numerator = numerator / lcm;
		}
	}


}

void print_fraction(int numerator, int denominator)
{
	if (numerator == 0)
		cout << "The answer is: " << numerator << endl;
	if (denominator == 1)
		cout << "The answer is: " << numerator << endl;
	if (numerator != 0 && denominator != 1)
		cout << "The answer is: " << numerator << "/" << denominator << endl;
}


int main()
{
	int numerator_a, denominator_a, numerator_b, denominator_b, numerator_c, denominator_c;
	char operation, cont_stop = ' ', look_ahead = ' ';


	cout << "Using Fractions Sucks....let the computer do the work!" << endl << endl;
	cout << "This program will do basic arithmetic with fractions...no fancy stuff." << endl;
	cout << "Please enter the problems like so: 3/8 + 1/4" << endl;
	cout << "You are allowed to multiply(*), divide(/ ), add(+), and subtract(-)." << endl;

	while (cont_stop != 'n')
	{


		cout << endl << "Please enter the problem: ";

		read_fraction(numerator_a, denominator_a);
		read_operation(operation);

		while (operation == '+' || operation == '-' || operation == '*' || operation == '/')
		{
			read_fraction(numerator_b, denominator_b);

			if (operation == '+')
				fraction_add(numerator_a, denominator_a, numerator_b, denominator_b, numerator_c, denominator_c);
			if (operation == '-')
				fraction_sub(numerator_a, denominator_a, numerator_b, denominator_b, numerator_c, denominator_c);
			if (operation == '*')
				fraction_mult(numerator_a, denominator_a, numerator_b, denominator_b, numerator_c, denominator_c);
			if (operation == '/')
				fraction_div(numerator_a, denominator_a, numerator_b, denominator_b, numerator_c, denominator_c);


			look_ahead = cin.peek();
			while (look_ahead == ' ')
			{
				cin.get(look_ahead);
				look_ahead = cin.peek();

			}

			operation = ' ';
			if (look_ahead == '+' || look_ahead == '-' || look_ahead == '*' || look_ahead == '/')
			{
				numerator_a = numerator_c;
				denominator_a = denominator_c;
				read_operation(operation);
			}

		}

		reduce_fraction(numerator_c, denominator_c);

		print_fraction(numerator_c, denominator_c);

		cout << "Would you like to do another one? (y/n)" << endl;

		cin >> cont_stop;
	}

	system("pause");

	return 0;
}