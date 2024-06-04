#include <iostream>
using namespace std;

int main() {
    int n1, n2, res;
    cout<< "Escriba su primer número: " <<endl;
    cin>> n1;
    cout<< "Escriba su segundo número: " <<endl;
    cin>> n2;
    
    if (n1==0) {
        cout<< "Su valor no se puede dividir, por qué es 0" <<endl;
    }   
    
    else if (n1>0) {
    res = n1 / n2;
    cout<< "El resultado sería: " << res <<endl;
    }
}