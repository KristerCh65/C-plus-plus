#include <iostream>
#include "listanodo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

nodo *I, *T, *F, *A, *O;
void agregar(int,string,int,int);
void recorrer();
int sumatoria();
int Busqueda(int);
int Modificar(int);
int Eliminar(int);
void Ordenar();
int bus;
int op;
int id;
void order();
string nombre;
int nota1, nota2;
int main(int argc, char** argv) {
	
	do{
		cout<<"\t\t Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Recorrer"<<endl;
		cout<<"3) Sumatoria"<<endl;
		cout<<"4) Busqueda"<<endl;
		cout<<"5) Modificar"<<endl;
		cout<<"6) Eliminar"<<endl;
		cout<<"7) Ordenar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese numero de ID: "<<endl;
				cin>>id;
				cout<<"Ingrese Nombre: "<<endl;
				cin>>nombre;
				cout<<"Ingrese Nota 1: "<<endl;
				cin>>nota1;
				cout<<"Ingrese Nota 2: "<<endl;
				cin>>nota2;
				agregar(id,nombre,nota1,nota2);
				break;
			case 2:
				recorrer();
				break;
			case 3:
				sumatoria();
				break;
			case 4:
				cout<<"Ingrese el Id a buscar:"<<endl;
				cin>>bus;
				Busqueda(bus);
				break;
			case 5:
				cout<<"Ingrese el Id a Modificar:"<<endl;
				cin>>bus;
				Modificar(bus);
				break;
			case 6:
				cout<<"Ingrese el Id a Eliminar:"<<endl;
				cin>>bus;
				Eliminar(bus);
				break;
			case 7:
				cout<<"Lista Ordenada"<<endl;
				Ordenar();
			case 0:
				break;
			default:
				cout<<"Opcion no valida";
		}
	}while(op=!0);

	return 0;

}


void agregar(int tid, string nom, int n1, int n2){
	T = new nodo();
	T->id=tid;
	
	T->nombre=nom;
	T->nota1=n1;
	T->nota2=n2;
	
	T->sig=NULL;
	
	if(I==NULL){
		I=T;
		F=T;
	}
	
	else{
		F->sig=T;
		F=T;
	}
	
}  

int sumatoria(){
	T=I;             
	int suma = 0;               //Muevo puntero al inicio de la lista
	while(T!=NULL){
		suma += T->id;
		T=T->sig;
	}
	cout<<"La suma de los Id es: "<<suma<<endl;
}

int Busqueda(int buscar){
	bool encontrado = false;
	T=I;             
          //Muevo puntero al inicio de la lista
	while(T!=NULL){
		if(T->id==buscar){
			cout<<"Id:       "<<T->id<<endl;
			cout<<"Nombre:   "<<T->nombre<<endl;
			cout<<"Nota 1:   "<<T->nota1<<endl;
			cout<<"Nota 2:   "<<T->nota2<<endl;
			cout<<"Promedio: "<<T->promedio()<<endl;
			encontrado = true;
		}
			T=T->sig;		
	}
}

void recorrer(){
	T=I;                            //Muevo puntero al inicio de la lista
	while(T!=NULL){
		cout<<"Id:      "<<T->id<<endl;
		cout<<"Nombre:  "<<T->nombre<<endl;
		cout<<"Nota 1:  "<<T->nota1<<endl;
		cout<<"Nota 2:  "<<T->nota2<<endl;
		cout<<"Promedio:"<<T->promedio()<<endl;
		T=T->sig;
	}
}

int Modificar(int buscar){
	bool encontrado = false;
	T=I;             
          //Muevo puntero al inicio de la lista
	while(T!=NULL){
		if(T->id==buscar){
			cout<<"Id:       "<<T->id<<endl;
			cout<<"Nombre:   "<<T->nombre<<endl;
			cout<<"Nota 1:   "<<T->nota1<<endl;
			cout<<"Nota 2:   "<<T->nota2<<endl;
			cout<<"Promedio: "<<T->promedio()<<endl;
			encontrado = true;
			
			cout<<"Ingrese Nuevos Valores"<<endl;
			cout<<"Numero de Id: "<<T->id<<endl;
			cout<<"Nombre: "<<endl;
			cin>>T->nombre;
			cout<<"Nota 1: "<<endl;
			cin>>T->nota1;
			cout<<"Nota 2: "<<endl;
			cin>>T->nota2;
		}
			T=T->sig;
			
		if(!encontrado){
	   		cout<<"ID no encontrado"<<endl;
	   	}
	}
			
}

int Eliminar(int elimi){
		bool encontrado=false;
		A=I;
		T=I;
	while(T!=NULL && !encontrado){
		
		if(T->id == elimi){
		
			if(I==T){
				I=T->sig;
			}else{
				A->sig = T->sig;
			}

			cout <<"Id:      "<<T->id<<endl;
			cout <<"Nombre   "<<T->nombre<<endl;
			cout <<"Nota1    "<<T->nota1<<endl;
			cout <<"Nota2    "<<T->nota2<<endl;
			cout <<"Promedio "<<T->promedio()<<endl;
			encontrado=true;
	   	}
	    A=T;
		T=T->sig;
		
		if(!encontrado){
  			cout<<"ID no encontrado"<<endl;
		}
	}
}

void Ordenar()
{
    T=I;
    A=T;
    int d;
    string nm;
    int tn1, tn2;
    while (T->sig!=NULL) {
        A = T->sig;
        
        while (A!=NULL) {
 
            if (T->id > A->id) {
                d = A->id;
                nm = A->nombre;
                tn1 = A->nota1;
                tn2 = A->nota2;
                
                A->id = T->id;
                A->nombre = T->nombre;
                A->nota1 = T->nota1;
                A->nota2 = T->nota2;
                
                T->id = d;
                T->nombre = nm;
                T->nota1 = tn1;
                T->nota2 = tn2;
            }
            A = A->sig;
        }
        T = T->sig;
    }
    
	recorrer();
}

void order(){
	T=I;
	int tid;
	int tn1, tn2;
	string tnombre;
	int cont=0;
	while(T!=NULL){
		cont++;
		T=T->sig;
	}
	
	for(int i=0; i<cont-1; i++){
		A=I;
		for(int x=0;x<cont-1; x++){
			T=A->sig;
			if(A->promedio()>T->promedio()){
				
				tid = A->id;
				tnombre = A->nombre;
				tn1= A->nota1;
				tn2= A->nota2;
				
				T->id=A->id;
				T->nombre=A->nombre;
				T->nota1=A->nota1;
				T->nota2=A->nota2;
				
				T->id=tid;
				T->nombre=tnombre;
				T->nota1=tn1;
				T->nota2=tn2;
				
				T=T->sig;
			}
		}
	}
}

