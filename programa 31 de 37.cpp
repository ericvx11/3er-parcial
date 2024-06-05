#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    char us[25];
    char contra[5];
    int intentos = 0;
    int num, pre, x, y, opci;

    while (intentos < 3) {
        cout << "Escriba su nombre" <<endl;
        cin >> us;
        cout << "Escriba la contrasena" <<endl;
        cin >> contra;

        if (strcmp(us, "Eric") == 0 && strcmp(contra, "2B47") == 0) {
            cout << "Bienvenido al sistema" <<endl;
            cout << "Si desea crear una factura" <<endl;
            cout << "Presione 1 para continuar" <<endl;
            cout << "Presione 0 para detener" <<endl;
            cin >> opci;
            if (opci != 0) {
                cout << "Usted decidió crear una factura" <<endl;
                cout << "Escriba el numero de articulos que desea comprar" <<endl;
                cin >> num;
                cout << "Ahora, por favor introduzca el precio de cada articulo" <<endl;
                cin >> pre;
                x = num * pre;
                y = x;
                cout << "El precio de la factura es: " << y << endl;
            }
            cout << "De acuerdo, hasta luego" <<endl;
            return 0;
        } else {
            cout << "La contraseña es incorrecta, intente de nuevo" <<endl;
            intentos++;
        }
    }

    cout << "Se ha excedido el numero maximo de intentos, cierre el programa e intente de nuevo" <<endl ;
    return 0;
}
