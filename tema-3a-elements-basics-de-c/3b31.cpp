#include <iostream>

using namespace std;

int main(){
    float euros, nova_moneda;
    int entrada;
    cin >> euros >> entrada;
    switch (entrada)
    {
    case 1:
        nova_moneda = euros * 1.34;
        cout << euros << " euros son " << nova_moneda << " USD";
        break;
    case 2:
        nova_moneda = euros * 0.83;
        cout << euros << " euros son " << nova_moneda << " GBP";
        break;
    case 3:
        nova_moneda = euros * 1.23;
        cout << euros << " euros son " << nova_moneda << " CHF";
        break;
    case 4:
        nova_moneda = euros * 133.11;
        cout << euros << " euros son " << nova_moneda << " JPY";
        break;
    
    default:
    cout << "Error: moneda no disponible";
        break;
    }
}