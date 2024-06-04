#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout<< "Escriba dos números: " <<endl;
    cin>> n1;
    cin>> n2;
    
    if (n1>n2) {
        cout<< n1 << " es mayor";
    }
    
    else if (n1<n2) {
        cout<< n2 << " es mayor"<<endl;
    }
}