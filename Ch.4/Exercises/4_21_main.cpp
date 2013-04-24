// What does the following program print?
// Exercise 4.21 in deitel
// Author: Paul Dulac

#include <iostream>
using namespace std;

int main()
{
	int count = 1;

	while ( count <= 10 )
	{
		cout << ( count % 2 ? "****" : "++++++++" ) << endl;
		count++;
	}
}