// Exercise 6.21 in deitel
// "Write a program that inputs a series of integers and passes them 
// one at a time to function isEven, which determines if the # is
// even.  isEven should return a bool.  Should take an integer agrument
// and return true if even and false otherwise."
// Author: Paul Dulac

#include <iostream>
using namespace std;

bool isEven( int ); // determines whether a # is even or not, woot

int main()
{
	int number;

	cout << "Yo! Zero is even by the laws of math, so!" << endl;
	cout << "Please enter an integer (0 to quit: ): ";
	cin >> number;

	while ( number != 0 )
	{
		cout << "Is equal?: " << boolalpha << isEven( number ) << endl;

		cout << "Please enter an integer (0 to quit: ): ";
		cin >> number;
	}

	return 0;
}


bool isEven( int number )
{
	if ( number % 2 == 0 )
		return true;
	else
		return false;
}