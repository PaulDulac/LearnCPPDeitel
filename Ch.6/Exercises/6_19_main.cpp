// Define a function hypotenuse that calculates the
// hypotenuse of a right triangle when the other 
// two sides are given.  Should take two doubles
// and return a double.  Use this function to determine
// hypotenuse of given triangles.
// Author: Paul Dulac

#include <iostream>
#include <cmath>
using namespace std;

double findHypotenuse( double, double );

int main()
{
	cout << "1: " << findHypotenuse( 3, 4 ) << endl;
	cout << "2: " << findHypotenuse( 5, 12 ) << endl;
	cout << "3: " << findHypotenuse( 8, 15 ) << endl;

	return 0;
}

double findHypotenuse( double a, double b )
{
	return sqrt( pow(a, 2) + pow(b, 2) ); // pythagorean theorem
}