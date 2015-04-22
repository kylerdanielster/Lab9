#include "CheckingAccount.h"

void CheckingAccount::deposite(double d)
{
	if (balance < 50)
	{
		if (d >= 20)
		{
			balance += d;
			deposits++;
		}
	}
	else 
	{
		balance += d;
		deposits++;
	}

	
}

void CheckingAccount::withdrawl(double w)
{
	if (balance >= w)
	{
		balance -= w;
		if (balance < 50)
			balance -= 10;
	}

	
}