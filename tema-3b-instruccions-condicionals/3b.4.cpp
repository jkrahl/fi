#include <iostream>

using namespace std;

int main(){
    char letra;
    cin >> letra;
    if((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u') || (letra == 'A') || (letra == 'E') || (letra == 'I') || (letra == 'O') || (letra == 'U')){
        cout << "Vocal";
    }
    else {
        cout << "Consonant";
    }
}