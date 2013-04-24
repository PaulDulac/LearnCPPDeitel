// Exercise 4.18 in deitel c++
// Write a program that uses a while statement and tab escape
// sequence "\t" to print the listed table of values.
// Author: Paul Dulac

#include <iostream>
using namespace std;

int main()
{
	int n = 1;
	cout << "N\t10*N\t100*N\t1000*N" << endl << endl;

	while (n <= 5)
	{
		cout << n << "\t" << 10 * n << "\t" << 100 * n << "\t"
			<< 1000 * n << endl;

		n++;
	}

	return 0;
}                                     