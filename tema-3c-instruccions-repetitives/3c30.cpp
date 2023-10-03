#include <iostream>

using namespace std;

int main()
{
    int limit1, limit2, sum = 0, prod = 1, contador = 0;
    cin >> limit1 >> limit2;
    for (int i = limit1; i <= limit2; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
            prod *= i;
            contador++;
        }
    }
    cout << "Suma: " << sum << " - Producte: " << prod << " - Mitjana: " << sum / float(contador);
}