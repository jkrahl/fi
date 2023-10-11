#include <iostream>

using namespace std;

int factorial(int num)
{
    int fact = 1;
    while (num > 0)
    {
        fact *= num;
        num--;
    }
    return fact;
}

int main()
{
    int n, m, res;
    cin >> n >> m;
    res = factorial(n) / (factorial(m) * factorial(n-m));
    cout << "El nombre d'equips que es poden formar es: " << res;
}