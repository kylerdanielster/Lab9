#ifndef COMMISSIONEDEMPLOYEE_H
#define COMMISSIONEDEMPLOYEE
#include "Employee.h"

class CommissionesEmployee : public Employee
{
private:
	double comissionRate;
	double grossSales;
public:
	virtual double earnings();
	virtual void print() const;
};

#endif // !COMMISSIONEDEMPLOYEE_H
