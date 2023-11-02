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

int BuscarPosicio(int v[], int valor, int dimensio)
{
	int i = 0;
	bool trobat = false;
	while (i < dimensio && !trobat)
	{
		if (v[i] < valor)
			trobat = true;
		else
			i++;
	}
	
	if (trobat)
		return i;
	else
		return -1;
}