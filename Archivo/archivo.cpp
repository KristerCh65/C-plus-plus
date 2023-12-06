#include <iostream>
#include<fstream>
#include "string"
#include "Lista.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

Lista *I, *L, *F;

void agregar(string, string, string);
void guardar(); 
void leer();
void presentar();
string nombre, n1, n2;
int op;

int main(int argc, char** argv) {
	do{
		cout<<"\t MENU"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Guardar"<<endl;
		cout<<"3) Leer"<<endl;
		cout<<"4) Presentar"<<endl;
		cout<<"0) salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"ingrese nombre"<<endl;
				cin>>nombre;
				cout<<"nota 1"<<endl;
				cin>>n1;
				cout<<"nota 2"<<endl;
				cin>>n2;
				agregar(nombre, n1, n2);
				break;
			case 2:
				guardar();
				break;
			case 3:
				leer();
				break;
			case 4:
				presentar();
				break;
		}
		
	}while(op!=0);
	
	/*
	cout<<"ingrese texto"<<endl;
	cin>>var;
	guardar();
	leer();
	system("pause");
	*/
	
	return 0;
}

void agregar(string nom, string n1, string n2){
	L = new Lista();
	
	L->nombre=nom;
	L->nota1=n1;
	L->nota2=n2;
	
	if(I==NULL){
		I=L;
		F=L;
	}
	
	else{
		F->sig=L;
		L->ant=F;
		F=L;
	}
	
}

void guardar(){
	ofstream archivo;
	L=I;
	//archivo.open("c:\\archivo\\empleado");
	archivo.open("c:\\archivo\\empleado.txt",ios::app);
	while(L!=NULL){
		archivo<<L->nombre<<"\n";
		archivo<<L->nota1<<"\n";
		archivo<<L->nota2<<"\n";
		
		L=L->sig;
	}
	//archivo<<texto<<"\n";
	archivo.close();
}

void leer(){
	I=NULL;
	F=NULL;
	L=I;
	string mn,n,t;
	fstream l_archivo;
	l_archivo.open("c:\\archivo\\empleado.txt");
	while(!l_archivo.eof()){
		L->nombre=mn;
		l_archivo>>mn;
		L->nota1=n;
		l_archivo>>n;
		L->nota2=t;
		l_archivo>>t;
		
		agregar(mn,n,t);
		
		/*cout<<texto<<endl;
		l_archivo>>texto;*/
			
		L=L->sig;
	}
	l_archivo.close();
}
void presentar(){
	L=I;
	while(L!=NULL){
		cout<<"Nombre"<<L->nombre<<endl;
		cout<<"\t"<<"Nota 1"<<L->nota1<<endl;
		cout<<"\t"<<"Nota 2"<<L->nota2<<endl;
		
		L=L->sig;
	}
}
