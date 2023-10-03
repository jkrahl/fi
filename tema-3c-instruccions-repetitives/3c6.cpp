#include <iostream>

using namespace std;

int main()
{
    int suma = 0, n;
    cin >> n;
    while (n <= 0)
    {
        cout << "Error: el valor ha de ser mes gran que zero" << endl;
        cin >> n;
    }
    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }
    cout << "El sumatori de " << n << " es: " << suma;
}   