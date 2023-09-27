#include <iostream>

using namespace std;

int main()
{
    float sum = 0, n = 0, entrada = 0;

    // En un do-while, el interior se executa como mínimo 1 vez, después se evalua la condición del while.
    do
    {
        cin >> entrada;
        if (entrada != 0)
        {
            sum += entrada;
            n++;
        }

    } while (entrada != 0);
    if (n == 0)
    {
        cout << "Error: La sequencia es buida. No es pot calcular la mitjana.";
    }
    else
    {
        cout << "Mitjana dels nombres de la sequencia: " << sum / n;
    }
}