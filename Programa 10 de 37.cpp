#include <iostream>
using namespace std;
int main() {
    int edad, MayorDeEdad, juvenil;
    cin>> edad;
    MayorDeEdad= (edad>18);
    juvenil= (edad<15) && (edad<=18);
    cout<< MayorDeEdad <<endl;
    cout<< juvenil <<endl;
}