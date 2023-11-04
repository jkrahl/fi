#include <iostream>
#define DIM 4
using namespace std;

int main()
{
	int mat[DIM][DIM];

	for (int f = 0; f < DIM; f++)
	{
		for (int c = 0; c < DIM; c++)
		{
			cout << "Introdueix mat[" << f << "][" << c << "] = ";
			cin >> mat[f][c]; 
		}
	}

	for (int i = 0; i < DIM; i++)
		cout << mat[i][i] << endl;
}