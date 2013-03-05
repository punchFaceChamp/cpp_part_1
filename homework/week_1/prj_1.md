Shammel Lee | sidekick2rida@gmail.com

### Homework: Week 1

#####Project 1
```
#include <iostream>

using namespace std;

const double TON_OUNCES = 35273.92;

double ounceToTon(double oz)
{
	return oz / TON_OUNCES;
}

double ouncesInTon(double oz)
{
	return TON_OUNCES / oz;
}

int main()
{
	double cerealOunces;

	cout << "How many ounces does your cereal box weigh? ";
	cin >> cerealOunces;
	cout << "Your cereal box weighs " << ounceToTon(cerealOunces) << " metric tons.\n"
		<< "It would take " << ouncesInTon(cerealOunces) << " cereal boxes to equal 1 metric ton!\n";

	return 0;
}
```
