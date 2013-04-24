// Code for Exercise 6.18 in Deitel
// Write a function integerPower(base, exponent) that 
// returns the value of the base to the power of the 
// exponent.  Assume exponent is positive nonzero int and
// base is an integer.  Don't use math lib functions
// Author: Paul Dulac

#include <iostream>
using namespace std;

int integerPower( int, int );

int main()
{
	int base, exponent;

	cout << "Please enter base (int): ";
	cin >> base;
	cout << "Please enter exponent (greater than 0): ";
	cin >> exponent;

	cout << "Evaluates to: " << integerPower( base, exponent ) << endl;

	return 0;
}


int integerPower( int base, int exponent )
{
	long int raised = base;

	for ( int i = 1; i <= exponent - 1; i++ ) // -1 because assigned to raised already.
	{
		raised *= base;
	}

	return raised;
}