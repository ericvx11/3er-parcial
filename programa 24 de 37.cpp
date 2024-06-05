#include <iostream>
using namespace std;

int main() {
    int  x;
    cout<< "Introduzca el número: " <<endl;
    cin>> x;
    
    if (x % 2==0) {
        cout<< "El número es par" <<endl;
    }
    
    else if(x % 2>0) {
        cout<< "El número es impar" <<endl;
    }
    return 0;
}
