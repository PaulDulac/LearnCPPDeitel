// What does the following program print?
// Exercise 4.22 in Deitel
// Author: Paul Dulac

#include <iostream>
using namespace std;

int main()
{
	int row = 10;
	int column;

	while ( row >= 1 )
	{
		column = 1;

		while (column <= 10)
		{
			cout << (row % 2 ? "<" : ">");
			column++;
		}

		row--;
		cout << endl;
	}
}
