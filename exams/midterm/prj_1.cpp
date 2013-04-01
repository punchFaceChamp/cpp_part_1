#include <iostream>

using namespace std;

int pow(int num,int power);

int main()
{
	cout << "10 ^ 3 ........... " << pow(10,3) << endl;
	cout << "2 ^ 10 ........... " << pow(2,10) << endl;
	
	// having trouble calculating 512 ^ 10. numbers too large for data type?
	cout << "512 ^ 10 ......... " << pow(512,10) << endl;

	cout << "3 ^ 512 .......... " << pow(3,512) << endl;
	return 0;
}


int pow(int num,int power)
{
	// =============================================
	// = optimized for calculating large exponents =
	// =============================================

	// the address of a temporary local variable is the same for every time
	// the function is ran

	if(power == 0)
	{
		return num >= 0 ? 1 : -1;
	}

	if(power == 1)
	{
		return num > 0 ? num :(num < 0 ? -(num) : 1);
	}

	int halfPower = power / 2; // divide exponent by 2 for faster calculation
	int product1  = num,product2;

	// get the value of num ^ (power/2)
	for(int i = 2;i <= halfPower;i++)
	{
		product1 *= num;
	}

	// if power is an even number, just square/multiply product1 with 2
	// if power is an odd number, do an extra (product * num) and multiply with product1
	return product1 * (product2 = power % 2 == 0 ? product1 : product1 * num);
}