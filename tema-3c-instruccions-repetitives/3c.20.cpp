#include <iostream>

using namespace std;

int main()
{
    int max, min, entrada, i = 0;
    cin >> entrada;
    if (entrada >= 0)
    {
        max = entrada;
        min = entrada;
        i++;
    }
    
    while (i < 10 && entrada > 0)
    {
        cin >> entrada;
        if(entrada > 0)
        {
            if(entrada > max)
                max = entrada;
            if(entrada < min)
                min = entrada;
            i++;
        }
    }
    if (i > 0)
    {
        cout << "Maxim: " << max << " - Minim: " << min;
    }
    else
    {
        cout << "No hi ha nombres a la sequencia";
    }
    
    
}