#include <iostream>

using namespace std;

void funcio(int x_min, int x_max, int y_min, int y_max, int& x, int& y, bool& limit, bool& correcte, int moviment) {

	if ((x_min < x_max) && (y_min < y_max)) {
		limit = true;
	}
	else {
		limit = false;
	}
	 
	if (((x <= x_max) && (x >= x_min)) && ((y <= y_max) && (y >= y_min))) { 
		correcte = true;
	}
	else {
		correcte = false;
	}


	switch (moviment) {
	case 1:
		x = x - 1;
		if (((x <= x_max) && (x >= x_min)) && ((y <= y_max) && (y >= y_min))) {
			correcte = true;
		}
		else {
			x = x + 1;

		}
		break;

	case 2:
		x = x + 1;
		if (((x <= x_max) && (x >= x_min)) && ((y <= y_max) && (y >= y_min))) { 
			correcte = true;
		}
		else {
			x = x - 1;

		}
		break;

	case 3:
		y = y + 1;
		if (((x <= x_max) && (x >= x_min)) && ((y <= y_max) && (y >= y_min))) {
			correcte = true;
		}
		else {
			y = y - 1;

		}
		break;

	case 4:
		y = y - 1;
		if (((x <= x_max) && (x >= x_min)) && ((y <= y_max) && (y >= y_min))) {
			correcte = true;
		}
		else {
			y = y + 1;

		}
		break;

	case 5:
		correcte = false;
		break;

	}

}