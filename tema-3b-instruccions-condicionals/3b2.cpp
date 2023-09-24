#include <iostream>

using namespace std;

int main(){
    int hores, minuts, segons;
    char dos_punts;
    cin >> hores >> dos_punts >> minuts >> dos_punts >> segons;
    cout << hores << ":" << minuts << ":" << segons << endl;
    segons += 1;
    if(segons >= 60){
        segons = 0;
        minuts += 1;
    }
    if(minuts >= 60){
        minuts = 0;
        hores += 1;
    }
    if(hores >= 24){
        hores = 0;
    }
    if(hores < 10){
        cout << 0;
    }
    cout << hores << ":";
    if(minuts < 10){
        cout << 0;
    }
    cout << minuts << ":";
    if(segons < 10){
        cout << 0;
    }
    cout << segons;
}