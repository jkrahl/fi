#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    // Para intercambiar valores hace falta una nueva variable que te sirva para guardar el valor perdido.
    if(num1 > num2){
        int auxiliar;
        auxiliar = num1;
        num1 = num2;
        num2 = auxiliar;
    }
    cout << "El valor de num1 es " << num1 << " i el valor de num2 es " << num2;
}