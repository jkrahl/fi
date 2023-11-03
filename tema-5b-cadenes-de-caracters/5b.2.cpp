#include <iostream>
#include <string.h>
#define MAX 16
using namespace std;

int main()
{
	char c1[MAX], c2[MAX], c3[MAX];

	cin >> c1 >> c2 >> c3;

	cout << "Cadenes introduides: " << c1 << " " << c2 << " " << c3 << endl;

	if (strcmp(c1, c2) == 0)
	{
		if (strcmp(c2, c3) == 0)
			cout << "Les tres cadenes son iguals" << endl;
		else
			cout << "Les cadenes 1 i 2 son iguals" << endl;
	}
	else
	{
		if (strcmp(c2, c3) == 0)
			cout << "Les cadenes 2 i 3 son iguals" << endl;
		else
		{
			if (strcmp(c1, c3) == 0)
				cout << "Les cadenes 1 i 3 son iguals" << endl;
			else
				cout << "Les tres cadenes son diferents" << endl;
		}
	}
}