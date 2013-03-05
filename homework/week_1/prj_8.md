Shammel Lee | sidekick2rida@gmail.com

### Homework: Week 1

#####Project 8
```
#include <iostream>

using namespace std;

int main()
{
	const int MIN = 4;
	double guess,r,n;
	int tries = 5;

	cout << "What number would you like to find the square root of? ";
	cin >> n;

	guess = n/2;

	if(n >= MIN)
	{
		while(tries-- > 0)
		{
			if(guess * guess > n)
			{
				r = n / guess;
				guess = (guess + r) / 2;
			}

			cout << "guessing " << guess << "\n";
		}

		cout << "The square root of " << n << " is ~" << guess << "\n";
	}else
	{
		cout << "For higher precision, the number should be " << MIN << " or greater.\n";
	}

	return 0;
}
```