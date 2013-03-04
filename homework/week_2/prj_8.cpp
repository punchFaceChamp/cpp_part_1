#include <iostream>

using namespace std;

int cToF(int c);

int main()
{
	int celsius = 100,fahrenheit;

	while(celsius != (fahrenheit = cToF(celsius)))
	{
		celsius--;
	}

	cout << endl;
	cout << "#############################################" << endl;
	cout << celsius << " degrees celsius == " << fahrenheit << " degrees fahrenheit" << endl;
	cout << "#############################################" << endl;

	return 0;
}

int cToF(int c)
{
	double f = ((9.0 / 5.0) * c) + 32;
	return f;
}

/*
	// ==========
	// = OUTPUT =
	// ==========

	#############################################
	-40 degrees celsius == -40 degrees fahrenheit
	#############################################
*/