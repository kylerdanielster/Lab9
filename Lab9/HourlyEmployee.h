#ifndef HOURLYEMPLOYEE_H
#include "Employee.h"

class HourlyEmployee : public Employee
{
private:
	int hours;
	double wages;
public:
    HourlyEmployee(){}
    HourlyEmployee(string n, string ssn, int h, double w)
    {
        std::cout << "HourlyEmployee constructor" << std::endl;
        setName(n);
        setSsn(ssn);
        hours = h;
        wages = w;
    }
    
    virtual double earnings() { return 0; }
    virtual void print() const {}
};

#endif // !HOURLYEMPLOYEE_H