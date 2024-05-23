#include <iostream>
using namespace std;
int main () {
    int a, b, c;
    int codigo, Farenheit, coord_x, coord_y;
    codigo= 3467;
    Farenheit= 123.456;
    coord_x= 525;
    coord_y= 725;
    a=b=c=45;
    a=(b=(c=45));
    cout<< "valor de la variable codigo: "<< codigo <<endl;
    cout<< "Valor de la variable Farenheit: "<< Farenheit <<endl;
    cout<< "Valor de la variable coord_x: "<< coord_x <<endl;
    cout<< "Valor de la variable coord_y: "<< coord_y <<endl;
    cout<< "Valor de la variable a: "<< a <<endl;
    cout<< "Valor de la variable b: "<< b <<endl;
    cout<< "Valor de la variable c: "<< c <<endl;
}