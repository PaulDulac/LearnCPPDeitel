// Exercise 3.38 in Deitel
// Using recursion to solve the towers of Hanoi puzzle
// Boy, this took me a while to wrap my head around.  Basically, 
// you have to take your disks and keep reducing it to n-1 until you
// get to only one disk, then move that one.  The part that took
// me forever was just dropping in the second print statement between
// the two recursive calls.  Hoooo!  Fun, but not really.
// Author: Paul Dulac

/** NOTE!!! WATCH OUT FOR USING LARGE NUMBERS FOR THE NUMBER OF DISKS
** IT HAS A TENDENCY TO RUN A WHILE AND MUNCH YOUR MEMORY WITH LOTS
** OF FUNCTION CALLS :D
*/

#include <iostream>
using namespace std;

void solveHanoi( int, int, int, int );

int main()
{
	int numOfDisks, startPeg, goalPeg, tempPeg;

	cout << "Towers of Hanoi solver (3 pegs only):" << endl;
	cout << "Enter the number of disks: ";
	cin >> numOfDisks;

	cout << "Enter the number of the starting peg ( 1 2 3 ): ";
	cin >> startPeg;
	cout << "Enter the number of the final peg ( 1 2 3 ): ";
	cin >> goalPeg;
	cout << "Enter the number of the temporary peg ( 1 2 3 ):";
	cin >> tempPeg;
	cout << endl << endl;

	solveHanoi( numOfDisks, startPeg, goalPeg, tempPeg );

	return 0;
}

void solveHanoi( int numOfDisks, int startPeg, int goalPeg, int tempPeg)
{
	if ( numOfDisks == 1 )
		cout << startPeg << " -> " << goalPeg << endl;
	else
	{
		solveHanoi( numOfDisks - 1, startPeg, tempPeg, goalPeg ); 
		cout << startPeg << " -> " << goalPeg << endl;
		solveHanoi( numOfDisks - 1, tempPeg, goalPeg, startPeg ); 
	}
}