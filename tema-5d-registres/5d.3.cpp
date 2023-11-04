#include <iostream>

using namespace std;

typedef struct
{
	char titol[30];
	char editorial[30];
	int pagines;
	float preu;
} TLlibre;

int main()
{
	TLlibre l1, l2;

	cin >> l1.titol;
	cin >> l1.editorial;
	cin >> l1.pagines;
	cin >> l1.preu;

	cin >> l2.titol;
	cin >> l2.editorial;
	cin >> l2.pagines;
	cin >> l2.preu;

	cout << "Llibres preferits:" << endl;
	cout << l1.titol << " " << l1.editorial << " " << l1.pagines << " " << l1.preu << endl;
	cout << l2.titol << " " << l2.editorial << " " << l2.pagines << " " << l2.preu << endl;
}