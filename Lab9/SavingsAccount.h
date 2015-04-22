#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "BankAccount.h"


class SavingsAccount : public BankAccount{
private:
	bool status;

public:
	SavingsAccount(){}
	SavingsAccount(double bal, double dep, double with) : BankAccount(bal, dep, with)
	{
		deposit(dep);
		withdrawl(with);
	}
	
	virtual void deposit(double);
	virtual void withdrawl(double);
	
	//virtual void monthlyProc();
};
#endif