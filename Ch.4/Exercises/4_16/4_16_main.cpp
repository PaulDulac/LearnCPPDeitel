// 4_16_main.cpp
// Code for exercise 4.16 in deitel c++ book
// calculate the gross pay for an employee based on 
// a base salary and a 40-hour workweek of straight time,
// with time and a half paid for all work in excess of 40 hours
// Author: Paul Dulac

#include <iostream>
using namespace std;

double calculateGrossPay( int, double );

int main()
{
	int hours;
	double hourlyRate;

	cout << "Enter hours worked (-1 to end): ";
	cin >> hours;

	while ( hours != -1 )
	{
		cout << "Enter hourly rate of the employee ($00.00): ";
		cin >> hourlyRate;

		cout << "Salary is: $" << calculateGrossPay( hours, hourlyRate )
			<< endl;

		cout << "\nEnter hours worked (-1 to end): ";
		cin >> hours;	
	}

	return 0;
}


double calculateGrossPay( int hours, double hourlyRate )
{
	int straightTime = 40; // magic #!!! num of hours paid straight
	int overtime = 0;
	double grossPay;

	if ( hours > straightTime )
	{
		overtime = hours - straightTime;
	}

	grossPay = ((hours - overtime) * hourlyRate) + 
		(overtime * (hourlyRate * 1.5));

	return grossPay;
}