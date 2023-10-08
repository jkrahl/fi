#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    char lletra = 'S';
    do {
        bool endevinat = false;
        int num = (rand() % 10) + 1;
        int intents = 0;
        do {
            int entrada;
            cout << "Introdueix un numero del 1 al 10: " << endl;
            cin >> entrada;
            while (entrada < 1 || entrada > 10) {
                cout << "Error: Valor fora del rang 1-10" << endl;
                cout << "Introdueix un numero del 1 al 10: " << endl;
                cin >> entrada;
            }
            if (num == entrada) {
                endevinat = true;
            } else {
                if (entrada < num) {
                    cout << "El numero a endevinar es mes gran" << endl;
                }
                else {
                    cout << "El numero a endevinar es mes petit" << endl;
                }
            }
            intents++;
        } while (intents < 5 && endevinat == false);
        if (endevinat == true) {
            cout << "Has guanyat!!! Has encertat en " << intents << " intents" << endl;
        } else {
            cout << "Has perdut: El numero secret era " << num << endl;
        }
        cout << "Vols tornar a jugar?" << endl;
        cin >> lletra;
    } while (lletra == 'S');
}