#include <iostream>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int arreglo[10];
int maxi();
int mini();

int main(int argc, char** argv) {
	
	for(int i=0;i<10;i++){
		cout<<"Ingresar numero en la posicion "<<i+1<<endl;
		cin>>arreglo[i];
	}	
	
	//presentar
	for(int i=0;i<10;i++){
		cout<<i+1<<":->"<<arreglo[i]<<endl;
	}
	
	cout<<"Mayor: "<<maxi()<<endl;
	cout<<"Menor: "<<mini()<<endl;
	
	return 0;
}

int maxi(){
	int mayor = arreglo[0];
	for(int i= 0;i<10;i++){
		if(arreglo[i] > mayor){
			mayor = arreglo[i];
		}
	}
	return mayor;
}

int mini(){
	int menor = arreglo[0];
	for(int i = 0;i<10;i++){
		if (arreglo[i] < menor){
   			menor = arreglo[i];
    	}
	}
	return menor;
}

