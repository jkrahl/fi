#include <iostream>

using namespace std;

int main()
{
    bool b; int x, y;
    cin >> x >> y;
    b = ((x >= 0) && (x <= 10)) && ((y >= 0)&&(y <=10));
    cout << "El resultat es: " << b;
    return 0;
}