// Exercise 6.34 in Deitel
// A simple guess the number game, from 1-1000
// Author: Paul Dulac

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int setNumber();

int main()
{
	int number = setNumber();
	int guess;
	bool guessedTheNumber = false;

	cout << "I have a number between 1 and 1000." << endl;
	cout << "Can you guess my number?" << endl;
	cout << "Please type your first guess: ";
	cin >> guess;

	while ( guessedTheNumber == false )
	{
		if ( guess == number )
		{
			guessedTheNumber = true;
			cout << "Excellent! You guessed the number!" << endl;
		}
		else
		{
			if ( guess < number )
			{
				cout << "Too low. Try again: ";
				cin >> guess;
			}
			else
			{
				cout << "Too high. Try again: ";
				cin >> guess;
			}
		}
	}

	return 0;
}


int setNumber()
{
	srand( time( 0 ) );

	return ( rand() % 1000 ) + 1;
}