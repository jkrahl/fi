#include <iostream>

using namespace std;

int main()
{
    int sum = 0, i = 1, limit;
    cin >> limit;
    while (limit <= 0)
    {
        cout << "Error: el valor ha de ser mes gran que zero" << endl;
        cin >> limit;
    }
    while (i <= limit)
    {
        sum += i;
        i++;
    }
    cout << "El sumatori de " << limit << " es: " << sum;
}