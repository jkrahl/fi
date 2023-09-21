#include <iostream>

using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    bool b1 = ((x < 7) && ((y > z) || (7 > z)));
    bool b2 = ((x == 'c') && (y < -5)) && ((z >= 100) || (z < 6));
    bool b3 = (((9 >= x) && (13 < y)) || (-36 >= z));
    cout << "Resultat de les expressions: " << (int) b1 << " " << (int) b2 << " " << (int) b3;
}