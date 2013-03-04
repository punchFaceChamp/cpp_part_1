#include <iostream>

using namespace std;

int main()
{
	bool isPrime;

	printf("\n");
	printf("################################\n");
	printf("The following numbers are prime…\n");

	for(int i = 3;i <= 100;i++)
	{
		isPrime = true;

		for(int j = 2;j < i - 1;j++)
		{
			if(i % j == 0)
			{
				isPrime = false;
				break;
			}
		}

		if(isPrime)
		{
			cout << i << " ";
		}
	}

	printf("\n");
	printf("################################\n");

	return 0;
}

/*
	// ==========
	// = OUTPUT =
	// ==========

	The following numbers are prime…
	3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/