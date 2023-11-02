// AQUEST FITXER FA LES CRIDES ALS PROCEDIMENTS PER A FER LES PROVES QUE 
// AVALUA EL CORRECTOR AUTOMÀTIC.
// ENCARA QUE EL MODIFIQUEU, A L'AVALUAR S'EXECUTARÀ EL MAIN.CPP QUE US PROPORCIONEM

#include <iostream>
#include "vectors.h"

using namespace std;

#define DIM 8

int main()
{
	int v[DIM];

	InicialitzarVector(v, 0, DIM);
	EscriureVector(v, DIM);

	InicialitzarVector(v, 1, DIM);
	EscriureVector(v, DIM);

	LlegirVector(v, DIM);
	EscriureVector(v, DIM);

	LlegirVector(v, DIM);
	EscriureVector(v, DIM);

	return 0;
}