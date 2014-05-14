/*
Rogleio Sergio Ramirez III
20248401
CMPE 1370
Prof. Tomai
*/


#include <iostream>

using namespace std;


double pow(double x, double y)
{
	double product = 1;

	if (y > 0)

	{
		for (double i = y; i > 0; i--)
		{
			product = product * x;
		}
	}
	else
	{
		for (double i = y; i < 0; i++)
		{
			product = product / x;
		}
	}


	return product;
}


int main()
{
double base;
double exp;



	cout << "Please enter 2 numbers, a number and its exponent, seperated by a space and press enter: ";

	cin >> base >> exp;

	cout << pow(base, exp) << endl;

	system("pause");

}