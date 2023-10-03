#include <iostream>

using namespace std;

int main()
{
    float nota;
    int suspesos = 0, aprovats = 0, notables = 0, excellents = 0, mh = 0;
    cin >> nota;
    if (nota >= 0 && nota <= 10)
    {
        while (nota >= 0 && nota <= 10)
        {
            if (nota < 5)
            {
                suspesos++;
            }
            else
            {
                if (nota < 7)
                {
                    aprovats++;
                }
                else
                {
                    if (nota < 9)
                    {
                        notables++;
                    }
                    else
                    {
                        if (nota < 10)
                        {
                            excellents++;
                        }
                        else
                        {
                            mh++;
                        }
                    }
                }
            }
            cin >> nota;
        }
    }
    cout << "S: " << suspesos << " - A: " << aprovats << " - N: " << notables << " - E: " << excellents << " - MH: " << mh;
}