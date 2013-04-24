// CrummyEncrypter.cpp
// This is my implementation of the weak-encryption system
// requested in Deitel Exercise 4.35
// It takes each digit of a four-digit number, adds 7 then
// takes the remainder of the new value divided by 10.  These
// new digits are then rearranged by switching the first and third
// digits, then switching the second and fourth digits. 
// Author: Paul Dulac

#include <iostream>
using namespace std;

int numberMuncher( int ); // scrambles the values by the algorithm

int main()
{
	int originalNumber;
	int firstDigit, secondDigit, thirdDigit, fourthDigit;

	cout << "Please enter the four-digit number to be encrypted: ";
	cin >> originalNumber;

	// separate the digits
	firstDigit = originalNumber / 1000;
	secondDigit = originalNumber / 100;
	thirdDigit = originalNumber / 10;
	fourthDigit = originalNumber % 10;

	// print new number, swapping places of first with third, and
	// second with fourth
	cout << "Encrypted: " << numberMuncher( thirdDigit ) 
		<< numberMuncher( fourthDigit ) << numberMuncher( firstDigit )
		<< numberMuncher( secondDigit ) << endl;

	return 0;
}

// Scrambles the digit based on the specification in the prompt
int numberMuncher( int digit )
{
	int newDigit = ( digit + 7 ) % 10;
	return newDigit;
}