#include <iostream>
#include <string>

using namespace std;

void input(unsigned int &hour,unsigned int &minutes);
void from24To12(unsigned int &hour,char &ampm);
void output(const unsigned int &hour,const unsigned int &minutes,const char &ampm);
string repeatChar(const char c,unsigned int count);

int main ()
{
	unsigned int hour
				,minutes;
	char		ampm
				,quit = 'n';

	while(quit != 'y')
	{
		input(hour,minutes);
		from24To12(hour,ampm);
		output(hour,minutes,ampm);
		cout << "Quit? (y/n): ";
		cin >> quit;
	}

	return 0;
}

void input(unsigned int &hour,unsigned int &minutes)
{
	int tempHour,tempMinutes;

	cout << "Enter hour ";
	cin >> tempHour;

	while(tempHour < 0 || tempHour > 24)
	{
		cout << "Hour must be 0 - 24" << endl;
		cout << "Enter hour ";
		cin >> tempHour;
	}

	hour = tempHour;

	cout << "Enter minutes ";
	cin >> tempMinutes;

	while(tempMinutes < 0 || tempMinutes > 59)
	{
		cout << "Minutes must be 0 - 59" << endl;
		cout << "Enter minutes ";
		cin >> tempMinutes;
	}

	minutes = tempMinutes;
}
	
void from24To12(unsigned int &hour,char &ampm)
{
	if(hour < 12 || hour == 24)
	{
		hour = 12;
		ampm = 'a';
	}else if(hour > 12)
	{
		hour -= 12;
		ampm = 'p';
	}else
	{
		ampm = 'p';
	}
}

void output(const unsigned int &hour,const unsigned int &minutes,const char &ampm)
{
	string banner = repeatChar('#',19);
	cout << endl;
	cout << banner << endl;
	cout << "The time is " << hour << ":" << (minutes < 10 ? "0" : "") << minutes << (ampm == 'a' ? "am" : "pm") << endl;
	cout << banner << endl;
}

string repeatChar(const char c,unsigned int count)
{
	string s = "";

	while(count)
	{
		s += c;
		count--;
	}

	return s;
}

/*
	// ==========
	// = OUTPUT =
	// ==========

	Enter hour 19
	Enter minutes 2

	###################
	The time is 7:02pm
	###################
	Quit? (y/n): n
	Enter hour 0
	Enter minutes 0

	###################
	The time is 12:00am
	###################
	Quit? (y/n): y
*/