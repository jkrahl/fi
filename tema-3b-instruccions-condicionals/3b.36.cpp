#include <iostream>

using namespace std;

int main()
{
    // 1r programa
    int dia, mes, any, dies_mes;
    char barra;
    bool mes_correcte = 0;
    cin >> dia >> barra >> mes >> barra >> any;
    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        dies_mes = 31;
        mes_correcte = 1;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        dies_mes = 30;
        mes_correcte = 1;
        break;
    case 2:
        dies_mes = 28;
        mes_correcte = 1;
        break;
    default:
        cout << "Error: Mes incorrecte";
        break;
    }
    if (mes_correcte == 1)
    {
        // 2n programa
        if (mes == 2)
        {
            if ((any % 4 == 0 && any % 100 != 0) || any % 400 == 0)
            {
                dies_mes = 29;
            }
            else
            {
                dies_mes = 28;
            }
        }
        // 3r programa
        if (dia <= dies_mes && dia > 0)
        {
            cout << "Data correcta";
        }
        else
        {
            cout << "Error: Dia incorrecte";
        }
    }
}