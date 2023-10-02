#include <iostream>

using namespace std;

int main()
{
    bool primer = true;
    int n, i = 2;
    cin >> n;
    while (i <= n/2 && primer == true)
    {
        if (n % i == 0)
        {
            primer = false;
        }
        i++;
    }
    if (primer)
    {
        cout << "PRIMER";
    }
    else
    {
        cout << "NO PRIMER";
    }
    
    
}