Shammel Lee | sidekick2rida@gmail.com

### Homework: Week 4

#####Project 7

```
#include <iostream>

using namespace std;

void input(int &m1,int &m2);
void convert(int &m1,int &m2,int &m3,int &m4);
void output(int &m1,int &m2,int &m3,int &m4);

const double	FACTOR_1       = .4535;
const int		FACTOR_2       = 16
				,FACTOR_3      = 1000;
const string	UNIT_1         = "pounds"
				,UNIT_1_ABBR   = "lbs"
				,UNIT_2        = "ounces"
				,UNIT_2_ABBR   = "oz"
				,UNIT_3_abbr   = "kg"
				,UNIT_4_ABBR   = "g";
int				m1,m2,m3,m4;
char			quit = 'n';

int main()
{
	while(quit != 'y')
	{
		input(m1,m2);
		convert(m1,m2,m3,m4);
		output(m1,m2,m3,m4);

		cout << "Quit? (y/n): ";
		cin >> quit;
	}

	return 0;
}

void input(int &m1,int &m2)
{
	cout << "Enter " << UNIT_1 << ": ";
	cin >> m1;
	cout << "Enter " << UNIT_2 << ": ";
	cin >> m2;
}

void convert(int &m1,int &m2,int &m3,int &m4)
{
	double m3Double = ((((double)m1 * FACTOR_2) + m2) / FACTOR_2) * FACTOR_1;
	m3 = int(m3Double);
	m4 = (m3Double - m3) * FACTOR_3;
}

void output(int &m1,int &m2,int &m3,int &m4)
{
	cout << "####################" << endl;
	cout << m1 << UNIT_1_ABBR << " " << m2 << UNIT_2_ABBR << " = " << m3 << UNIT_3_abbr << " " << m4 << UNIT_4_ABBR << endl;
	cout << "####################" << endl;
}

/*
	// ==========
	// = OUTPUT =
	// ==========

	Enter pounds: 3
	Enter ounces: 5
	####################
	3lbs 5oz = 1kg 502g
	####################
	Quit? (y/n): y
*/
```