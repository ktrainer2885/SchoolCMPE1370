////////////////////////////////////////////////////////////////////////
//	Rogelio Sergio Ramirez III
//	SID: 20248401
//	6 FEB 14
//	CMPE 1307-02
////////////////////////////////////////////////////////////////////////




#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i = 5;

	do
	{
		cout << i << "..";
		i--;
	} 
	while (i > 0);
	
	cout << endl;

	for (i = 5; i > 0; i--)
	{
		cout << i << "..";

	}

	cin.ignore(1, ' ');

	return 0;

}