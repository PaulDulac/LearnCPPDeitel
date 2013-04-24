// CrummyDecrypter.cpp
// This is my implementation of the weak-encryption system
// requested in Deitel Exercise 4.35
// This is the decrypter to be paired with the CrummyEncrypter.
// It reverses what was done, leaving the original, unencrypted input.
// Author: Paul Dulac

#include <iostream>
using namespace std;

int numberReguritator( int ); // unscrambles the values

int main()
{
	int encryptedNumber;
	int firstDigit, secondDigit, thirdDigit, fourthDigit;

	cout << "Please enter the four-digit number to be Decrypted: ";
	cin >> encryptedNumber;

	// separate the digits
	firstDigit = encryptedNumber / 1000;
	secondDigit = encryptedNumber / 100;
	thirdDigit = encryptedNumber / 10;
	fourthDigit = encryptedNumber % 10;

	// print new number, swapping places of first with third, and
	// second with fourth
	cout << "Decrypted: " << numberReguritator( thirdDigit ) 
		<< numberReguritator( fourthDigit ) << numberReguritator( firstDigit )
		<< numberReguritator( secondDigit ) << endl;

	return 0;
}

// Removes the scrambling from the original encryption
int numberReguritator( int digit )
{
	int newDigit = ( digit + 3 ) % 10;
	return newDigit;
}