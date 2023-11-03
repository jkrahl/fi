#include <iostream>

using namespace std;

int TrobarCaracter(char s[], char c)
{
	int i = 0;
	bool trobat = false;
	while (s[i] != '\0' && !trobat)
	{
		if (s[i] == c)
			trobat = true;
		else
			i++;
	}

	if (trobat)
		return 1;
	else
		return 0;
}