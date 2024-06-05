#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n1, p, t, x;
    cout << "Escriba su número para elevarlo a su potencia:" << endl;
    cin >> n1;
    cout << "Escriba ahora el número de potencias que desea:" << endl;
    cin >> p;
    
    t = static_cast<int>(pow(n1, p)); 

    if (n1 == 5) {
        x = t + 1;
        cout << "El número " << n1 << " potenciado a la " << p << " es igual a: " << x << endl;
    } else if (n1 > 5) {
        cout << "El número " << n1 << " potenciado a la " << p << " es igual a: " << t << endl;
    } else {
        cout << "El número " << n1 << " potenciado a la " << p << " es igual a: " << t << endl;
    }
    
    return 0;
}
