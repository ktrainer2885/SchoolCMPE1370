#include <iostream>

using namespace std;


int add( int a, int b, int c)
{
	return a+b+c;
}

void div( int &a, int b , int c)
{
	a = b/c;
}

int main ()
{
	int num1 = -4;
	int num2 = 8;
	int num3 = 0;

	num3 = add( num1, num2, num3);

	div( num1, num2, num3);

	num2 = add(num1, num2, num3);

	cout << num1 << endl << num2 << endl << num3 << endl;

	system( "pause");

	return 0;
}