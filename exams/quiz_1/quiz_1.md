Shammel Lee | sidekick2rida@gmail.com

### Quiz: 1

```
#include <iostream>

using namespace std;

int strLen(char string[]);
int numSpaces(char string[]);

int main()
{
	char phrase[] = "To be or not to be – that is the question: Whether 'tis nobler in the mind to suffer the slings and arrows of outrageous fortune, or to take arms against a sea of troubles and, by opposing, end them. To die, to sleep";

	cout << "#########################" << endl;
	cout << "Characters .......... " << strLen(phrase) << endl;
	cout << "Spaces .............. " << numSpaces(phrase) << endl;
	cout << "#########################" << endl;

	return 0;
}

int strLen(char string[])
{
	int count = 0;

	for(int i = 0;string[i];i++)
	{
		count++;
	}

	return count;
}

int numSpaces(char string[])
{
	int count = 0;
	
	for(int i = 0;string[i];i++)
	{
		if(string[i] == ' ')
		{
			count++;
		}
	}

	return count;
}

/*
	// ==========
	// = OUTPUT =
	// ==========

	Characters .......... 218
	Spaces .............. 43
*/
```
