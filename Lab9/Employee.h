#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <list>
#include "BankAccount.h"

using namespace std;

class Employee{
private:
	string name;
	string ssn;
	list<BankAccount*> accounts;
public:
	void addAccount(BankAccount* a) { accounts.push_back(a); cout << "Account Added" << endl; }

    string getName() const { return name; }
    string getSsn() const {return ssn; }

    void setName(string n) { name = n; }
    void setSsn(string s) { ssn = s; }

	virtual double earnings() = 0;
    virtual void print() const {}// returns name, ssn, salasry and bank account information

};

#endif // !1
