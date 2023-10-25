#include <iostream>
#define DIM 12
using namespace std;

int main()
{
	int v[DIM];
	for (int i = 0; i < DIM; i++)
	{
		cin >> v[i];
	}
	cout << "Entrada: ";
	for (int i = 0; i < DIM; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl << "Sortida: ";
	for (int i = 0; i < DIM; i++)
	{
		if (v[i] < 0)
			v[i] = 0;
		cout << v[i] << " ";
	}
}