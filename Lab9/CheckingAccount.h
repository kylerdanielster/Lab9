#ifndef CHECKINGACCOUNT
#define CHECKINGACCOUNT
#include "BankAccount.h"

class CheckingAccount : public BankAccount{
private:

public:
	virtual void withdrawl(double);
	virtual void monthlyProc();
};
#endif