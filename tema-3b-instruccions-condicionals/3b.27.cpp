#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4;
    int c = 0;

    cin >> num1 >> num2 >> num3 >> num4;

    c++;
    if (num1 > num2) {
        c++;
        if (num1 > num3) {
            c++;
            if (num1 > num4) {
                cout << "El numero mes gran de la serie es " << num1 << ". Comparacions: " << c;
            }
            else {
                cout << "El numero mes gran de la serie es " << num4 << ". Comparacions: " << c;
            }
        }
        else {
            c++;
            if (num3 > num4) {
                cout << "El numero mes gran de la serie es " << num3 << ". Comparacions: " << c;
            }
            else {
                cout << "El numero mes gran de la serie es " << num4 << ". Comparacions: " << c;
            }
        }
    }
    else {
        c++;
        if (num2 > num3) {
            c++;
            if (num2 > num4) {
                cout << "El numero mes gran de la serie es " << num2 << ". Comparacions: " << c;
            }
            else {
                cout << "El numero mes gran de la serie es " << num4 << ". Comparacions: " << c;
            }
        }
        else {
            c++;
            if (num3 > num4) {
                cout << "El numero mes gran de la serie es " << num3 << ". Comparacions: " << c;
            }
            else {
                cout << "El numero mes gran de la serie es " << num4 << ". Comparacions: " << c;
            }
        }
    }

    return 0;
}