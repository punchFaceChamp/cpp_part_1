#include <iostream>

using namespace std;

double gForce(double m1,double m2,double d);

const double G = 6.673E-8;

int main()
{
	double m1,m2,d;

	return 0;
}

double gForce(double m1,double m2,double d)
{
	return ((G * (m1 * m2)) / (d * d));
}