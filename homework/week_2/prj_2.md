Shammel Lee | sidekick2rida@gmail.com

### Homework: Week 2

#####Project 2

```
#include <iostream>

using namespace std;

void calculateLoan(double,double,double,double,int &,double &,bool &,bool &);

int main()
{
	int		monthsUntilPaid = 0;
	double	principal
			,yearlyInterestRate
			,monthlyPayment
			,totalInterestPaid = 0
			,downPayment = 0;
	bool	validMonthlyPayment,loanNeeded;

	cout << "Enter loan amount: $";
	cin >> principal;
	cout << "Enter yearly interest rate percentage: ";
	cin >> yearlyInterestRate;
	cout << "Enter monthly payment: $";
	cin >> monthlyPayment;
	cout << "Enter down payment: $";
	cin >> downPayment;

	calculateLoan(principal,yearlyInterestRate,monthlyPayment,downPayment,monthsUntilPaid,totalInterestPaid,validMonthlyPayment,loanNeeded);

	if(loanNeeded)
	{
		if(validMonthlyPayment)
		{
			printf("\n");
			printf("##############################################\n");
			printf("Months needed to pay off loan ....... %d\n",monthsUntilPaid);
			printf("Total accrued interest .............. $%.2f\n",totalInterestPaid);
			printf("##############################################\n");
		}else
		{
			printf("\n");
			printf("#############################################\n");
			printf("Enter higher monthly payment or down payment.\n");
			printf("#############################################\n");
		}
	}else
	{
		printf("\n");
		printf("###############\n");
		printf("No loan needed.\n");
		printf("###############\n");
	}

	return 0;
}

void calculateLoan(double principal,double yearlyInterestRate,double monthlyPayment,double downPayment,int &monthsUntilPaid,double &totalInterestPaid,bool &validMonthlyPayment,bool &loanNeeded)
{
	double	monthlyInterestRate = (yearlyInterestRate / 12) / 100
			,curMonthlyInterest;

	loanNeeded          = downPayment < principal;
	principal          -= downPayment;
	validMonthlyPayment = monthlyPayment > (principal * monthlyInterestRate);

	if(loanNeeded && validMonthlyPayment)
	{
		while(principal > 0)
		{
			totalInterestPaid += curMonthlyInterest = (principal * monthlyInterestRate);
			principal -= (monthlyPayment - curMonthlyInterest);
			monthsUntilPaid++;
		}
	}
}

/*
	// ==========
	// = OUTPUT =
	// ==========

	Enter loan amount: $1000
	Enter yearly interest rate percentage: 18
	Enter monthly payment: $50
	Enter down payment: $0

	##############################################
	Months needed to pay off loan ....... 24
	Total accrued interest .............. $197.83
	##############################################
*/
```
