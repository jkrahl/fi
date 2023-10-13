#include <iostream>

using namespace std;

double potencia(int x, int n)
{
    double potencia = 1; bool expNegativo = false;
    if (n < 0)
    {
        n = -n;
        expNegativo = true;
    }
    for (int i = 0; i < n; i++)
    {
        potencia *= x;
    }
    if (expNegativo)
    {
        return 1/potencia;
    }
    else
    {
        return potencia;
    }
    
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << "El resultat d'elevar " << x << " a la potencia " << n << " es " << potencia(x, n);
}