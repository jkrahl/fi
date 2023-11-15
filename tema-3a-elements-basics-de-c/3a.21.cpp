#include <iostream>

using namespace std;

int main(){
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    bool b1 = ((num1 < 7) && ((num2 > num3) || (7 > num3)));
    bool b2 = ((num1 == 'c') && (num2 < -5)) && ((num3 >= 100) || (num3 < 6));
    bool b3 = (((9 >= num1) && (13 < num2)) || (-36 >= num3));
    cout << "Resultat de les expressions: " << (int) b1 << " " << (int) b2 << " " << (int) b3;
}