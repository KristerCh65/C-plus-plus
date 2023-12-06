#include <iostream>
#include <fstream>
#include <thread>
#include "string"
#include "Info.h"

using namespace std;

int op, cont=1;
string nombre;
string apel;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
Info *I, *L, *F;

void menu();
void guardar();
void presentar();

void adiciona(int n, string nom, string ape){
	cont++;
	L = new Info();
	
	L->num=n;
	L->nombre=nom;
	L->apellido=ape;
	
	L->nx=NULL;
	
	if(I==NULL){
		I=L;
		F=L;
	}
	else{
		F->nx=L;
		L->ant=F;
		F=L;
	}
} 

void hilo(int n, int t){
	
	while(0==0){
		if(n==1){
			cout<<"Registro #"<<cont<<endl;
			cout<<"ingrese nombre"<<endl;
			cin>>nombre;
			cout<<"ingrese apellido"<<endl;
			cin>>apel;
			adiciona(cont,nombre,apel);
			this_thread::sleep_for(chrono::milliseconds(t*2000));
		}
		if(n==2){
			guardar();
			this_thread::sleep_for(chrono::milliseconds(t*2000));
			cout<<"Salvando..... "<<endl;
		}
	}
}

int main(int argc, char** argv) {
	srand(time(NULL));
	
	thread x(hilo,1,1);
	thread y(hilo,2,10);
	
	x.join();
	y.join();
	
	
	return 0;
}

/*
void menu(){
	do{
	cout<<"\t MENU"<<endl;
	cout<<"1) Agregar"<<endl;
	cout<<"2) Presentar"<<endl;
	cout<<"0) salir"<<endl;
	cin>>op;
	switch(op){
		case 1:
			cout<<"ingrese nombre"<<endl;
			cin>>nombre;
			cout<<"ingrese apellido"<<endl;
			cin>>apel;
			adiciona(nombre,apel);
			break;
		case 2:
			presentar();
			break;
	}while(op!=0);
}
*/

void guardar(){
	ofstream archivo;
	L=I;
	//archivo.open("c:\\archivo\\registros");
	archivo.open("c:\\archivo\\registros.txt",ios::app);
	while(L!=NULL){
		archivo<<L->num<<"\n";
		archivo<<L->nombre<<"\n";
		archivo<<L->apellido<<"\n";
		
		L=L->nx;
	}
	//archivo<<texto<<"\n";
	archivo.close();
}

/*
void presentar(){
	L=I;
	while(L!=NULL){
		cout<<"Nombre"<<L->num<<endl;
		cout<<"Nombre"<<L->nombre<<endl;
		cout<<"Apellido"<<L->apellido<<endl;
		
		L=L->nx;
	}
}
*/
