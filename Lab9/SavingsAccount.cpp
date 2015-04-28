#include "SavingsAccount.h"

void SavingsAccount::deposit(double d)
{
	if (balance < 100){
		if (d > 50)
		{
			balance += d;
			deposits++;
		}
	}
	else {
		balance += d;
		deposits++;
	}
}


void SavingsAccount::withdraw(double w)
{
	if (balance > w){
		balance -= w;
	}

	if (balance < 100)
		balance -= 30;
}