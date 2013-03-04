#include <iostream>

using namespace std;

double mpg(double litersConsumed,int milesTraveled);

const double LITER_GALLONS = .264179;

int main()
{
	char	quit = 'n';
	double	liters;
	int		miles;

	while(quit != 'y')
	{
		cout << "Enter liters consumed: ";
		cin >> liters;
		cout << "Enter miles traveled: ";
		cin >> miles;

		printf("\n");
		printf("#############################\n");
		printf("Your car performs at %.2fmpg.\n",mpg(liters,miles));
		printf("#############################\n");

		cout << "Quit? (y/n): ";
		cin >> quit;
		cout << endl;
	}

	return 0;
}

double mpg(double litersConsumed,int milesTraveled)
{
	return milesTraveled / (litersConsumed * LITER_GALLONS);
}

/*
	// ==========
	// = OUTPUT =
	// ==========

	Enter liters consumed: 5
	Enter miles traveled: 100

	#############################
	Your car performs at 75.71mpg.
	#############################
	Quit? (y/n): n

	Enter liters consumed: 8 
	Enter miles traveled: 200

	#############################
	Your car performs at 94.63mpg.
	#############################
	Quit? (y/n): y
*/