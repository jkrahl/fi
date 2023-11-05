#include <iostream>

using namespace std;

typedef struct
{
	char nom[30];
	char ciutat[30];
	int punts;
	int pressupost;
} TEquip;

void OmplirDadesEquip(TEquip &e)
{
	cin >> e.nom;
	cin >> e.ciutat;
	cin >> e.punts;
	cin >> e.pressupost;
}

void MostrarDadesEquip(TEquip e)
{
	cout << e.nom << " " << e.ciutat << " " << e.punts << " " << e.pressupost << endl;
}

int CompararEquips(TEquip e1, TEquip e2)
{
	if (e2.punts > e1.punts)
		return -1;
	else if (e1.punts > e2.punts)
		return 1;
	else
		return 0;
}

int main()
{
	TEquip e1, e2;

	OmplirDadesEquip(e1);
	OmplirDadesEquip(e2);
	MostrarDadesEquip(e1);
	MostrarDadesEquip(e2);

	int res = CompararEquips(e1, e2);
	cout << e1.nom << " te ";
	if (res == -1)
		cout << "menys ";
	else if (res == 1)
		cout << "mes ";
	else
		cout << "els mateixos ";
	cout << "punts a la lliga que " << e2.nom << endl;
}