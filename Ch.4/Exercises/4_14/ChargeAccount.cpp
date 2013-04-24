// Represents a charge-account for a single customer
// The customer has a credit limit set by the store
//Author: Paul Dulac

#include "ChargeAccount.h"
using namespace std;

ChargeAccount::ChargeAccount()
{
}

void ChargeAccount::setAccountNo( int number )
{
	accountNo = number;
}

void ChargeAccount::setBeginningBalance( double balance )
{
	beginningBalance = balance;
}

void ChargeAccount::setTotalCharges ( double charges )
{
	totalCharges = charges;
}

void ChargeAccount::setTotalCredits( double credits )
{
	totalCredits = credits;
}

void ChargeAccount::setCreditLimit( double limit )
{
	creditLimit = limit;
}

double ChargeAccount::getNewBalance()
{
	return newBalance;
}

// newBalance = beginningBalance + totalCharges - totalCredits
void ChargeAccount::calculateNewBalance()
{
	newBalance = beginningBalance + totalCharges - totalCredits;
}

bool ChargeAccount::checkCreditOverage()
{
	if ( newBalance > creditLimit )
		return true;
	else
		return false;
}