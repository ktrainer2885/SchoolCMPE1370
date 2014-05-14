#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int EVEN = 2;
	
	int x = 0, y = 0;
	cout << "Please type in a number and press enter" << endl;

	cin >> x;

	y = x % EVEN;

	if ( x != 0 )
		{
			if (y == 0)
				cout << "Your number is even!" << endl;
			else
				cout << "Your number is odd!" << endl;
		}
	else
		cout << "Your number is a zero!" << endl;

	system( "pause" );

	return 0;

}