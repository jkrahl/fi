#include <iostream>

using namespace std;

#define ANY_ACTUAL 2023

int main(){
    int anyN, edat;
    cin >> anyN;
    edat = ANY_ACTUAL - anyN;
    cout << "Tens " << edat << " anys." << endl;
    if(edat >= 16 && edat < 67){
        cout << "Estas en edat de treballar.";
    }
    return 0;
}