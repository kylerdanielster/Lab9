#include "BankAccount.h"

void BankAccount::withdraw(double w)
{
	if (w > balance)
		balance -= w;
}