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