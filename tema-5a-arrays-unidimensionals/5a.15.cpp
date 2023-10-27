#include <iostream>
#define DIM 9
using namespace std;

int main()
{
	int v[DIM], i;
	bool parellTrobat = false;
	for (i = 0; i < DIM; i++)
	{
		cin >> v[i];
	}
	
	i = 0;
	while (i < DIM && !parellTrobat)
	{
		if (v[i] % 2 == 0)
			parellTrobat = true;
		else
			i++;
	}
	
	if (parellTrobat)
		cout << "NO TOTS SON SENARS" << endl;
	else
		cout << "TOTS SON SENARS" << endl;
}