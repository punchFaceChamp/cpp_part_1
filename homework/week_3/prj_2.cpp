#include <iostream>

using namespace std;

double inflationRate(double oldPrice,double newPrice);

int main()
{
	char	quit = 'n';
	double	oldPrice
			,newPrice;

	while(quit != 'y')
	{
		cout << "Enter price of item 1 year ago: $";
		cin >> oldPrice;
		cout << "Enter price of item today: $";
		cin >> newPrice;

		printf("\n");
		printf("#################################################\n");
		printf("The rate of inflation for the past year is %.2f%%\n",inflationRate(oldPrice,newPrice));
		printf("#################################################\n");

		cout << "Quit? (y/n): ";
		cin >> quit;
		cout << endl;
	}

	return 0;
}

double inflationRate(double oldPrice,double newPrice)
{
	double	greater = newPrice > oldPrice ? newPrice : oldPrice
			,lesser = greater == oldPrice ? newPrice : oldPrice;

	return ((greater - lesser) / lesser) * 100;
}

/*
	// ==========
	// = OUTPUT =
	// ==========

	Enter price of item 1 year ago: $5
	Enter price of item today: $7

	#################################################
	The rate of inflation for the past year is 40.00%
	#################################################
	Quit? (y/n): n

	Enter price of item 1 year ago: $375
	Enter price of item today: $385

	#################################################
	The rate of inflation for the past year is 2.67%
	#################################################
	Quit? (y/n): y
*/