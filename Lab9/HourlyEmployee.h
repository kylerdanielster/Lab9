#ifndef HOURLYEMPLOYEE_H
#include "Employee.h"

class HourlyEmployee : public Employee
{
private:
	int hours;
	double wages;
public:
	virtual double earnings();
	virtual void print() const;
};
#endif // !HOURLYEMPLOYEE_H
