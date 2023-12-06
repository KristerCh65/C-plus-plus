#include <iostream>
#include "Nodo.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

Nodo *I,*T,*E,*L;

void agregar(int);
void adiciona(int);
void mostrar();
void Fila1();
void Fila2();

int op;
int id;
int c1=0, c2=0;

int main(int argc, char** argv) {
	
	do{
		cout<<"\t\t Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Sacar"<<endl;
		cout<<"3) Fila 1"<<endl;
		cout<<"4) Fila 2"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese numero de ID: "<<endl;
				cin>>id;
				agregar(id);
				break;
			case 2:
				mostrar();
				break;
			case 3:
				Fila1();
				break;
			case 4:
				Fila2();
				break;
		}
	}while(op!=0);
	
	return 0;
}

void agregar(int tid){
	T = new Nodo();
	T->id=tid;
	
	T->sig=NULL;
	
	if(I!=NULL){
		T->sig=I;
	}
	I=T;
	
}

void adiciona(int tid){
	L = new Nodo();
	L->ci=tid;
	
	L->sig=NULL;
	
	if(E!=NULL){
		L->sig=E;
	}
	E=L;
	
}

void Fila1(){
	T=I;
	E=NULL;
	while(T!=NULL)
	{
	    cout<<"\t"<< T->id <<endl;
	    T = T->sig;
		adiciona(T->id);
    }
}

void Fila2(){
	L=E;
	I=NULL;
	while(T!=NULL)
	{
	    cout<<"\t"<< L->ci <<endl;
	    L = L->sig;
	    agregar(L->ci);
    }
}

void mostrar()
{   
	T=I;
	while(T!=NULL)
	{
	    cout<<"\t"<< T->id <<endl;
	    T = T->sig;
    }    
}
