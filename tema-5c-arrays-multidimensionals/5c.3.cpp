#include <iostream>
#define N1_FIL 3
#define N1_COL 4
#define N2_FIL 5
#define N2_COL 3
using namespace std;

int main()
{
	int m1[N1_FIL][N1_COL] = {{6,7,8,9},{6,5,4,3},{1,0,0,1}};
	int m2[N2_FIL][N2_COL];

	for (int i = 0; i < N2_FIL; i++)
		for (int j = 0; j < N2_COL; j++)
			m2[i][j]=5*i+j;

	for (int f = 0; f < N1_FIL; f++)
	{
		for (int c = 0; c < N1_COL; c++)
			cout << m1[f][c] << " ";
		cout << endl;
	}
	cout << endl;
	for (int f = 0; f < N2_FIL; f++)
	{
		for (int c = 0; c < N2_COL; c++)
			cout << m2[f][c] << " ";
		cout << endl;
	}
}