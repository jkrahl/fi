#include <iostream>

using namespace std;

int main(){
    int hh, mm, ss;
    char c;
    cin >> hh >> c >> mm >> c >> ss;
    cout << hh << ":" << mm << ":" << ss << endl;
    ss += 1;
    if(ss >= 60){
        ss = 0;
        mm += 1;
    }
    if(mm >= 60){
        mm = 0;
        hh += 1;
    }
    if(hh >= 24){
        hh = 0;
    }
    if(hh < 10){
        cout << 0;
    }
    cout << hh << ":";
    if(mm < 10){
        cout << 0;
    }
    cout << mm << ":";
    if(ss < 10){
        cout << 0;
    }
    cout << ss;
}