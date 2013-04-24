// Exercise 5.9 in deitel
// Write a program that uses a for statement to calculate and print
// the product of the odd integers from 1 to 15
// Author: Paul Dulac

#include <iostream>
using namespace std;

int main()
{
	int product = 1;

	for ( int i = 1; i <= 15; i += 2 )
	{
		product *= i;
	}

	cout << product << endl;

	return 0;
}
