#ifndef SALARIEDCOMMISSIONEMPLOYEE_H
#define SALARIEDCOMMISSIONEMPLOYEE_H
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"

class SalariedCommissionEmployee : public SalariedEmployee, public CommissionEmployee {
public:
    SalariedCommissionEmployee(string n, string ssn, double s, double cr, double gs) : SalariedEmployee(s) , CommissionEmployee(cr, gs)
    {
        setName(n);
        setSsn(ssn);
    }
	virtual double earnings();
	virtual void print() const;
};
#endif // !SALARIEDCOMMISSIONEMPLOYEE_H