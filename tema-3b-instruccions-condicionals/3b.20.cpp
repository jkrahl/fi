#include <iostream>

using namespace std;

int main(){
    float num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    if(((num1 + num2) == num3))
    {
        cout << "IGUALS";
    }
    else
    {
        if((num1 + num3) == num2)
        {
            cout << "IGUALS";
        }
        else
        {
            if((num2 + num3) == num1)
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