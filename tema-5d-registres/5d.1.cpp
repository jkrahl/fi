#include <iostream>

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
	TipusAlumne a;
	cin >> a.Nom;
	cin >> a.Cognom1;
	cin >> a.Cognom2;
	cin >> a.nota;
	cout << a.Cognom1 << " " << a.Cognom2 << ", " << a.Nom << " " << a.nota << endl;
}