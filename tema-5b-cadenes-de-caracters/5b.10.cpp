#include <iostream>
#include <string.h>

using namespace std;

int Palindrom(char c[])
{
	bool palindrom = true;
	int len = strlen(c), i = 0;
	while (i < (len / 2) && palindrom)
	{
		if (c[i] != c[len - i - 1])
			palindrom = false;
		else
			i++;
	}

	return palindrom;
}