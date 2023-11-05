#include <iostream>
#include <math.h>
#define MAX 30
using namespace std;

typedef struct
{
	float x;
	float y;
} TPunt;

typedef struct
{
	int costats;
	TPunt punts[MAX];
} TPoligon;

void LlegirVertexsPoligon(TPoligon &p)
{
	TPunt punt;
	cin >> p.costats;

	for (int i = 0; i < p.costats; i++)
	{
		cin >> punt.x;
		cin >> punt.y;
		p.punts[i] = punt;
	}
}

float PerimetrePoligon(TPoligon p)
{
	float perimetre = 0.0;
    for (int i = 0; i < p.costats; i++) {
        float xDif = p.punts[(i + 1) % p.costats].x - p.punts[i].x;
        float yDif = p.punts[(i + 1) % p.costats].y - p.punts[i].y;
        perimetre += sqrt(xDif * xDif + yDif * yDif);
    }
    return perimetre;
}

int main()
{
	TPoligon p;

	LlegirVertexsPoligon(p);
	cout << "Perimetre del poligon: " << PerimetrePoligon(p) << endl;
}