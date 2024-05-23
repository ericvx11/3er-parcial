#include <iostream>
using namespace std;

int main() {
    int numeros[10];

    cout << "Ingrese 10 numeros:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9 - i; ++j) {
            if (numeros[j] < numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    cout << "Los numeros ordenados de mayor a menor son:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}