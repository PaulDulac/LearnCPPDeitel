// Exercise 6.23 in Deitel
// "Write a function that displays at the left margin of the screen
// a solid square of whatever character is contained in character
// parameter fillCharacter, and whose side is specified in int
// parameter side."
// Author: Paul Dulac

//--- mostly I'm just reusing the code from 6.22 ----//

#include <iostream>
using namespace std;

void printSquareToConsole( int, char );


int main()
{
	int sideLength;
	char fillCharacter;

	cout << "Enter how big you want the side of the square to be(int): ";
	cin >> sideLength;
	cout << "Enter the character you want to use and press enter: ";
	cin >> fillCharacter;

	printSquareToConsole( sideLength, fillCharacter );

	return 0;
}


void printSquareToConsole( int sideLength, char fillCharacter )
{
	for ( int i = 1; i <= sideLength; i++ )
	{
		for ( int j = 1; j <= sideLength; j++ )
		{
			cout << fillCharacter;
		}

		cout << endl;
	}
}