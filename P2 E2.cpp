#include<bits/stdc++.h>
using namespace std;
int main(){
	int compra, paga;
	cout<<"Que tal, como esta. "<<endl;
	cout<<"Ingrese el precio de la compra :";
	cin>>compra;
	if (compra>=1000){
		paga=compra-(compra*0.2);
		cout<<"El total a pagar sera :"<<paga<<endl;
	} else{
		cout<<"El total a pagar sera :"<<compra<<endl;
	} 
	cout<<"Gracias por su compra."<<endl;
	return 0;
}
