#include <iostream>

using namespace std;

int main(){
    int any;
    cin >> any;
    // La operación % es el residuo de la división entera, si es 0 es que es multiplo
    if(((any % 4 == 0) && (any % 100 != 0)) || (any % 400 == 0)){
        cout << "A l'any " << any << " febrer te 29 dies";
    }
    else
    {
        cout << "A l'any " << any << " febrer te 28 dies";
    }
}