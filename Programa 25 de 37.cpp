#include <iostream>
using namespace std;

int main() {
	int carta;
	cout<< "Escribe tu carta de la baraja española:" <<endl;
	cin>>carta;
	if (carta==1){
		cout<< "Su Carta es un as" <<endl;
	}
	else if(carta==10){
		cout<< "Su carta es un sota" <<endl;
	}
	if (carta==11){
		cout<< "Su carta es un caballo" <<endl;
	}
	if(carta==12){
		cout<< "Su carta es un Rey" <<endl;
	}
	if (carta>=2 && carta<=9){
		cout<< "Su carta no es una carta de la baraja española" <<endl;
	}
}
	