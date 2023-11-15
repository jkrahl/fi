#include <iostream>

using namespace std;

#define ANY_ACTUAL 2023

int main(){
    int any_nascut, edat;
    cin >> any_nascut;
    edat = ANY_ACTUAL - any_nascut;
    cout << "Tens " << edat << " anys." << endl;
    if(edat >= 16 && edat < 67){
        cout << "Estas en edat de treballar.";
    }
    return 0;
}