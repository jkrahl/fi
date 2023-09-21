#include <iostream>

using namespace std;

int main()
{
    bool b; int x;
    cin >> x;
    b = (x > 0) && (x < 10);
    cout << "El resultat de la comparacio es: " << b;
    return 0;
}