#include <iostream>
using namespace std;

int main() {
    int x, y = 0;
    for (int i = 1; i < 21; i++) {
        cout << "Ingrese su numero " << i << endl;
        cin >> x;
        y = y + x;
        if (x == 0) {
            cout << "El resultado es: " << y << endl;
            return 0;
        }
    }
    cout << "La suma de los numeros es: " << y << endl;
}