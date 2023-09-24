#include <iostream>

#define ANY_ACTUAL 2023

using namespace std;

int main(){
    int edat, any_nascut;
    cin >> any_nascut;
    edat = ANY_ACTUAL - any_nascut;
    if(edat >= 18){
        cout << "Tens " << edat << " anys i ets major d'edat. ";
        if(edat >= 67){
            cout << "Estas en edat de jubilacio.";
        }
        else{
            cout << "Estas en edat de treballar.";
        }
    }
    else{
        cout << "Tens " << edat << " anys i ets menor d'edat. ";
        if(edat > 12){
            cout << "Has acabat primaria.";
        }
        else{
            cout << "Encara no has acabat primaria.";
        }
    }
}