#include <iostream>
#include <string.h>
#define N_EQUIPS 5
using namespace std;

typedef struct
{
	char nom[30];
	char ciutat[30];
	int punts;
	int pressupost;
} TEquip;

void InicialitzarClassificacio(TEquip equips[], int dimensio)
{
	for (int i = 0; i < dimensio; i++)
	{
		strcpy(equips[i].nom, "-----");
		strcpy(equips[i].ciutat, "-----");
		equips[i].punts = 0;
		equips[i].pressupost = 0;
	}
}

void DesplacarClassificacio(TEquip equips[], int dimensio, int index) {
    TEquip ultimElement = equips[dimensio - 1];

    for (int i = dimensio - 2; i >= index; --i) {
        equips[i + 1] = equips[i];
    }

    if (index != dimensio - 1) {
        equips[index] = ultimElement;
    }
}

void MostrarClassificacio(TEquip equips[], int dimensio)
{
	for (int i = 0; i < dimensio; i++)
		cout << i + 1 << ".-" << equips[i].nom << " " << equips[i].punts << endl;
}

void OmplirDadesEquip(TEquip &e)
{
	cin >> e.nom;
	cin >> e.ciutat;
	cin >> e.punts;
	cin >> e.pressupost;
}

int main()
{
	TEquip e[N_EQUIPS];
	char c = 'S';
	int posicio = 0;
	
	InicialitzarClassificacio(e, N_EQUIPS);
	while (c == 'S')
	{
		MostrarClassificacio(e, N_EQUIPS);
		cin >> posicio;
		DesplacarClassificacio(e, N_EQUIPS, posicio - 1);
		OmplirDadesEquip(e[posicio - 1]);
		cin >> c;
	}
	MostrarClassificacio(e, N_EQUIPS);
}