#include <iostream>

using namespace std;

int main()
{
    int entrada, unitats;
    cin >> entrada;
    // La operación % da el residuo de la división entera, p. ej.: si tenemos 26.000,
    // al dividir entre 1000 nos da 26, pero nos interesan las unidades menores a 10,
    // por lo que calculamos el residuo de la división de 10.
    unitats = (entrada / 1000) % 10;
    cout << "Les unitats de miler del nombre " << entrada << " son " << unitats;

}