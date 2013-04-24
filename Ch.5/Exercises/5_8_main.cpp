// Exercise 5.8 in deitel
// write a program that uses a for statement to find the 
// smallest of several integers.  Assume the first value
// read specifies the number of values remaining.
// Author: Paul Dulac

#include <iostream>
using namespace std;

int main()
{
	int numbersToEvaluate;
	int number;
	int smallest;

	cout << "Please enter the number of numbers to be evaluated, followed"
		<< " by the numbers themselves: ";
	cin >> numbersToEvaluate; 
	cin >> smallest; // set the first number as smallest
	// ^ which is why int i is set to 2 in for loop
	for ( int i = 2; i <= numbersToEvaluate; ++i )
	{
		cin >> number;
		if ( number < smallest )
			smallest = number;
	}

	cout << "The smallest number was: " << smallest << endl;
}