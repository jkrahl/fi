#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    int comparacions = 0;

    cin >> a >> b >> c >> d;

    comparacions++;
    if (a > b) {
        comparacions++;
        if (a > c) {
            comparacions++;
            if (a > d) {
                cout << "El numero mes gran de la serie es " << a << ". Comparacions: " << comparacions;
            }
            else {
                cout << "El numero mes gran de la serie es " << d << ". Comparacions: " << comparacions;
            }
        }
        else {
            comparacions++;
            if (c > d) {
                cout << "El numero mes gran de la serie es " << c << ". Comparacions: " << comparacions;
            }
            else {
                cout << "El numero mes gran de la serie es " << d << ". Comparacions: " << comparacions;
            }
        }
    }
    else {
        comparacions++;
        if (b > c) {
            comparacions++;
            if (b > d) {
                cout << "El numero mes gran de la serie es " << b << ". Comparacions: " << comparacions;
            }
            else {
                cout << "El numero mes gran de la serie es " << d << ". Comparacions: " << comparacions;
            }
        }
        else {
            comparacions++;
            if (c > d) {
                cout << "El numero mes gran de la serie es " << c << ". Comparacions: " << comparacions;
            }
            else {
                cout << "El numero mes gran de la serie es " << d << ". Comparacions: " << comparacions;
            }
        }
    }

    return 0;
}