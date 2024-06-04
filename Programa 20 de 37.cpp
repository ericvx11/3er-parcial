#include <iostream>
using namespace std;

int main() {
    int hora;
    cout << "Escriba la hora: " << endl;
    cin >> hora;
    
    if (hora < 12) {
        cout << "Buenos días :) " << endl;
    } else if (hora <= 17) {
        cout << "Buenas tardes ;| " << endl;
    } else {
        cout << "Buenas noches :( " << endl;
    }
    
    return 0;
}
