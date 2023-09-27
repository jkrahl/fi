#include <iostream>

using namespace std;

int main()
{
    int entrada = 0;
    bool hayPar = false;

    // En un do-while, el interior se executa como mínimo 1 vez, después se evalua la condición del while.
    do
    {
        cin >> entrada;
        if (entrada != 0)
        {
            if (entrada % 2 == 0)
            {
                hayPar = true;
            }
        }

    } while (entrada != 0);

    if (hayPar == true)
    {
        cout << "Algun nombre de la sequencia es parell.";
    }
    else
    {
        cout << "No hi ha cap nombre parell en la sequencia.";
    }
}