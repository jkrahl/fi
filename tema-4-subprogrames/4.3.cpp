#include <iostream>
#include <unistd.h>

using namespace std;

int Alerta(int s)
{
    cout << "Alerta: ";
    if (s != 0)
    {
        cout << "Queden " << s << " segons";
    }
    else
    {
        cout << "S'ha acabat el temps";
    }
    cout << endl;
    return 0;
    
}

int main()
{
    int seg, res;
    cin >> seg;
    do
    {
        res = Alerta(seg);
        sleep(1);
        seg--;
    } while (seg >= 0);
    
}