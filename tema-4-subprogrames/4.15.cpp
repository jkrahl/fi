#include <iostream>

using namespace std;

void Menu()
{
		cout << "MENU" << endl;
		cout << "1.- Suma" << endl;
		cout << "2.- Resta" << endl;
		cout << "3.- Producte" << endl;
		cout << "4.- Divisio" << endl;
		cout << "5.- Sortir" << endl;
		cout << "Selecciona una de les opcions:" << endl;
}
int main()
{

	int input;
	float num1, num2;
	bool sortir = false;
	cin >> num1 >> num2;
	do
	{
		Menu();
		cin >> input;
		switch (input)
		{
		case 1:
			cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			break;
		case 2:
			cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			break;
		case 3:
			cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
			break;
		case 4:
			if (num2 != 0)
			{
				cout << num1 << " : " << num2 << " = " << num1 / num2 << endl;
			}
			else
			{
				cout << "Error: Divisio per zero" << endl;
			}
			break;
		case 5:
			char p;
			cout << "Vols operar amb uns altres operands? (S/-)";
			cin >> p;
			if (p != 'S')
			{
				sortir = true;
			}
			else
			{
				cin >> num1 >> num2;
			}
			break;
		default:
			cout << "Error: Opcio no valida" << endl;
			break;
		}
	} while (sortir == false);
}