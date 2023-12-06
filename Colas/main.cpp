
#include <iostream>
#include "Nodo.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
Nodo *I, *L, *F;
void adiciona(int);
void mostrar();
int id;
int op;

int main(int argc, char** argv) {
	
	do{
		cout<<"\t Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Sacar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese numero de ID: "<<endl;
				cin>>id;
				adiciona(id);
				break;
			case 2:
				mostrar();
				break;
		}
	}while(op!=0);
	return 0;
}

void adiciona(int tid){
	L = new Nodo();
	L->id=tid;
	
	L->sig=NULL;
	
	if(I!=NULL){
		L->sig=F;
	}
	F=L;
	
}

void mostrar()
{  
	L=F;
	while(L!=NULL)
	{
	    cout<<"\t"<< L->id <<endl;
	    L = L->sig;
    }    
}

