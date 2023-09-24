#include <iostream>

using namespace std;

int main(){
    char entrada;
    cin >> entrada;
    switch (entrada)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        cout << "Vocal";
        break;
    default:
        cout << "Consonant";
        break;
    }
}