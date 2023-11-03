#include <iostream>

using namespace std;

void Majuscules(char c[])
{
	int i = 0;
	while (c[i] != '\0')
	{
		if (c[i] > 96 && c[i] < 123)
			c[i] = (c[i] - 32);
		i++;
	}
}

int main()
{
	char c[100];
	cin >> c;
	Majuscules(c);
	cout << c << endl;
}