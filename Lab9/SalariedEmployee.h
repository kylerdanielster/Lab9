#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "Employee.h"

class SalariedEmployee : public Employee
{
private:
	double salary;
public:
	virtual double earnings();
	virtual void print() const;
};

#endif // !SALARIEDEMPLOYEE_H
