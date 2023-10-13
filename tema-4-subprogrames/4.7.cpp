#include <iostream>

using namespace std;

int centenes(int num)
{
    int res = (num / 100) % 10;
    return res;
}

int main()
{
    int num;
    cin >> num;
    cout << "Les centenes del nombre " << num << " son " << centenes(num) << endl;
}