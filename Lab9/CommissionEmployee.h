#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include "Employee.h"

class CommissionEmployee : public Employee
{
private:
	double commissionRate;
	double grossSales;
public:
    CommissionEmployee(double cr, double gs) { commissionRate = cr; grossSales = gs; }
    CommissionEmployee(string n, string ssn, double cr, double gs)
    {
        setName(n);
        setSsn(ssn);
        commissionRate = cr;
        grossSales = gs;
    }
	virtual double earnings() { return 0; }
	virtual void print() const {}
};

#endif // !COMMISSIONEDEMPLOYEE_H
