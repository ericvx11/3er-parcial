#include <iostream>
#include <cstring>  
using namespace std;

int main() {
    char nombre[100];
    cout << "Escriba su nombre: " << endl;
    cin.getline(nombre, sizeof(nombre)); 
    cout << "Hola chavo/a " << nombre << endl;
    return 0;
}
