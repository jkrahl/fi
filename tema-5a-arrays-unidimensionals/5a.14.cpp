#include <iostream>
#define DIM 12
using namespace std;

int main()
{
	float v[DIM], max, min, mitjana = 0;
	int indexMax = 0, indexMin = 0;
	for (int i = 0; i < DIM; i++)
	{
		cin >> v[i];
		mitjana += v[i];
	}
	mitjana /= DIM;
	max = v[0];
	min = v[0];
	for (int i = 0; i < DIM; i++)
	{
		if (v[i] > max)
		{
			max = v[i];
			indexMax = i;
		}
		if (v[i] < min)
		{
			min = v[i];
			indexMin = i;
		}
	}
	cout << "Mes amb temperatura minima: " << indexMin + 1 << endl;
	cout << "Mes amb temperatura maxima: " << indexMax + 1 << endl;
	cout << "Temperatura mitjana: " << mitjana << endl;
	for (int i = 0; i < DIM; i++)
	{
		if (v[i] > mitjana)
		{
			cout << "El mes " << i + 1 << " ha tingut temperatura superior a la mitjana anual." << endl;
		}
		else if (v[i] == mitjana)
		{
			cout << "El mes " << i + 1 << " ha tingut temperatura igual a la mitjana anual." << endl;
		}
		else
		{
			cout << "El mes " << i + 1 << " ha tingut temperatura inferior a la mitjana anual." << endl;
		}
	}
}