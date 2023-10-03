#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; pow(2, i) <= n; i++)
    {
        cout << pow(2, i) << " ";
    }
    
}