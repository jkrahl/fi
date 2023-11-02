#include <iostream>

using namespace std;

int OrdenatDecreixent(int v[], int dimensio)
{
	int i = 0;
	bool desordenat = false;
	while (i < (dimensio - 1) && !desordenat)
	{
		if (v[i] < v[i+1])
			desordenat = true;
		else
			i++;
	}
	
	if (desordenat)
		return 0;
	else
		return 1;
}