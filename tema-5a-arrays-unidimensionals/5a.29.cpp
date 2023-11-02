#include <iostream>

using namespace std;

int InversArray(int v1[], int v2[], int dimensio)
{
	int i = 0;
	bool diferents = false;
	while (i < dimensio && !diferents)
	{
		if (v1[i] != v2[dimensio - i - 1])
			diferents = true;
		else
			i++;
	}

	if (diferents)
		return 0;
	else
		return 1;
}