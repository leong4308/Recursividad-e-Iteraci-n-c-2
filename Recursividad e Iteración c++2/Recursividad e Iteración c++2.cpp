#include <iostream>
#include <string>

using namespace std;

int main() {
    int NUM, RESUL, T, I;
    string linea;

    cout << "CUANTAS TABLAS: ";
    cin >> linea;
    NUM = stoi(linea);
    T = 1;

    while (T <= NUM) {
        I = 10;

        while (I >= 1) {
            RESUL = T * I;
            cout << T << " x " << I << " = " << RESUL << endl;
            I = I - 1;
        }

        T = T + 1;
    }

    cout << "Pulse una Tecla :";
    cin.get();
    cin.get();
    return 0;
}
