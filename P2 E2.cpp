#include<bits/stdc++.h>
using namespace std;
int main(){
	int compra, pago, vuelto;
	cout<<"Que tal, como esta. "<<endl;
	cout<<"Ingrese el precio de la compra :";
	cin>>compra;
	cout<<"Con cuanto piensa pagar :";
	cin>>pago;
	if (pago>=compra){

	if (compra>=1000){
		compra=compra-(compra*0.2);
		cout<<"El total a pagar sera :"<<compra<<endl;
		vuelto= pago-compra;
		cout<<"Su vuelto es :"<<vuelto<<endl;
	} else{
		cout<<"El total a pagar sera :"<<compra<<endl;
		vuelto=pago-compra;
		cout<<"Su vuelto es :"<<vuelto<<endl;
	} 
	} else{
		cout<<"El dinero es insuficiento . "<<endl;
	}
	cout<<"Gracias por su compra."<<endl;
	return 0;
}
