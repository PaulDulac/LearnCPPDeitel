/* Exercise 6.24 in Deitel
 * "Write program segments that accomplish each of the following: "
 * a) Calculate the integer part of the quotient when integer a is
 * -- divided by integer b.
 * b) Calculate the integer remainder when integer a is divided by 
 * -- integer b.
 * c) Use the program pieces developed in (a) and (b) to write a function
 * that inputs an integer between 1 and 32767 and prints it as a series
 * of digits, each pair of which is separated by two spaces."
 * Author: Paul Dulac
*/

#include <iostream>
using namespace std;

int findQuotient( int, int );
int findRemainder( int, int );
void printDigitSeries( int );

int main()
{
	int number;

	cout << "Integer? (up to 32767): ";
	cin >> number;

	printDigitSeries( number );


	return 0;
}


int findQuotient( int number, int dividedBy )
{
	return number / dividedBy;
}

int findRemainder( int number, int dividedBy )
{
	return number % dividedBy;
}

// separates the digits using findQuotient and findRemainder
void printDigitSeries( int number )
{
	int divisor = 10000; // since our limit is a 5 digit integer
	int separated; // the sparated digit to print
	bool firstDigit = false; // whether we've hit our farthest left nonzero

	while ( divisor != 1 )
	{
		separated = findQuotient( number, divisor );

		if ( firstDigit == false && separated == 0 ) // no leading zeroes
		{
			// do nothing
		}
		else
		{
			firstDigit = true;
			cout << separated << "  ";
		}

		number = findRemainder( number, divisor );
		divisor = divisor / 10;
 	}

	cout << number << endl;
}