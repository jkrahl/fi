#include <iostream>

using namespace std;

int main()
{
    int sum = 0, n = 0, entrada;
    cin >> entrada;
    while (entrada != 0)
    {
        sum += entrada;
        n++;
        cin >> entrada;
    }
    if (n == 0)
    {
        cout << "Error: La sequencia es buida. No es pot calcular la mitjana.";
    }
    else
    {
        cout << "Mitjana dels nombres de la sequencia: " << float(sum) / n;
    }
    
}