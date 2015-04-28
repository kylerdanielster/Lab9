#ifndef BANK_H
#define BANK_H
#include <string>
#include <iostream>
#include "Employee.h"
#include <list>
using namespace std;

class Bank{
private:
	string name;
	list <Employee*> customers;
public:
    Bank(){ cout << "Bank constructor" << endl; }
	
    void setName(string n){ name = n; }
	string getName() const { return name; }
	
	void sortByName();
	void sortByBalance();
	void listCustomers(int);
	
	void addCustomer(Employee *e){ customers.push_back(e); cout << "Customer Added" << endl; }
};

#endif // BANK_H_INCLUDED
