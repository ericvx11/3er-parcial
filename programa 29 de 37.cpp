#include <iostream>
#include <cstring>  
using namespace std;

int main() {
    int pro = 0, suma = 0, x = 0;
    char us[40];
    char contra[20];
    int intentos = 3;
    char conf[20];

    while (intentos > 0) 
    {
        cout << "Escriba su usuario:" << endl;
        cin >> us;
        cout << "Ahora escriba su contraseña:" << endl;
        cin >> contra;

        if (strcmp(us, "Eric") == 0 && strcmp(contra, "2B47") == 0) {
            cout << "Bienvenido al sistema papu" << endl;

            do {
                cout << "Que precio tiene el producto?:" << endl;
                cin >> pro;
                suma += pro;  
                cout << "Desea agregar otro producto? (si/no):" << endl;
                cin >> conf;
            } while (strcmp(conf, "si") == 0);

            cout << "La suma de todos los productos es: " << suma << endl;
            return 0;
        } else {
            intentos--;  
            cout << "Intente de nuevo, algo anda mal. Le quedan " << intentos << " intentos." << endl;
        }
    }

    cout << "Ha superado el número de intentos permitidos." << endl;
    return 0;
}
