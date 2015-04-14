#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "BankAccount.h"


class SavingsAccount : public BankAccount{
private:
	bool status;

public:
	virtual void deposit(double);
	virtual void withdrawl(double);
	virtual void monthlyProc();


};
#endif