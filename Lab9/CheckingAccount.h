#ifndef CHECKINGACCOUNT
#define CHECKINGACCOUNT
#include "BankAccount.h"

class CheckingAccount : public BankAccount{
private:

public:
	CheckingAccount(){}
    CheckingAccount(double bal) : BankAccount(bal) {}
	
	virtual void deposite(double);
	virtual void withdraw(double);
	
	//virtual void monthlyProc();
};
#endif