#include <iostream>
#include "matrius.h"

using namespace std;

#define N_FIL 2
// A matrius.h cal tenir definida N_COL amb valor 3

int main()
{
	float M[N_FIL][N_COL];

	LlegirMatriu(M, N_FIL, N_COL);

    EscriureMatriu(M, N_FIL, N_COL);

	return 0;
}