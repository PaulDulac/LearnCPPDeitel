// Exercise 6.20 in Deitel
// Write a function multiple that determines for a pair of integers
// whether the second is a multiple of the first.  Return bool.
// Use this function in a program that inputs a series of pairs
// of integers.
// Author: Paul Dulac

#include <iostream>
using namespace std;

bool multiple( int, int );

int main()
{
	int first, second;

	cout << "Please enter the first integer (-1 to quit): ";
	cin >> first;

	while ( first != -1 )
	{
		//NOTE: boolalpha flag must be set to print "true/false"
		//rather than "0/1"
		cout << "Please enter the second integer: ";
		cin >> second;
		cout << "Is " << second << " a multiple of " << first << "?: "
			<< boolalpha << multiple( first, second ) << endl << endl;

		cout << "Please enter the first integer (-1 to quit): ";
		cin >> first;
	}

	return 0;
}


// determines whether the second integer is a multiple of the first.
bool multiple( int first, int second )
{
	if ( second % first == 0 )
		return true;
	else
		return false;
}