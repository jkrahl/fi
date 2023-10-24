#include <iostream>
#include "funcio.h"
using namespace std;

int main() {
	int x_min, x_max, y_min, y_max;
	bool limit = false, correcte = false;
	int x = 0, y = 0, moviment = 0;

	do {
		cin >> x_min >> x_max >> y_min >> y_max;
		funcio(x_min, x_max, y_min, y_max, x, y, limit, correcte, moviment);
	} while (limit == false);

	do {
		cin >> x >> y;
		funcio(x_min, x_max, y_min, y_max, x, y, limit, correcte, moviment);
	} while (correcte == false);

	while (correcte == true) {
		cin >> moviment;
		cout << "(" << x << "," << y << ")" << endl;
		funcio(x_min, x_max, y_min, y_max, x, y, limit, correcte, moviment);

	}

	return 0;
}