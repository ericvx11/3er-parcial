#include <iostream>

using namespace std;

int main()
{
	int uni,pre,sub,desc,iva,total;
	cin>>uni;
	cout<<"Cantidad de unidades: "<<uni<<endl;
	cin>>pre;
	cout<<"Precio unitario: "<<pre<<endl;
	sub=uni*pre;
	if(sub<1000){
		desc=sub*0;
	}
	if(sub>1000){
		desc=sub*0.1;
		cout<<"Su descuento es de :"<<desc<<endl;
	}
	if(sub>2000){
		desc=sub*0.2;
		cout<<"Su descuento es de :"<<desc<<endl;
	}
	if(sub>3000){
		desc=sub*0.3;
		cout<<"Su descuento es de :"<<desc<<endl;
	}
	iva=sub*0.16;
	total=sub-desc+iva;
	cout<<"El total es de :"<<total<<endl;
}