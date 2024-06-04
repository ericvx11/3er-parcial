#include <iostream>
#define precio 70
using namespace std;

int main() {
    float edad, mayor, menor, descuento, descuento1;
    cout<< "El precio original es de $70.00, ingresé su edad para saber si tiene descuento: "<<endl;
    cin>> edad;
    if(edad<5) {
        menor= 0.6 * precio;
        descuento= precio - menor;
        cout<< "Su descuento es del 60%, así que su precio sería: " << descuento <<endl;
        }
    
    else if(edad>4) {
        cout<< "Su edad no tiene descuento, asi que debe pagar $70.00 " <<endl;
    }
    
    else if (edad>60) {
        mayor=0.55 * precio;
        descuento1= precio - mayor;
        cout<< "Su descuento es del 55%, así que su precio sería: " <<descuento1 <<endl;
    }
    
    else if (edad<60) {
        cout<< "Su edad no tiene descuento, así que debe pagar $70.00 " <<endl;
    }
    return 0;
}