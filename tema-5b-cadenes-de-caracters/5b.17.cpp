#include <iostream>
#define DIM 100
using namespace std;
char PrimerDiferent(char c1[], char c2[])
{
	int i = 0;
	bool diferents = false;
	while (c1[i] != '\0' && !diferents)
	{
		if (c1[i] != c2[i])
			diferents = true;
		else
			i++;
	}
	
	if (diferents)
		return c1[i];
	else
		return '\0';
}

int main()
{
	char c1[DIM], c2[DIM], d;
	cin >> c1 >> c2;
	d = PrimerDiferent(c1, c2);
	if (d != '\0')
		cout << "El primer caracter diferent es " << d << endl;
	else
		cout << "No hi ha cap caracter diferent" << endl;
}