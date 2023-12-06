#include <iostream>
#include "Nodo.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
Nodo *I, *F, *T;

void agregar(int);
void Presenta();
void Ver();
int op;
int m;

int main(int argc, char** argv) {
	
	do{
		cout<<"\tMENU"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"3) Borrar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese un numero"<<endl;
				cin>>m;
				agregar(m);
				break;
			case 2:
				Presenta();
				break;
		}
	}while(op!=0);
	
	
	return 0;
}

void agregar(int n){
	T = new Nodo();
	
	T->num=n;
	
	if(I==NULL){
		T=I;
		F=I;
	}else{
		T=T->sig;
		F->sig=T;
		F=T;
	}
}

void Presenta(){
	while(I!=NULL){
		cout<<"Numero: "<<I->num<<endl;
		I=I->sig;
	}
}

void Ver(){
	cout<<"Inicio: "<<I->num<<endl;
}
