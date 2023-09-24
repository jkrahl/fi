#include <iostream>

using namespace std;

int main()
{
    bool b; int num;
    cin >> num;
    b = (num > 0) && (num < 10);
    cout << "El resultat de la comparacio es: " << b;
    return 0;
}