#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
#include <string>

using namespace std;

class BankAccount{
private:
	string balance;
	int withdrawls, deposits;
	double AnnualRate, monthlySerCharge;

public:
	BankAccount(){}
	BankAccount(string, double);// args: balance and annual interest rates
	
	virtual void deposit(double);
	virtual void withdrawl(double);
	virtual void calcInt();
	virtual void monthlyProc();
};
#endif