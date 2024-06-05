#include <iostream>
#include <cstring>  // For strcmp
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
        
        while (strcmp(us, "Eric") != 0 || strcmp(contra, "2B47") != 0) {
            cout << "La contraseña es incorrecta, intente de nuevo" <<endl;
            intentos++;
            if (intentos >= 3) {
                cout << "Se ha excedido el número máximo de intentos, cierre el programa e intente de nuevo" <<endl;
                return 0;
            }
            cout << "Escriba su nombre" <<endl;
            cin >> us;
            cout << "Escriba la contrasena" <<endl;
            cin >> contra;
        }
        
        cout << "Bienvenido al sistema " <<endl;
        cout << "Si desea crear una factura" <<endl;
        cout << "Presione 1 para continuar" <<endl;
        cout << "Presione 0 para detener" <<endl;
        cin >> opci;
        
        while (opci != 0) {
            cout << "Usted decidió crear una factura" <<endl;
            cout << "Escriba el número de artículos que desea comprar" <<endl;
            cin >> num;
            cout << "Ahora, por favor introduzca el precio de cada artículo" <<endl;
            cin >> pre;
            x = num * pre;
            y = x;
            cout << "El precio de la factura es: " << y << endl;
            cout << "Presione 1 para continuar o 0 para detener." <<endl;
            cin >> opci;
        }
        
        cout << "De acuerdo, hasta luego" <<endl;
        return 0;
    }
}
