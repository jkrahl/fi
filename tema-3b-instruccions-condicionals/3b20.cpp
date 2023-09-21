#include <iostream>

using namespace std;

int main(){
    float x, y, z;
    cin >> x >> y >> z;
    if(((x + y) == z))
    {
        cout << "IGUALS";
    }
    else
    {
        if((x + z) == y)
        {
            cout << "IGUALS";
        }
        else
        {
            if((y + z) == x)
            {
                cout << "IGUALS";
            }
            else
            {
                cout << "DIFERENTS";
            }
        }
    }
}