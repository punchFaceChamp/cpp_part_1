#include <iostream>
#include <string>

using namespace std;

int maxLen(string (&strings)[12]);
string padStr(string str,const char padChar = ' ');
string barGen(int length,int scale = 1);

string		months[]       =	{
								"January"
								,"February"
								,"March"
								,"April"
								,"May"
								,"June"
								,"July"
								,"August"
								,"September"
								,"October"
								,"November"
								,"December"
							};
const char	PAD_CHAR       =	'.'
			,PAD_SEPARATOR =	' ';
const int	PAD_EXTRA      =	5
			,N_MONTHS      =	sizeof months / sizeof months[0]
			,MAX_STR_LEN   =	maxLen(months)
			,BAR_SCALE     =	3;
int			avgMonth[N_MONTHS]
			,actMonth[N_MONTHS];

int main()
{
	int		variance,outputFormat;
	bool	validOption;
	char	quit = 'n';

	while(quit != 'y')
	{
		cout << "Enter average rainfall..." << endl;
		for(int i = 0;i < N_MONTHS;i++)
		{
			cout << months[i] << ": ";
			cin >> avgMonth[i];
		}

		cout << endl;

		cout << "Enter actual rainfall..." << endl;
		for(int i = 0;i < N_MONTHS;i++)
		{
			cout << months[i] << ": ";
			cin >> actMonth[i];
		}

		cout << endl;

		do
		{
			cout << "Enter output format..." << endl
				 << "1. Table" << endl
				 << "2. Graph" << endl;

			cin >> outputFormat;

			switch(outputFormat)
			{
				case 1:
					validOption = true;

					for(int i = 0;i < N_MONTHS;i++)
					{
						variance = actMonth[i] - avgMonth[i];
						cout << padStr(months[i],PAD_CHAR)
						<< "Actual: " << actMonth[i] << " / "
						<< "Variance: " << (variance > 0 ? "+" : "") << variance
						<< endl;
					}
					break;
				case 2:
					validOption = true;
					for(int i = 0;i < N_MONTHS;i++)
					{
						cout << endl << "**" << months[i] << "**" << endl
						<< "Actual  " << barGen(actMonth[i],BAR_SCALE) << endl
						<< "Average " << barGen(avgMonth[i],BAR_SCALE) << endl;
					}
					break;
				default:
					validOption = false;
					cout << "Invalid choice, try again" << endl;
			}
		}while(!validOption);

		cout << "Quit? (y/n): ";
		cin >> quit;
	}

	return 0;
}

int maxLen(string (&strings)[12])
{
	int max = 0,curSize;

	for(int i = 0,numStrings = sizeof strings / sizeof strings[0];i < numStrings;i++)
	{
		curSize = strings[i].size();
		max = curSize > max ? curSize : max;
	}

	return max;
}

string padStr(string str,const char padChar)
{
	string retStr = "";
	int strLenDiff = MAX_STR_LEN - str.size() + PAD_EXTRA;

	for(int i = 0;i < strLenDiff;i++)
	{
		retStr += padChar;
	}

	return str + PAD_SEPARATOR + retStr + PAD_SEPARATOR;
}

string barGen(int length,int scale)
{
	string		str     =	"";
	const char	barChar =	'#';

	for(int i = 0,finalLength = length * scale;i < finalLength;i++)
	{
		str += barChar;
	}

	return str;
}
