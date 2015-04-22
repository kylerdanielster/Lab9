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
	string getName() const;
	string getSsn() const;

	void setName(string);
	void setSsn(string);

	virtual double earnings() = 0;
	virtual void print() const;

};

#endif // !1
