#include <math.h>

int equacio(int a, int b, int c, float& arrel1, float& arrel2)
{
	float discriminante = (b * b - 4 * a * c);
	if (discriminante < 0)
		return 0;
	else if (discriminante == 0)
	{
		arrel1 = (-b / (2*a));
		arrel2 = arrel1;
		return 1;
	}
	else
	{
		arrel1 = (-b + sqrt(discriminante)) / (2 * a);
		arrel2 = (-b - sqrt(discriminante)) / (2 * a);
		return 2;
	}
}

/// En equacio.h: int equacio(int, int, int, float&, float&);