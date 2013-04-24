// 6.16 in deitel
// This main class tests the rondom number functions that I've been writing.
// Author: Paul Dulac

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "RandomNumbers.h"
using namespace std;

int main()
{
	int randomNumber;

	srand( time( 0 ) );  // seed rand()

	cout << "Testing random numbers 1 to 100: " << endl;
	
	//print a table of the random numbers
	for ( int i = 1; i <= 500; i++ )
	{
		randomNumber = random1to100();
		cout << randomNumber << "\t";

		if ( ( i % 5 ) == 0 )
		{
			cout << endl;
		}
	}

	cout << endl;

	return 0;
}