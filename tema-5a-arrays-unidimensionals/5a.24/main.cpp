#include <iostream>
#include "vectors.h"
#define DIMTEMP 14
#define DIMHISTOGRAMA 61
using namespace std;

int main()
{
	int temp[DIMTEMP], histograma[DIMHISTOGRAMA], indexMaxTemp, indexMinTemp, i, j;

	InicialitzarVector(histograma, 0, DIMHISTOGRAMA);
	LlegirVector(temp, DIMTEMP);

	for (i = 0; i < DIMTEMP; i++)
	{
		int temperatura = temp[i];
		histograma[temperatura + 10] += 1;
	}
	
	indexMaxTemp = MaximVector(histograma, DIMHISTOGRAMA);
	indexMinTemp = MinimVectorNoZero(histograma, DIMHISTOGRAMA);
	
	cout << "Temperatura mes repetida: " << indexMaxTemp - 10 << " - Temperatura menys repetida: " << indexMinTemp - 10 << endl;
}