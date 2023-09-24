#include <iostream>
#define ANY_ACTUAL 2023

using namespace std;

int main(){
    int any_nascut, edat;
    cin >> any_nascut;
    edat = ANY_ACTUAL - any_nascut;
    if(edat < 18){
        cout << "Tens " << edat << " anys i ets menor d'edat.";
    }
    else {
        cout << "Tens " << edat << " anys i ets major d'edat.";
    }
}