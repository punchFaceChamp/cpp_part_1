#include <iostream>

using namespace std;

void input(int &m1,int &m2);
void convert(int &m1,int &m2,int &m3,int &m4);
void output(int &m1,int &m2,int &m3,int &m4);

const double	FACTOR_1       = .3048;
const int		FACTOR_2       = 12
				,FACTOR_3      = 100;
const string	UNIT_1         = "feet"
				,UNIT_1_ABBR   = "ft"
				,UNIT_2        = "inches"
				,UNIT_2_ABBR   = "in"
				,UNIT_3_abbr   = "m"
				,UNIT_4_ABBR   = "cm";
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

	Enter feet: 5
	Enter inches: 7
	####################
	5ft 7in = 1m 70cm
	####################
	Quit? (y/n): y
*/