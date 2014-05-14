//**************************************** 
// Carmina Edrozo, Rogelio Ramirez
// CSCI/CMPE 1370 
// Homework Assignment #4 
//**************************************** 

#include "functions.h"




int main()
{
	Item sales[MAX_SIZE];
	int size = 0;


	ifstream inData;
	// Alternate test for sorting
	inData.open("inv.txt");

	//inData.open("inventory.txt");
	import_file(inData, sales, size);

	inData.close();




	//test code for printing and making sure data copied to array correctly 

	cout << "Fourth record: "; 
	sales[3].Print();

	cout << "Eighth record: ";
	sales[7].Print();

	cout << "Sixteenth record: ";
	sales[15].Print();
	cout << endl;

	cout << "Initial array:" << endl;
	print_array(sales, size);
	cout << endl;

	g2l_sort(sales, size);
	cout << "Sorted by units sold (greatest to least)" << endl;
	print_array(sales, size);
	cout << endl;

	l2g_sort(sales, size);
	cout << "Sorted by units remaining (least to greatest)" << endl;
	print_array(sales, size);
	cout << endl;



	system("pause");
	return 0;
}