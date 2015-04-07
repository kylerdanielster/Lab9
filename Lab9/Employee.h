#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <list>

using namespace std;

class Employee{
private:
	string name;
	string ssn;
	list<T> accounts;
public:
	string getName() const;
	string getSsn() const;

	void setName(string);
	void setSsn(string);

	virtual double earnings();
	virtual void print() const;

};

#endif // !1
