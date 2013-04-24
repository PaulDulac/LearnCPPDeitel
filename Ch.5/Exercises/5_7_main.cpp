// Exercise 5.7 in deitel
// Read the program and try to determine what it does.
// Then type it and find out for sure.

#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;

	cout << "Enter two integers in the range 1-20: ";
	cin >> x >> y; // read values for x and y

	for ( int i = 1; i <= y; ++i )
	{
		for ( int j = 1; j <= x; ++j )
			cout << '@';

		cout << endl;
	}
}