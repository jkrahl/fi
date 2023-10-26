#include <iostream>
#define DIM 10
using namespace std;

int main()
{
	int v[DIM], i = 0;
	bool zero = false;
	
	while (i < DIM && !zero)
	{
		cout << "Introdueix un enter: " << endl;
		cin >> v[i];
		if (v[i] == 0)
			zero = true;
		else
			i++;
	}
	
	if (zero)
		cout << "Hem introduit un zero" << endl;
	else
		cout << "Hem arribat al final de l'array" << endl;
	
}