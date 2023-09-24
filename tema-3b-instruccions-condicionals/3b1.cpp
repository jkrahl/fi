#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    cout << "El nombre " << num;
    if(num<0 || num>10){
        cout << " NO";
    }
    cout << " esta en l'interval";
    return 0;
}