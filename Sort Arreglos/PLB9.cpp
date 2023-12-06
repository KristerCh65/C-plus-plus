#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct{
	int codigo;
	string nombre;
}a[5];

int main(int argc, char** argv) {
	
	for(int i=0;i<5;i++){
		cout<<"Numero "<<i+1<<endl;
		cout<<"Ingrese codigo de Usuario: "<<endl;
		cin>>a[i].codigo;
		cout<<"Ingrese Nombre de Usuario: "<<endl;
		cin>>a[i].nombre;
		cout<<endl;
	}
	
	for(int i=1;i<5;i++){
		cout<<"Registro: "<<i<<endl;
		cout<<"Codigo: "<<a[i].codigo<<endl;
		cout<<"Nombre: "<<a[i].nombre<<endl;
		cout<<endl;
	}
	
	return 0;
}
