#include <iostream>
using namespace std;

int main() {
    int n1, n2, res;
    cout << "Ingrese el primer número: " << endl;
    cin >> n1;
    cout << "Ingrese el segundo número: " << endl;
    cin >> n2;
    
    if (n1 == 0) {
        cout << "El primer número no es divisible porque es 0." << endl;
    } else if (n2 == 0) {
        cout << "No se puede dividir por 0." << endl;
    } else {
        res = n1 / n2;
        cout << "El resultado entre " << n1 << " y " << n2 << " es: " << res << endl;
    }

    return 0;
}
