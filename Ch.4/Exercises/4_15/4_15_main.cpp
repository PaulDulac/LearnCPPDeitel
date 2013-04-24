// Calculate salary for salespeople who are paid a base salary
// plus a percentage of their gross sales.
// Author: Paul Dulac

#include <iostream>
using namespace std;

double calculateSalary( double, double, double );
const double BASE_SALARY = 200.00;
const double COMMISSION_PERCENTAGE = .09; // to be multiplied against BASE_SALARY

int main()
{
	double sales = 0;
	cout << "Enter sales in dollars (or -1 to end): ";
	cin >> sales;

	while ( sales != -1 )
	{
		cout << "Salary is: "
			<< calculateSalary( BASE_SALARY, COMMISSION_PERCENTAGE, 
				sales) << endl;

		cout << "Enter sales in dollars (or -1 to end): ";
		cin >> sales;
	}

	return 0;
}

double calculateSalary( double baseSalary, double commission, 
	double sales )
{
	return baseSalary + (commission * sales);
}