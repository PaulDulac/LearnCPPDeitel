// Code for exercise 6.12 in deitel
// Takes in the hours that three cars were parked in a parking garage
// and determines the total charges for each, based on a $2.00 base
// charge for the first three hours and a $0.50 hourly charge each
// hour or portion thereof up to a daily max of $10.00
// Author: Paul Dulac

#include <iostream>
#include <iomanip>
using namespace std;

// finds the total payment due
double calculateCharges( double ); 


int main()
{
	double car1 = 0; // the car's hours
	double car2 = 0;
	double car3 = 0;

	cout << "Please enter the hours for car 1: ";
	cin >> car1;
	cout << "Please enter the hours for car 2: ";
	cin >> car2;
	cout << "Please enter the hours for car 3: ";
	cin >> car3;

	// Print the table
	cout << "\n\nCar" << setw(13) << "Hours" << setw(13) << "Charge" << endl;
	cout <<     "1  " << setw(13) << car1 << setw(13)
		<< fixed << setprecision(2) << calculateCharges( car1 ) << endl;
	cout <<     "2  " << setw(13) << car2 << setw(13)
		<< fixed << setprecision(2) << calculateCharges( car2 ) << endl;
	cout <<     "3  " << setw(13) << car3 << setw(13)
		<< fixed << setprecision(2) << calculateCharges( car3 ) << endl;
	cout << "Total" << setw(11) << ( car1 + car2 + car3 )
		<< setw(13) << ( calculateCharges( car1 ) + calculateCharges( car2 )
			+ calculateCharges( car3 ) ) << endl;

	return 0;
}


double calculateCharges( double hours )
{
	/*- MAGIC NUMBER!!!  INITIAL BASE CHARGE IS $2.00 -*/
	double totalCharge = 2.00;

	if ( hours <= 3.0 )
	{
		return totalCharge;
	}
	else
	{
		hours = hours - 3; // remove the base hours to get $0.50 ones

		while ( totalCharge < 10.00 && hours > 0 )
		{
			totalCharge += 0.50;
			hours -= 1;
		}

		return totalCharge;
	}
}