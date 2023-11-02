#include <iostream>
#include "funcions.h"
#define DIM 5
using namespace std;

int main()
{
	int v[DIM], valor;
	for (int i = 0; i < DIM; i++)
	{
		cin >> v[i];
	}
	if (OrdenatDecreixent(v, DIM) == 0)
	{
		cout << "El vector no esta correctament ordenat" << endl;
		return 0;
	}
	cin >> valor;
	int posicio = BuscarPosicio(v, valor, DIM);
	if (posicio == -1)
		cout << "Tots els valors del vector son mes grans que " << valor << endl;
	else
		cout << "El valor ha d'anar a la posicio " << posicio << endl;
}