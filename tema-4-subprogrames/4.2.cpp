#include <iostream>
#include <cstdlib>

using namespace std;

int Aleatori(int min, int max)
{
    int al;
    al = min + (rand() % (max - min + 1));
    return al;
}

int main()
{
    int min, max;
    cin >> min >> max;
    cout << Aleatori(min, max);
}