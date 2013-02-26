#include <iostream>

using namespace std;

double percToDec(double perc)
{
	return perc / 100;
}

int main()
{
	double	amountNeeded
			,interestRate
			,faceValue
			,monthlyPayment;
	int		loanLength;

	cout << "How much money would you like to borrow? $";
	cin >> amountNeeded;
	cout << "What interest rate percentage would you like? ";
	cin >> interestRate;
	cout << "How many months would you like to pay it back in? ";
	cin >> loanLength;

	faceValue = amountNeeded * (percToDec(interestRate) + 1);
	monthlyPayment = faceValue / loanLength;

	cout << "The face value of your loan is $" << faceValue << "\n"
		<< "Your monthly payments will be $" << monthlyPayment << "\n";

	return 0;
}