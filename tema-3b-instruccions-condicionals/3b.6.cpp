#include <iostream>

using namespace std;

int main(){
    float salari_brut, salari_final, percentatge;
    int ant;
    cin >> salari_brut >> ant;
    if(ant < 3){
        percentatge = 0.01;
    }
    else{
        if(ant < 5){
            percentatge = 0.02;
        }
        else{
            percentatge = 0.035;
        }
    }
    salari_final = salari_brut * (1 + percentatge);
    cout << "El salari final es: " << salari_final;
}