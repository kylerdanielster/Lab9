#ifndef COMMISSIONEEMPLOYEE_H
#define COMMISSIONEEMPLOYEE
#include "Employee.h"

class CommissionEmployee : public Employee
{
private:
	double comissionRate;
	double grossSales;
public:
	virtual double earnings();
	virtual void print() const;
};

#endif // !COMMISSIONEDEMPLOYEE_H
