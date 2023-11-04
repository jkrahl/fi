#include <iostream>
#define DIM 3
using namespace std;

int SimetricaMatriu(float m[][DIM], int n_fil, int n_col)
{
	int simetrica = 1;
	for (int i = 0; i < n_fil; i++)
	{
		for (int j = 0; j < n_col; j++)
		{
			if (m[i][j] != m[j][i])
				simetrica = 0;
		}
	}
	return simetrica;	
}

void LlegirMatriu(float M[][DIM], int n_fil, int n_col)
{
	for (int f = 0; f < n_fil; f++)
		for (int c = 0; c < n_col; c++)
			cin >> M[f][c]; 
}

int main()
{
	float m[DIM][DIM];

	LlegirMatriu(m, DIM, DIM);
	
	if (SimetricaMatriu(m, DIM, DIM)) // 1 = true
		cout << "MATRIU SIMETRICA" << endl;
	else
		cout << "MATRIU NO SIMETRICA" << endl;
}