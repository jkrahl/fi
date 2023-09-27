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
//La variable `hayPar` se inicializa en falso porque se utiliza para saber si algún número en la secuencia es par.
//Al iniciar el programa, no se ha ingresado ningún número, por lo que no se sabe si hay algún un número par, asumimos que no.
//Luego el programa pide al usuario que introduzca un número ('entrada') y comprueba si este número es distinto de cero, y en caso afirmativo, si es par.
//Si el número 'entrada' introducido es par, se cambia el valor de 'hayPar' a true (verdadero). 
//Después de introducir todos los números (terminando la secuencia con un 0), si 'hayPar' es verdadero, quiere decir que al menos un número en la secuencia era par
//y se imprime un mensaje indicándolo. Si 'hayPar' sigue siendo falso, significa que no hubo ningún número par en la secuencia y se imprime un mensaje diferente.
