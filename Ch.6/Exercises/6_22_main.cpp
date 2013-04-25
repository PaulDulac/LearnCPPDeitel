// Exercise 6.22 in Deitel
// "Write a function that displays at the left margin of the screen
// a solid square of asterisks whose side is specified in int
// parameter side."
// Author: Paul Dulac

#include <iostream>
using namespace std;

void printSquareToConsole( int );


int main()
{
	int sideLength;

	cout << "Enter how big you want the side of the square to be(int): ";
	cin >> sideLength;

	printSquareToConsole( sideLength );

	return 0;
}


void printSquareToConsole( int sideLength )
{
	for ( int i = 1; i <= sideLength; i++ )
	{
		for ( int j = 1; j <= sideLength; j++ )
		{
			cout << "*";
		}

		cout << endl;
	}
}