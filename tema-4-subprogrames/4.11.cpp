#include <iostream>
#include <stdlib.h>

using namespace std;

int dividir(int dividend, int divisor)
{
    int signe1 = 1, signe2 = 1;
    if (dividend < 0)
    {
        signe1 = -1;
    }
    if (divisor < 0)
    {
        signe2 = -1;
    }
    dividend = abs(dividend);
    divisor = abs(divisor);
    int res = 0;
    while (dividend >= divisor)
    {
        dividend -= divisor;
        res++;
    }
    return signe1 * signe2 * res;
}

int main()
{
    int dividend, divisor;
    cin >> dividend >> divisor;
    if (divisor == 0)
    {
        cout << "Error: Divisio per zero" << endl;
    }
    else
    {
        cout << dividend << " : " << divisor << " = " << dividir(dividend, divisor);
    }
    
    
}