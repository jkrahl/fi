#include <iostream>
#define DIM 5
using namespace std;

typedef struct
{
	char Nom[10];
	char Cognom1[15];
	char Cognom2[15];
	float nota;
} TipusAlumne;

int main()
{
	TipusAlumne a[DIM];
	for (int i = 0; i < DIM; i++)
	{
		cin >> a[i].Nom;
		cin >> a[i].Cognom1;
		cin >> a[i].Cognom2;
		cin >> a[i].nota;
	}
	
	for (int i = 0; i < DIM; i++)
		cout << a[i].Cognom1 << " " << a[i].Cognom2 << ", " << a[i].Nom << " " << a[i].nota << endl;
}