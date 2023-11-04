#include <iostream>
#define N_FIL 2
#define N_COL 3
using namespace std;

float SumaValorsMatriu(float m[][N_COL], int n_fil, int n_col)
{
	float sum = 0;
	for (int i = 0; i < n_fil; i++)
		for (int j = 0; j < n_col; j++)
			sum += m[i][j];
	return sum;
}

void LlegirMatriu(float M[][N_COL], int n_fil, int n_col)
{
	for (int f = 0; f < n_fil; f++)
		for (int c = 0; c < n_col; c++)
			cin >> M[f][c]; 
}

int main()
{
	float m[N_FIL][N_COL];

	LlegirMatriu(m, N_FIL, N_COL);
	cout << "Suma valors matriu: " << SumaValorsMatriu(m, N_FIL, N_COL) << endl;
}