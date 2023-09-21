#include <iostream>

using namespace std;

int main(){
    int unitats;
    float preuIndividual, iva = 1.07, preuFinal = 0;
    cin >> unitats >> preuIndividual;
    preuFinal = preuIndividual * unitats;
    preuFinal *= iva;
    if(preuFinal > 500){
        if(preuFinal > 1000){
            preuFinal *= 0.9;
            cout << "L'import final de la compra son " << preuFinal << " euros.";
        }
        else{
            preuFinal *= 0.95;
            cout << "L'import final de la compra son " << preuFinal << " euros.";
        }
    }
    else{
        cout << "L'import final de la compra son " << preuFinal << " euros.";
    }
}