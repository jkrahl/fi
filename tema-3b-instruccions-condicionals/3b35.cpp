#include <iostream>

using namespace std;

int main(){
    char entrada;
    cin >> entrada;
    switch (entrada)
    {
    case 'a':
    case 'A':
        cout << "Vocal " << entrada << " - Codi Morse: .-";
        break;
    case 'e':
    case 'E':
        cout << "Vocal " << entrada << " - Codi Morse: .";
        break;
    case 'i':
    case 'I':
        cout << "Vocal " << entrada << " - Codi Morse: ..";
        break;
    case 'o':
    case 'O':
        cout << "Vocal " << entrada << " - Codi Morse: ---";
        break;
    case 'u':
    case 'U':
        cout << "Vocal " << entrada << " - Codi Morse: ..-";
        break;
    default:
    cout << "Error: El caracter introduit no es una vocal";
        break;
    }
}