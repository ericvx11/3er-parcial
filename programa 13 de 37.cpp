#include <iostream>
using namespace std;

int main() {
    int x, y, res, r;
    cout<< "Introduzca el valor de X: " <<endl;
    cin>> x;
    cout<< "Introduzca el valor de Y: " <<endl;
    cin>> y;
    res=x/y;
    r=x % y;
    cout<<"La division de " << x << " y " << y << " es: " << res << ", y el resultado es: "<< r <<endl;
}