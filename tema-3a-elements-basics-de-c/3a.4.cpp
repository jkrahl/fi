#include <iostream>

using namespace std;

int main()
{
    bool b;
    int num1, num2;
    cin >> num1 >> num2;
    b = ((num1 >= 0) && (num1 <= 10)) && ((num2 >= 0) && (num2 <= 10));
    cout << "El resultat es: " << b;
    return 0;
}