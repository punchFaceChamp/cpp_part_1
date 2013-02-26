#include <iostream>

using namespace std;

int main()
{
	const double	RAISE = 1.076;
	const int		YEAR_MONTHS = 12
					,MONTHS_OWED = 6;
	double			oldYearSalary
					,oldMonthSalary
					,newYearSalary
					,newMonthSalary
					,owedSalary;

	cout << "What is your current salary? $";
	cin >> oldYearSalary;

	oldMonthSalary = oldYearSalary / YEAR_MONTHS;
	newYearSalary  = oldYearSalary * RAISE;
	newMonthSalary = newYearSalary / YEAR_MONTHS;
	owedSalary     = ((newYearSalary - oldYearSalary) / YEAR_MONTHS) * MONTHS_OWED;

	cout << "$" << owedSalary << " is owed to you.\n"
		<< "Your new yearly salary is $" << newYearSalary << ".\n"
		<< "Your new monthly salary is $" << newMonthSalary << ".\n";

	return 0;
}