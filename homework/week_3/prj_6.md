Shammel Lee | sidekick2rida@gmail.com

### Homework: Week 3

#####Project 6

```
#include <iostream>
#include <cmath>

using namespace std;

void average(double& n1,double& n2,double& n3,double& n4,double& avg);
void standardDeviation(double& n1,double& n2,double& n3,double& n4,double& avg,double& sd);

int main()
{
	double	avg,sd,n1,n2,n3,n4,vr;
	char	quit = 'n';

	while(quit != 'y')
	{
		cout << "Enter first score: ";
		cin  >> n1;
		cout << "Enter second score: ";
		cin  >> n2;
		cout << "Enter third score: ";
		cin  >> n3;
		cout << "Enter fourth score: ";
		cin  >> n4;

		average(n1,n2,n3,n4,avg);
		standardDeviation(n1,n2,n3,n4,avg,sd);

		cout << endl;
		cout << "######################################" << endl;
		cout << "Average ............... " << avg << endl;
		cout << "Standard Deviation .... " << sd << endl;
		cout << "######################################" << endl;

		cout << "Quit? (y/n): ";
		cin  >> quit;
	 }
	 return 0;
	 
}

void average(double& n1,double& n2,double& n3,double& n4,double& avg)
{
	avg = (n1 + n2 + n3 + n4) / 4;
}

void standardDeviation(double& n1,double& n2,double& n3,double& n4,double& avg, double& sd)
{
	 n1 -= avg;
	 n1 = pow(n1,2);
	 n2 -= avg;
	 n2 = pow(n2,2);
	 n3 -= avg;
	 n3 = pow(n3,2);
	 n4 -= avg;
	 n4 = pow(n4,2);
	 sd =  sqrt((n1 + n2 + n3 + n4) / 4);
}

/*
	// ==========
	// = OUTPUT =
	// ==========

	Enter first score: 90
	Enter second score: 87
	Enter third score: 79
	Enter fourth score: 98

	######################################
	Average ............... 88.5
	Standard Deviation .... 6.80074
	######################################
	Quit? (y/n): n
	Enter first score: 100
	Enter second score: 97
	Enter third score: 98
	Enter fourth score: 95

	######################################
	Average ............... 97.5
	Standard Deviation .... 1.80278
	######################################
	Quit? (y/n): y
*/
```
