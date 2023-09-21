#include <iostream>

using namespace std;

int main()
{
    int x;
    float a, b;
    cin >> x;
    a = 2.0 / (x - 4);
    b = (1 + 4 - x) / (3.0 * (x + 3));
    cout << "Resultat: " << a << endl;
    cout << "Resultat: " << b << endl;

}