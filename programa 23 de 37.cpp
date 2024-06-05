#include <iostream>
using namespace std;

int main() {
	int opc, area, area2, base, base2, alt, triangulo, trapecio, rectangulo;
    cout<<"-------------------------------" <<endl;
	cout<<"1.- Calcule el area de un triangulo" <<endl;
	cout<<"2.- Calcule el area de un trapecio" <<endl;
	cout<<"3.- Calcule el area de un rectangulo";
	cin>> opc;
	if (opc==1) {
		cout<<"Escriba su base:" <<endl;
		cin>>base;
		cout<< "Escriba su altura:" <<endl;
		cin>> alt;
		triangulo=base*alt;
		area=triangulo/2;
		cout<< "Su area es: " << area <<endl;
	}
	else if (opc==2) {
		cout<< "Escriba su Base 1:" <<endl;
		cin>> base;
		cout<< "Escriba su Base 2: " <<endl;
		cin>> base2;
		cout<< "Escriba su altura:" <<endl;
		cin>>alt;
		trapecio=base+base2;
		area=trapecio*alt;
		area2=area/2;
		cout<< "Su area es: "<< area2 <<endl;
	}
	if (opc==3) {
		cout<< "Escriba su base: " <<endl;
		cin>> base;
		cout<< "Escriba su altura: " <<endl;
		cin>> alt;
		area=base*alt;
		cout<< "Su area es: "<< area <<endl;
	}
}