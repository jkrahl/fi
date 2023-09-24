#include <iostream>

using namespace std;

int main() {
    float teoria, seminaris, practiques, nota;
    string nota_text;
    cin >> teoria >> seminaris >> practiques;
    nota = (0.4 * teoria) + (0.3 * seminaris) + (0.3 * practiques);
    if (nota < 4.99) {
        nota_text = "SUSPES";
    }
    else {
        if (nota < 6.99) {
            nota_text = "APROVAT";
        }
        else {
            if (nota < 8.99) {
                nota_text = "NOTABLE";
            }
            else {
                if (nota < 9.99) {
                    nota_text = "EXCEL.LENT";
                }
                else {
                    nota_text = "MATRICULA D'HONOR";
                }
            }
        }
    }
    cout << "La nota final es " << nota << " - " << nota_text;
}