#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include "Employee.h"

class CommissionEmployee : public Employee
{
private:
	double comissionRate;
	double grossSales;
public:
    CommissionEmployee(double cr, double gs) { comissionRate = cr; grossSales = gs; }
    CommissionEmployee(string n, string ssn, double cr, double gs)
    {
        setName(n);
        setSsn(ssn);
        comissionRate = cr;
        grossSales = gs;
    }
	virtual double earnings();
	virtual void print() const;
};

#endif // !COMMISSIONEDEMPLOYEE_H
