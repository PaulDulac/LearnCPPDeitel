// Exercise 4.12
// Determine what this program prints
// Worked on by: Paul Dulac

#include <iostream>
using namespace std;

int main()
{
	int y; // declare y
	int x = 1; // initilize x
	int total = 0; // initializee total 

	while ( x <= 10 ) // loop 10 times
	{
		y = x * x; // perform calculation
		cout << y << endl;  // output result
		total += y; // add y to total
		x++; // increment counter x
	} // end while

	cout << "Total is " << total << endl; // display result
} // end main