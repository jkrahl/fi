#include <iostream>
#define DIM 10
using namespace std;

int main()
{
	int v[DIM], i;
	bool desordenat = false;

	for (i = 0; i < DIM; i++)
	{
		cin >> v[i];
	}
	
	i = 0;
	while (i < (DIM - 1) && !desordenat)
	{
		if (v[i] > v[i + 1])
			desordenat = true;
		else
			i++;
	}
	
	cout << i << endl;
	
}