#include <iostream>

using namespace std;

int main()
{
    int entrada = 0, positius = 0, negatius = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> entrada;
        if (entrada > 0)
        {
            positius++;
        }
        else if (entrada < 0)
        {
            negatius++;
        }
    }
    cout << "Positius: " << positius << " - Negatius: " << negatius;
}