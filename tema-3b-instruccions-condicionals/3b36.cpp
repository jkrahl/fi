#include <iostream>

using namespace std;

int main()
{
    // 1r programa
    int dia, mes, any, diesDelMes;
    char c;
    bool mesCorrecte = 0;
    cin >> dia >> c >> mes >> c >> any;
    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        diesDelMes = 31;
        mesCorrecte = 1;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        diesDelMes = 30;
        mesCorrecte = 1;
        break;
    case 2:
        diesDelMes = 28;
        mesCorrecte = 1;
        break;
    default:
        cout << "Error: Mes incorrecte";
        break;
    }
    if (mesCorrecte == 1)
    {
        // 2n programa
        if (mes == 2)
        {
            if ((any % 4 == 0 && any % 100 != 0) || any % 400 == 0)
            {
                diesDelMes = 29;
            }
            else
            {
                diesDelMes = 28;
            }
        }
        // 3r programa
        if (dia <= diesDelMes && dia > 0)
        {
            cout << "Data correcta";
        }
        else
        {
            cout << "Error: Dia incorrecte";
        }
    }
}