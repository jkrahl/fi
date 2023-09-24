#include <iostream>

using namespace std;

int main()
{
    int num1;
    float res1, res2;
    cin >> num1;
    res1 = 2.0 / (num1 - 4);
    res2 = (1 + 4 - num1) / (3.0 * (num1 + 3));
    cout << "Resultat: " << res1 << endl;
    cout << "Resultat: " << res2 << endl;

}