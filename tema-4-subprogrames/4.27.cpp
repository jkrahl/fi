#include <iostream>
#include "Funcions.h"
#include "Menu.h"

using namespace std;

int main()
{
	int option, res;
	float area, costat, base, altura;
	do
	{
		MenuSeleccio();
		cin >> option;
		switch (option)
		{
		case 1:
			cin >> costat;
			res = AreaQuadrat(costat, area);
			if (res)
				cout << "Error: Dimensions incorrectes" << endl;
			else
				cout << "Area: " << area << endl;
			break;
		case 2:
			cin >> base >> altura;
			res = AreaRectangle(base, altura, area);
			if (res)
				cout << "Error: Dimensions incorrectes" << endl;
			else
				cout << "Area: " << area << endl;
			break;
		case 3:
			cin >> base >> altura;
			res = AreaTriangle(base, altura, area);
			if (res)
				cout << "Error: Dimensions incorrectes" << endl;
			else
				cout << "Area: " << area << endl;
			break;
		default:
			break;
		}
	} while (option != 4);
    return 0;    
}