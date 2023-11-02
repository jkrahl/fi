#include <iostream>

using namespace std;

void InicialitzarVector(int v[], int inicial, int dimensio)
{
	for (int i = 0; i < dimensio; i++)
		v[i] = inicial;
}

void LlegirVector(int v[], int dimensio)
{
	for (int i = 0; i < dimensio; i++)
		cin >> v[i];
}

void EscriureVector(int v[], int dimensio)
{
	for (int i = 0; i < dimensio; i++)
		cout << v[i] << " ";
	cout << endl;
}

float MitjanaVector(int v[], int dimensio)
{
	float m = 0;
	for (int i = 0; i < dimensio; i++)
		m += v[i];
	return (m/dimensio);
}

int MaximVector(int v[], int dimensio)
{
	int max = 0;
	for (int i = 1; i < dimensio; i++)
	{
		if (v[i] > v[max])
			max = i;
	}
	return max;
}

int MinimVector(int v[], int dimensio)
{
	int min = 0;
	for (int i = 1; i < dimensio; i++)
	{
		if (v[i] < v[min])
			min = i;
	}
	return min;
}

int MinimVectorNoZero(int v[], int dimensio)
{
	int min = 0, i = 0;
	while (i < dimensio && v[i] == 0)
	{
		i++;
	}
	
	if (i < dimensio)
	{
		min = i;
		for (; i < dimensio; i++)
		{
			if (v[i] != 0 && v[i] < v[min])
				min = i;
		}
		return min;	
	}
	else
	{
		return -1;
	}
}