#ifndef SALARIEDCOMMISSIONEMPLOYEE_H
#define SALARIEDCOMMISSIONEMPLOYEE_H
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"

class SalariedCommissionEmployee : public SalariedEmployee,
	public CommissioneEmployee
{
public:
	virtual double earnings();
	virtual void print() const;
};
#endif // !SALARIEDCOMMISSIONEMPLOYEE_H
