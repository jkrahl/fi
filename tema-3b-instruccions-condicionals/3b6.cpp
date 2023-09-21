#include <iostream>

using namespace std;

int main(){
    float salariBrut, salariFinal, perc;
    int ant;
    cin >> salariBrut >> ant;
    if(ant < 3){
        perc = 0.01;
    }
    else{
        if(ant < 5){
            perc = 0.02;
        }
        else{
            perc = 0.035;
        }
    }
    salariFinal = salariBrut * (1 + perc);
    cout << "El salari final es: " << salariFinal;
}