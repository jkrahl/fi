#include <iostream>

using namespace std;

int main(){
    int unitats;
    float preu_individual, preu_final = 0;
    cin >> unitats >> preu_individual;
    preu_final = preu_individual * unitats;
    preu_final *= 1.07; // Añadir el 7% de IVA
    if(preu_final > 500){
        if(preu_final > 1000){
            preu_final *= 0.9;
            cout << "L'import final de la compra son " << preu_final << " euros.";
        }
        else{
            preu_final *= 0.95;
            cout << "L'import final de la compra son " << preu_final << " euros.";
        }
    }
    else{
        cout << "L'import final de la compra son " << preu_final << " euros.";
    }
}