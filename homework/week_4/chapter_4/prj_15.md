Shammel Lee | sidekick2rida@gmail.com

### Homework: Week 4

#####Project 15

```
#include <iostream>

using namespace std;

bool convertToLowestTerms(int &num,int &den);

int main( )
{
	int	 num,den,oldNum,oldDen;
	char quit = 'n';

	while(quit != 'y')
	{
		cout << "Enter numerator: ";
		cin >> num;
		oldNum = num;
		cout << "Enter denominator: ";
		cin >> den;
		oldDen = den;

		if(convertToLowestTerms(num,den))
		{
			cout << oldNum << "/" << oldDen << " => " << num << "/" << den << endl;
		}else
		{
			cout << "Cannot calculate" << endl;
		}

		cout << "Quit? (y/n): ";
		cin >> quit;
	}

	return 0;
}

bool convertToLowestTerms(int &num,int &den)
{
	if(den == 0)
	{
		return false;
	}

	int gcd = den > num ? num : den;

	while(num % gcd != 0 || den % gcd != 0)
	{
		gcd--;
	}

	num /= gcd;
	den /= gcd;

	return true;
}

/*
	// ==========
	// = OUTPUT =
	// ==========

	Enter numerator: 20
	Enter denominator: 60
	20/60 => 1/3
	Quit? (y/n): n
	Enter numerator: 50
	Enter denominator: 0
	Cannot calculate
	Quit? (y/n): n
	Enter numerator: 80
	Enter denominator: 500
	80/500 => 4/25
	Quit? (y/n): y
*/
```