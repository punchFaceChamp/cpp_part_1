/* program factorial - computes the factorial of positive whole integer numbers - not too many */

#include <stdio.h>

unsigned long factorial( );		/* K & R prototyping */

int main()
{

	int x; 
	unsigned long fact;		/* get a bit more dynamic range */	

	printf(“Enter number:\n”);
	scanf(“%d”,&x);
	if(x < 0) 
	{
		printf(“Input Must > 0\n”);
		exit(1);
	}

	fact = factorial(x);

	printf(“The factorial of %d = %lu\n”,x,fact);

}

unsigned long factorial( x)
int x;
{
	unsigned long ans;
	int k = 1;

	for(ans =1; k < x; x--)
	ans = ans*x;

	return ans;
}

/* 				Results 

factorial
Enter number:
8
The factorial of 8 = 40320

Enter number:
0
The factorial of 0 = 1

Enter number:
12
The factorial of 12 = 479001600

*/
