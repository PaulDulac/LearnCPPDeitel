// Code for exercise 5.5 in deitel
// Program sums a sequence of integers.  The first integer read 
// should specify the # of values to be entered.
// Author: Paul Dulac

#include <iostream>
using namespace std;

int main()
{
	int number;
	int sum = 0;
	int numOfNums;

	cout << "Enter the number of numbers you will be summing: ";
	cin >> numOfNums;

	for ( int counter = 1; counter <= numOfNums; counter++ )
	{
		cin >> number;
		sum += number;
	}

	cout << "The total is: " << sum << endl;

	return 0;
}