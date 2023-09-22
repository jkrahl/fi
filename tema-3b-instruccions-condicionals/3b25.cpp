#include <iostream>

using namespace std;

int main() {
    float teoria, seminaris, practiques, notaFinal;
    string notaActa;
    cin >> teoria >> seminaris >> practiques;
    notaFinal = (0.4 * teoria) + (0.3 * seminaris) + (0.3 * practiques);
    if (notaFinal < 4.99) {
        notaActa = "SUSPES";
    }
    else {
        if (notaFinal < 6.99) {
            notaActa = "APROVAT";
        }
        else {
            if (notaFinal < 8.99) {
                notaActa = "NOTABLE";
            }
            else {
                if (notaFinal < 9.99) {
                    notaActa = "EXCEL.LENT";
                }
                else {
                    notaActa = "MATRICULA D'HONOR";
                }
            }
        }
    }
    cout << "La nota final es " << notaFinal << " - " << notaActa;
}