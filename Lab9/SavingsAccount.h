#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "BankAccount.h"


class SavingsAccount : public BankAccount{
private:
	bool status;

public:
	SavingsAccount(){}
	SavingsAccount(double bal) : BankAccount(bal) {}
	
	virtual void deposit(double);
	virtual void withdraw(double);
	
	//virtual void monthlyProc();
};
#endif