// This is code for exercise 6.14 in deitel
// Write an application that rounds numbers to the nearest integer.
// Author: Paul Dulac

#include <iostream>
#include <cmath>
using namespace std;

int roundToInt( double );


int main()
{
	double numberToRound;

	cout << "Please enter a number to round to the nearest int (-1 to quit): ";
	cin >> numberToRound;

	while ( numberToRound != -1 )
	{
		cout << "Rounded: " << roundToInt( numberToRound ) << endl;

		cout << "Please enter a number to round to the nearest int (-1 to quit): ";
		cin >> numberToRound;
	}

	return 0;
}


int roundToInt( double number )
{
	int rounded = floor( number + .5 );
	return rounded;
}