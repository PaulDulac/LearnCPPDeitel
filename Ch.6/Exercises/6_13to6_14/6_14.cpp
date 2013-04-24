// Code for Exercise 6.14 in Deitel
// Read in a value and print it rounded to the nearest
// zeroth, tenth, hundredth, and thousandth place using 
// functions you've written.
// Author: Paul Dulac

#include <iostream>
#include <iomanip>
#include "Rounder.h"
using namespace std;

int main()
{
	double numToRound;

	cout << "Please enter a number to be rounded (-1 to quit): ";
	cin >> numToRound;

	while ( numToRound != -1 )
	{
		cout << "\n\nRounded: " << numToRound << " to:" << endl;
		cout << "Int: "
			<< roundToInteger( numToRound ) << endl;
		cout << "Tenths: "
			<< roundToTenths( numToRound ) << endl;
		cout << "Hundredths: "
			<< roundToHundredths( numToRound ) << endl;
		cout << "Thousandths: "
			<< roundToThousandths( numToRound ) << endl;

		cout << "\nPlease enter a number to be rounded (-1 to quit): ";
		cin >> numToRound;
	}

	return 0;
}