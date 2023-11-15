#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    int hores, minuts, segons, i = 0;
    char dosPunts;
    cin >> hores >> dosPunts >> minuts >> dosPunts >> segons;

    do
    {
        i++;
        segons += 1;
        if (segons >= 60)
        {
            segons = 0;
            minuts += 1;
        }
        if (minuts >= 60)
        {
            minuts = 0;
            hores += 1;
        }
        if (hores >= 24)
        {
            hores = 0;
        }
        if (hores < 10)
        {
            cout << 0;
        }
        cout << hores << ":";
        if (minuts < 10)
        {
            cout << 0;
        }
        cout << minuts << ":";
        if (segons < 10)
        {
            cout << 0;
        }
        cout << segons << endl;
    } while (i < 5);
}