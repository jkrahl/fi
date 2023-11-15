#include <iostream>

using namespace std;

int main()
{
    float celsius, fahrenheit;
    cin >> celsius;
    fahrenheit = ((9 / 5.0) * celsius) + 32;
    cout << celsius << " graus Celsius son " << fahrenheit << " graus Fahrenheit";

}