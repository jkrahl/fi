#include <iostream>
#define DIM 6
using namespace std;

int main()
{
	int v1[DIM], v2[DIM], i;
	bool diferents = false;

	for (i = 0; i < DIM; i++)
	{
		cin >> v1[i];
	}
	for (i = 0; i < DIM; i++)
	{
		cin >> v2[i];
	}
	i = 0;
	while (i < DIM && !diferents)
	{
		if (v1[i] != v2[i])
			diferents = true;
		else
			i++;
	}
	if (diferents)
		cout << "DIFERENTS" << endl;
	else
		cout << "IGUALS" << endl;

}