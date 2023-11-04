#include <iostream>

using namespace std;

#define N_FIL1 2
#define N_COL1 3
#define N_FIL2 3
#define N_COL2 3

void ProducteMatrius(float m1[][N_COL1], float m2[][N_COL2], float res[][N_COL2], int n_fil1, int n_col1, int n_fil2, int n_col2) 
{
    for (int i = 0; i < n_fil1; ++i) 
    {
        for (int j = 0; j < n_col2; ++j) 
        {
            res[i][j] = 0;
            for (int k = 0; k < n_col1; ++k) 
                res[i][j] += m1[i][k] * m2[k][j];
        }
    }
}

int main() 
{
    float m1[N_FIL1][N_COL1];
    float m2[N_FIL2][N_COL2];
    float res[N_FIL1][N_COL2];

    for (int i = 0; i < N_FIL1; i++) 
    {
        for (int j = 0; j < N_COL1; j++) 
        {
            cout << "Introdueix el valor per a la posicio [" << i << "][" << j << "]: ";
            cin >> m1[i][j];
        }
    }

    for (int i = 0; i < N_FIL2; i++) 
    {
        for (int j = 0; j < N_COL2; j++) 
        {
            cout << "Introdueix el valor per a la posicio [" << i << "][" << j << "]: ";
            cin >> m2[i][j];
        }
    }

    ProducteMatrius(m1, m2, res, N_FIL1, N_COL1, N_FIL2, N_COL2);

    for (int i = 0; i < N_FIL1; i++) 
    {
        for (int j = 0; j < N_COL2; j++) 
            cout << res[i][j] << " ";
        cout << endl;
    }
}