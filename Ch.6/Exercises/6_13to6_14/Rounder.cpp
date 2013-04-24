// A set of functions for rounding a double to the zeroth,
// tenths, hundredths, and thousandths place.
// Created for Exercise 6.14 in Deitel
// Author: Paul Dulac

#include <cmath>
#include "Rounder.h"
using namespace std;

int roundToInteger( double number )
{
	int rounded = floor( number + .5 );
	return rounded;
}

double roundToTenths( double number )
{
	double rounded = floor( ( number * 10 ) + .5 ) / 10;
	return rounded;
}

double roundToHundredths( double number )
{
	double rounded = floor( ( number * 100 ) + .5 ) / 100;
	return rounded;
}

double roundToThousandths( double number )
{
	double rounded = floor( ( number * 1000 ) + .5 ) / 1000;
	return rounded;
}