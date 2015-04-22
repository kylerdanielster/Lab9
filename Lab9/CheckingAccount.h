#ifndef CHECKINGACCOUNT
#define CHECKINGACCOUNT
#include "BankAccount.h"

class CheckingAccount : public BankAccount{
private:

public:
	CheckingAccount(){}
	CheckingAccount(double bal, double dep, double with) : BankAccount(bal, dep, with) 
	{
	
	}
	
	virtual void deposite(double);
	virtual void withdrawl(double);
	
	//virtual void monthlyProc();
};
#endif