// Exercise 4.19 in deitel c++
// Find the largest 2 #'s out of 10 inputs
// Author: Paul Dulac

#include <iostream>
using namespace std;

int main()
{
	int counter = 1;
	int number;
	int largest = 0;
	int nextLargest = 0;

	while (counter <= 10)
	{
		cout << "Please enter number " << counter << ": ";
		cin >> number;

		if (number > largest)
		{
			nextLargest = largest;
			largest = number;
		}
			

		counter++;
	}

	cout << "\nThe largest number is: " << largest << endl;
	cout << "\nThe second largest is: " << nextLargest << endl;

	return 0;
}