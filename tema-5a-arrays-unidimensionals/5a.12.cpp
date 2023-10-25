#include <iostream>
#define DIM 10
using namespace std;

int main()
{
	int v[DIM], maxim, index = 0;
	for (int i = 0; i < DIM; i++)
	{
		cin >> v[i];
	}
	maxim = v[0];
	for (int i = 0; i < DIM; i++)
	{
		if (v[i] > maxim)
		{
			maxim = v[i];
			index = i;
		}	
	}
	cout << "El maxim del vector es " << maxim << " i es troba a l'index " << index;
	
}