#include <iostream>
#define N_FIL 2
#define N_COL 3
using namespace std;

void LlegirMatriu(int M[][N_COL], int n_fil, int n_col)
{
	for (int f = 0; f < n_fil; f++)
	{
		for (int c = 0; c < n_col; c++)
		{
			cout << "Introdueix M[" << f << "][" << c << "]= ";
			cin >> M[f][c]; 
		}
	}
}

void EscriuMatriu(int M[][N_COL], int n_fil, int n_col)
{
	for (int f = 0; f < n_fil; f++)
	{
		for (int c = 0; c < n_col; c++)
		{
			cout << "M[" << f << "][" << c << "]= " << M[f][c] << " ";
		}
		cout << endl;
	}
}

void SumaMatrius(int M1[][N_COL], int M2[][N_COL], int S[][N_COL], int n_fil, int n_col)
{
	for (int f = 0; f < n_fil; f++)
		for (int c = 0; c < n_col; c++)
			S[f][c] = M1[f][c] + M2[f][c];
}

int main()
{
	int m1[N_FIL][N_COL], m2[N_FIL][N_COL], suma[N_FIL][N_COL];

	LlegirMatriu(m1, N_FIL, N_COL);
	LlegirMatriu(m2, N_FIL, N_COL);

	SumaMatrius(m1, m2, suma, N_FIL, N_COL);

	EscriuMatriu(suma, N_FIL, N_COL);
}