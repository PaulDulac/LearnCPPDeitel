// Ancillary header for exercise 6.15 in Deitel
// This is just a set of functions for finding random integer
// values within a given range, so that I can write a brief
// main function that just tests whether or not they're actually within
// range.  These randoms will need to be seeded via srand().
// Author: Paul Dulac

using namespace std;

int random1to2(); // 1 <= n <= 2
int random1to100(); // 1 <= n <= 100
int random0to9(); // 0 <= n <= 9
int random1000to1112(); // see the pattern?
int randomNeg1to1(); // the range is totally in the name
int randomNeg3to11(); // so yea