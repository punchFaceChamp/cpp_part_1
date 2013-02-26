#include <iostream>

using namespace std;

int main()
{
	const double TON_OUNCES = 35273.92;
	double cerealOunces;

	cout << "How many ounces does your cereal box weigh? ";
	cin >> cerealOunces;
	cout << "Your cereal box weighs " << cerealOunces / TON_OUNCES << " metric tons.\n"
		<< "It would take " << TON_OUNCES / cerealOunces << " cereal boxes to equal 1 metric ton!\n";

	return 0;
}