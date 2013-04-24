// 6.15 in deitel.
// Implementation of funcitons for finding random integer values
// within a given range. These randoms will need to be seeded via
// srand()
// Author: Paul Dulac

#include <cstdlib>
#include "RandomNumbers.h"
using namespace std;

int random1to2()
{
	int randomNumber = ( rand() % 2 ) + 1;
	return randomNumber; 
}

int random1to100()
{
	int randomNumber = ( rand() % 100 ) + 1;
	return randomNumber; 
}

int random0to9()
{
	int randomNumber = ( rand() % 10 );
	return randomNumber;
}

int random1000to1112()
{
	int randomNumber = ( rand() % 113 ) + 1000;
	return randomNumber;
}

int randomNeg1to1()
{
	int randomNumber = ( rand() % 2 ) - 1;
	return randomNumber;
}

int randomNeg3to11()
{
	int randomNumber = ( rand() % 8 ) + 3;
	return randomNumber;
}