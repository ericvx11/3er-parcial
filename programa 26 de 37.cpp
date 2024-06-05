#include <iostream>
using namespace std;

int main()
{
	int sueldo, horas, extra, extra2;
	cout<< "Escriba su sueldo adquirido:" <<endl;
	cin>> sueldo;
	cout<<"Escriba sus horas trabajadas:" <<endl;
	cin>> horas;
	if (horas<41){
		cout<< "Su sueldo es de: " << sueldo <<endl;
	}
	else if (horas<50){
		extra=sueldo*1.50;
		cout<< "Su sueldo es de: " << extra <<endl;
	}
	if(horas>79){
		extra2=sueldo*2;
		cout<< "Su sueldo es de: " <<extra2 << endl;
	}
	return 0;
}
