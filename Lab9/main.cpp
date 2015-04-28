#include <iostream>
#include "Employee.h"
#include "Bank.h"
#include "BankAccount.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
using namespace std;

int main()
{
	Employee* bob = new HourlyEmployee();
	Employee* max = new SalariedEmployee(20.0);

	cout << "Works for me" << endl;

	system("pause");
	return 0;
}