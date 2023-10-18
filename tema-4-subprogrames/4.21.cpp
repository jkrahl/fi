#include <iostream>
#include <stdlib.h>

using namespace std;

int dividir(int dividend, int divisor, int& quocient, int& residu)
{
	if (divisor == 0)
		return 1;
	else
    {
		int signe = 1;
		if (dividend < 0)
		{
			signe *= -1;
		}
		if (divisor < 0)
		{
			signe *= -1;
		}
		residu = dividend % divisor;
		dividend = abs(dividend);
		divisor = abs(divisor);
		quocient = 0;
		while (dividend >= divisor)
		{
			dividend -= divisor;
			quocient++;
		}
		quocient *= signe;
		return 0;
    }
}

int main()
{
    int dividend, divisor, quocient, residu;
    cin >> dividend >> divisor;
	int divZero = dividir(dividend, divisor, quocient, residu);
    if (divZero)
        cout << "Error: Divisio per zero" << endl;
    else
        cout << "Resultat - Quocient: " << quocient << " i Residu: " << residu;
}