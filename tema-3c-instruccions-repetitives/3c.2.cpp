#include <iostream>

using namespace std;

int main()
{
    int sum = 0, num = 1, limit;
    cin >> limit;
    if(limit <= 0){
        do
        {
            cout << "Error: el valor ha de ser mes gran que zero" << endl;
            cin >> limit;
        } while (limit <= 0);
    }

    do
    {
            sum += num;
            num++;
    } while (num <= limit);
    cout << "El sumatori de " << limit << " es: " << sum; 
}