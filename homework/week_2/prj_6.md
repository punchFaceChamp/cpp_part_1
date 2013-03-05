Shammel Lee | sidekick2rida@gmail.com

### Homework: Week 2

#####Project 6

```
#include <iostream>

using namespace std;

int main()
{
	const double	waterWeight = 62.4;
	double			weight;
	int				radius;
	bool			floats;

	cout << "Enter weight of sphere in pounds: ";
	cin >> weight;
	cout << "Enter radius in feet: ";
	cin >> radius;

	floats = (((((4 / 3) * 3.14) * (radius * radius * radius)) * waterWeight) >= weight);

	cout << endl;
	cout << "##############################" << endl;
	cout << (floats ? "Yes, the sphere will float." : "No, the sphere will not float.") << endl;
	cout << "##############################" << endl;

	return 0;
}

/*
	// ==========
	// = OUTPUT =
	// ==========

	Enter weight of sphere in pounds: 1000
	Enter radius in feet: 10

	##############################
	Yes, the sphere will float.
	##############################
*/
```
