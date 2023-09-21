#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    if (x > 0){
        cout << "Positiu";
    }
    else{
        if(x == 0){
            cout << "Zero";
        }
        else{
            cout << "Negatiu";
        }
    }
}