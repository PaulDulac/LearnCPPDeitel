// Exercise 6.35 in Deitel
// A simple guess the number game, from 1-1000, but this
// time it tracks the number of guesses
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
	int timesGuessed = 0;
	bool guessedTheNumber = false;

	cout << "I have a number between 1 and 1000." << endl;
	cout << "Can you guess my number?" << endl;
	cout << "Please type your first guess: ";
	cin >> guess;

	while ( guessedTheNumber == false )
	{
		timesGuessed++;

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

	if ( timesGuessed > 10 )
		cout << "You should be able to do better!" << endl;
	else if ( timesGuessed == 10 )
		cout << "Ahah! You know the secret!" << endl;
	else
		cout << "Either you know the secret or you got lucky!" << endl;

	return 0;
}


int setNumber()
{
	srand( time( 0 ) );

	return ( rand() % 1000 ) + 1;
}