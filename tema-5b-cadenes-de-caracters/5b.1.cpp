#include <iostream>

using namespace std;

int LongCadena(char c[])
{
	int i = 0;
	while (c[i] != '\0')
		i++;
	return i;
}