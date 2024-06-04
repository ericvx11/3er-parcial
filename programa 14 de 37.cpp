#include <iostream>
using namespace std;

int main() {
    int farenheit, celcius;
    cout<< "Introduzca los grados farenheit: "<< endl;
    cin>> farenheit;
    celcius= (farenheit-32) * 5 / 6;
    cout<< farenheit << " en celcius es " << celcius <<endl;
}