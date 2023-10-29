#include <iostream>
#define DIM 5
using namespace std;

void LlegirVector(int v[], int dimensio)
{
	for (int i = 0; i < dimensio; i++)
		cin >> v[i];
}

void EscriuVector(int v[], int dimensio)
{
	for (int i = 0; i < dimensio; i++)
		cout << v[i] << endl;
}

void SumaVectors(int v1[], int v2[], int suma[], int dimensio)
{
	for (int i = 0; i < dimensio; i++)
		suma[i] = v1[i] + v2[i];
}

int main()
{
	int v1[DIM], v2[DIM], suma[DIM];

	LlegirVector(v1, DIM);
	LlegirVector(v2, DIM);
	SumaVectors(v1, v2, suma, DIM);
	EscriuVector(suma, DIM);
}