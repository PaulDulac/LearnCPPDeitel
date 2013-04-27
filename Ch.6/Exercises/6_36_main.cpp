// Exercise 6.36 in Deitel
// Learning Recursion!
// Write a recursive function power( base, exponent ) that takes
// both parameters as ints and does what it says on the label :)
// I can assume that exponent is greater than or equal to 1
// Author: Paul Dulac

#include <iostream>
using namespace std;

int power( int, int );

int main()
{
	int base, exponent;

	cout << "Please enter the base (int): ";
	cin >> base;
	cout << "Please enter the exponent (int): ";
	cin >> exponent;

	cout << base << " to the " << exponent << " power is: "
		<< power( base, exponent ) << endl;

	return 0;
}


int power( int base, int exponent )
{
	if ( exponent > 1 )
		return base * power( base, exponent - 1 );
	else // exponent == 1
		return base;
}