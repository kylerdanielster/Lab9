#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
#include <string>

using namespace std;

class BankAccount{
protected:
	double balance;
	int withdrawls, deposits;
	//double AnnualRate, monthlySerCharge;

public:
	BankAccount(){}
	BankAccount(double b, double d, double w) { balance = b; deposit(d); withdrawl(w); ++deposits; }
	
	virtual void deposit(double deposite) { balance += deposite; ++withdrawls; }

	virtual void withdrawl(double);
	
	//virtual void calcInt();
	//virtual void monthlyProc();
};
#endif