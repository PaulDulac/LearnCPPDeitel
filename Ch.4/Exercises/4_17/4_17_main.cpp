// Exercise 4.17 in deitel c++
// Find the largest # out of 10 input by the user using only
// three variables, as follows:
// counter, number, largest
// Author: Paul Dulac

#include <iostream>
using namespace std;

int main()
{
	int counter = 1;
	int number;
	int largest = 0;

	while (counter <= 10)
	{
		cout << "Please enter number " << counter << ": ";
		cin >> number;

		if (number > largest)
			largest = number;

		counter++;
	}

	cout << "\nThe largest number is: " << largest << endl;

	return 0;
}