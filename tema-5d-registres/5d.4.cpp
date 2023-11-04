#include <iostream>

using namespace std;

typedef struct
{
	char nom[30];
	char ciutat[30];
	int punts;
	int pressupost;
} TEquip;

void OmplirDadesEquip(TEquip &t)
{
	cin >> t.nom;
	cin >> t.ciutat;
	cin >> t.punts;
	cin >> t.pressupost;
}

void MostrarDadesEquip(TEquip t)
{
	cout << t.nom << " " << t.ciutat << " " << t.punts << " " << t.pressupost << endl;
}

int CompararEquips(TEquip t1, TEquip t2)
{
	if (t2.punts > t1.punts)
		return -1;
	else if (t1.punts > t2.punts)
		return 1;
	else
		return 0;
}

int main()
{
	TEquip t1, t2;

	OmplirDadesEquip(t1);
	OmplirDadesEquip(t2);
	MostrarDadesEquip(t1);
	MostrarDadesEquip(t2);

	int res = CompararEquips(t1, t2);
	cout << t1.nom << " te ";
	if (res == -1)
		cout << "menys ";
	else if (res == 1)
		cout << "mes ";
	else
		cout << "els mateixos ";
	cout << "punts a la lliga que " << t2.nom << endl;
}