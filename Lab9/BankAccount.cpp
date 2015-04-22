#include "BankAccount.h"

void BankAccount::withdrawl(double w)
{
	if (w > balance)
		balance -= w;
}