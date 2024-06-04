#include <iostream>
using namespace std;

int main() {
    int numero;
    cout<< "Ingrese un número entero: " <<endl;
    cin>> numero;
    
    if (numero % 2==0) {
        cout<< numero << " es múltiplo de 2" <<endl;
    }
    
    else {
        cout<< numero << " es un número impar" <<endl;
    }
    
    if ( numero % 3==0) {
        cout<< numero << " es múltiplo de 3" <<endl;
    }
    
    else {
        cout<< " " << numero << " no es múltiplo de 3" <<endl;
    }
    
    return 0;
}