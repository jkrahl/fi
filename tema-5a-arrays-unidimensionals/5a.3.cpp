#include <iostream>
#define DIM 20
using namespace std;

int main()
{
	float notes[DIM];
	int aprovats = 0;
	for (int i = 0; i < DIM; i++)
	{
		cin >> notes[i];
		while (notes[i] < 0 || notes[i] > 10)
		{
			cout << "Error: nota no valida" << endl;
			cin >> notes[i];
		}
	}
	for (int i = 0; i < DIM; i++)
	{
		if (notes[i] >= 5)
		{
			aprovats++;
		}
	}
	cout << "El nombre d'aprovats es: " << aprovats << endl;
}