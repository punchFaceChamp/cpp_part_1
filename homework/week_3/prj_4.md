Shammel Lee | sidekick2rida@gmail.com

### Homework: Week 3

#####Project 4

```
#include <iostream>

using namespace std;

double gForce(double m1,double m2,double d);

const double G = 6.673E-8;

int main()
{
	double m1,m2,d;
	char quit = 'n';

	while(quit != 'y')
	{
		cout << endl;
		cout << "How many grams does the first object weigh? ";
		cin >> m1;
		cout << "How many grams does the second object weight? ";
		cin >> m2;
		cout << "How many centimeters is between the two objects? ";
		cin >> d;

		printf("\n");
		printf("#########################################################\n");
		printf("The G-Force between the two objects is %f dynes.\n",gForce(m1,m2,d));
		printf("#########################################################\n");

		cout << "Quit? (y/n): ";
		cin >> quit;
	}

	return 0;
}

double gForce(double m1,double m2,double d)
{
	return ((G * (m1 * m2)) / (d * d));
}

/*
	// ==========
	// = OUTPUT =
	// ==========

	How many grams does the first object weigh? 100000
	How many grams does the second object weight? 100000
	How many centimeters is between the two objects? 50

	#########################################################
	The G-Force between the two objects is 0.266920 dynes.
	#########################################################
	Quit? (y/n): n

	How many grams does the first object weigh? 350000
	How many grams does the second object weight? 189000
	How many centimeters is between the two objects? 100

	#########################################################
	The G-Force between the two objects is 0.441419 dynes.
	#########################################################
	Quit? (y/n): y
*/
```
