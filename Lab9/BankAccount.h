#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
#include <string>

using namespace std;

class BankAccount{
protected:
	double balance;
	int withdraws,
        deposits;
	//double AnnualRate, monthlySerCharge;

public:
    BankAccount(){ cout << "BankAccount constructor" << endl; } // initialize default  values
    BankAccount(double b){ balance = b; }
	BankAccount(double b, int d, int w) { balance = b; deposit(d); withdraw(w); ++deposits; }
	
	virtual void deposit(double deposite) { balance += deposite; ++withdraws; }

	virtual void withdraw(double);
	
	//need getters and setters for: balance. withdrawls, deposits
    void setBal(double b){ balance = b; }
    double getBal(){ return balance; }
    
    //virtual void calcInt();
	//virtual void monthlyProc();
};
#endif