#include <iostream>
#define DIM 10
using namespace std;

int main()
{
	float v[DIM], sum = 0;
	int i;
	bool trobat = false;
	
	for (i = 0; i < DIM; i++)
	{
		cin >> v[i];
	}

	i = 0;
	while (i < DIM && !trobat)
	{
		sum += v[i];
		if (sum > 25)
			trobat = true;
		i++;
	}
	
	if (trobat)
		cout << "A la posicio " << i << " la suma acumulada es superior a 25" << endl;
	else
		cout << "La suma acumulada de l'array es inferior o igual a 25" << endl;
	
}