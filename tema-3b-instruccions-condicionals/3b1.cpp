#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    cout << "El nombre " << x;
    if(x<0 || x>10){
        cout << " NO";
    }
    cout << " esta en l'interval";
    return 0;
}