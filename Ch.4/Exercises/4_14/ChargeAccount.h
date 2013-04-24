// Represents a charge-account for a single customer
// The customer has a credit limit set by the store
// Author: Paul Dulac

using namespace std;

class ChargeAccount
{
public:
	ChargeAccount();
	void setAccountNo( int );
	void setBeginningBalance( double );
	void setTotalCharges( double );
	void setTotalCredits( double );
	void setCreditLimit( double );

	double getNewBalance();

	void calculateNewBalance();
	bool checkCreditOverage(); //check if newBalance exceeds credit limit

private:
	int accountNo;
	double beginningBalance;
	double totalCharges;
	double totalCredits;
	double creditLimit;
	double newBalance;
};