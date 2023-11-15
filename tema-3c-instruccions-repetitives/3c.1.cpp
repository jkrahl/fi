#include <iostream>

using namespace std;

int main()
{
    int sum = 0, i = 1;
    do
    {
        sum += i; // Equivalente a sum = sum + i
        i++; // Equivalente a i = i + 1
    } while (i <= 10);
    cout << sum;
}