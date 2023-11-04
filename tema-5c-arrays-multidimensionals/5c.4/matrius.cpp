#include <iostream>
#include "matrius.h"
using namespace std;

void LlegirMatriu(float M[][N_COL], int n_fil, int n_col)
{
	for (int f = 0; f < n_fil; f++)
		for (int c = 0; c < n_col; c++)
			cin >> M[f][c]; 
}

void EscriureMatriu(float M[][N_COL], int n_fil, int n_col)
{
	for (int f = 0; f < n_fil; f++)
	{
		for (int c = 0; c < n_col; c++)
			cout << M[f][c] << " ";
		cout << endl;
	}
}
