#include <iostream>
#define ANY_ACTUAL 2023

using namespace std;

int main(){
    int anyN, edat;
    cin >> anyN;
    edat = ANY_ACTUAL - anyN;
    if(edat < 18){
        cout << "Tens " << edat << " anys i ets menor d'edat.";
    }
    else {
        cout << "Tens " << edat << " anys i ets major d'edat.";
    }
}