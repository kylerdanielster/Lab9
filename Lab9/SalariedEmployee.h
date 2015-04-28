#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "Employee.h"
#include <string>

class SalariedEmployee : public Employee
{
private:
	double salary;
public:
    SalariedEmployee(double s) { salary = s; }
    SalariedEmployee(string n, string ssn, double s) { salary = s; setName(n); setSsn(ssn);}
	virtual double earnings();
	virtual void print() const;
};

#endif // !SALARIEDEMPLOYEE_H
