#include <iostream>

using namespace std;

int main()
{
    bool par = false;
    int entrada;
    cin >> entrada;
    if (entrada != 0)
    {
        while (entrada != 0)
        {
            if (entrada % 2 == 0)
            {
                par = true;
            }
            cin >> entrada;
        }
        if (par == true)
        {
            cout << "Algun nombre de la sequencia es parell.";
        }
        else
        {
            cout << "No hi ha cap nombre parell en la sequencia.";
        }
    }
    else
    {
        cout << "No hi ha cap nombre parell en la sequencia.";
    }
    
}