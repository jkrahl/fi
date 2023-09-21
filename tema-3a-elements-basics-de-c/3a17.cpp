#include <iostream>

using namespace std;

int main()
{
    int x, u;
    cin >> x;
    u = (x / 1000) % 10;
    cout << "Les unitats de miler del nombre " << x << " son " << u;

}