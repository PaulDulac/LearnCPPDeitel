// 4_14_main.cpp
// main function for exercise 4.14 in deitel
// Propgram which determines if a department
// store customer has exceeded the credit limit on
// a charge account.
// Author: Paul Dulac

#include <iostream>
#include "ChargeAccount.h"
using namespace std;

int main()
{
	ChargeAccount account;
	int accountNumber = 0;
	double balance;
	double charges;
	double credits;
	double limit;

	while ( true ) // to escape, checks for accountNumber == -1
	{
		cout << "Enter account number (or -1 to quit): ";
		cin >> accountNumber;

		//*** ESCAPE ***//
		if ( accountNumber == -1 )
			break;  // get out of the loop

		cout << "Enter beginning balance: ";
		cin >> balance;
		cout << "Enter total charges: ";
		cin >> charges;
		cout << "Enter total credits: ";
		cin >> credits;
		cout << "Enter credit limit: ";
		cin >> limit;

		account.setAccountNo( accountNumber );
		account.setBeginningBalance( balance );
		account.setTotalCharges( charges );
		account.setTotalCredits( credits );
		account.setCreditLimit( limit );

		account.calculateNewBalance();

		cout << "New balance is " << account.getNewBalance() << endl;

		if ( account.checkCreditOverage() == true )
		{
			cout << "Account:      " << accountNumber << endl;
			cout << "Credit limit: " << limit << endl;
			cout << "Balance:      " << balance << endl;
			cout << "Credit Limit Exceeded." << endl;
		}
	}

	return 0;
}