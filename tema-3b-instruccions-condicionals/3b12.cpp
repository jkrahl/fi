#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    if(num1 > num2){
        int aux;
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    cout << "El valor de num1 es " << num1 << " i el valor de num2 es " << num2;
}