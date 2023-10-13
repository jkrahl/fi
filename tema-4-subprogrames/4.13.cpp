#include <iostream>

using namespace std;

int fibonacci(int n)
{
    int a = 0, b = 1, c = 0;
    if (n == 0)
        return a;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n;
    cin >> n;
    while(n < 0)
    {
        cout << "Error: El nombre no pot ser negatiu" << endl;
        cin >> n;
    }
    int f = fibonacci(n);
    cout << "El terme " << n << " de la serie de Fibonacci es " << f << endl;
}