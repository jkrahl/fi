#include <iostream>

using namespace std;

void potencies(int n, int l)
{
	int pot = n;
	do
	{
		cout << pot << " ";
		pot = pot * n;
	} while (pot < l);
}

int main()
{
	int n, l;
	cin >> n >> l;
	if (n > 1 && l > n)
	{
		potencies(n, l);
	}
	else
	{
		cout << "Error: Valors incorrectes";
	}
	
}