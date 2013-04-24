// Code for exercise 6.17 in deitel
// Write a single statement that prints a number at random from each
// of the following sets:
// 2,4,6,8,10
// 3,5,7,9,11
// 6,10,14,18,22
// Author: Paul Dulac

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int baseRandom(); // provides a # from the base set that the other
					// sets are all derived from.
void firstSetRandom(); // 2,4,6,8,10
void secondSetRandom(); // 3,5,7,9,11
void thirdSetRandom(); // 6,10,14,18,22


int main()
{
	srand( time( 0 ) ); // seed the random # generator

	cout << "First set: " << endl;
	firstSetRandom();
	cout << "\nSecond set: " << endl;
	secondSetRandom();
	cout << "\nThird set: " << endl;
	thirdSetRandom();


	return 0;
}

// yea, not really reusable but whatever in this case
int baseRandom()
{
	return ( ( rand() % 5 ) + 1 ) * 2;
}

void firstSetRandom()
{
	for ( int i = 1; i <= 10; i++ )
	{
		cout << baseRandom() << "\t";
		if ( i % 5 == 0 ) // every fifth time...
		{
			cout << endl;
		}
	}
}

void secondSetRandom()
{
	for ( int i = 1; i <= 10; i++ )
	{
		cout <<  baseRandom() + 1 << "\t";
		if ( i % 5 == 0 ) // every fifth time...
		{
			cout << endl;
		}
	}
}

void thirdSetRandom()
{
	for ( int i = 1; i <= 10; i++ )
	{
		cout << ( baseRandom() + 1 ) * 2 << "\t";
		if ( i % 5 == 0 )
		{
			cout << endl;
		}
	}
}