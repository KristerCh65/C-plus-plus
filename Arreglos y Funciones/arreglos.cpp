#include <iostream>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int arreglo[10];
int maxi();
int mini();

int main(int argc, char** argv) {
	
	for(int y; y<10;y++){
		cout<<"Ingrese Numero en posicion: "<<y+1<<endl;
		cin>>arreglo[y];
	}
	
	srand(time(NULL));
	
	//presentar
	for(int i=0;i<10;i++){
		cout<<i<<":->"<<arreglo[i]<<endl;
	}
	
	cout<<"Mayor: "<<maxi()<<endl;
	cout<<"Menor: "<<mini()<<endl;
	
	return 0;
}

int maxi(){
	int my =arreglo[0];
		for(int i;i<10;i++){
		if(arreglo[i]>my){
			my = arreglo[i];
		}
	}
	return my;
}

int mini(){
	int mn =arreglo[0];
		for(int i;i<10;i++){
		if(mn>arreglo[i]){
			mn = arreglo[i];
		}
	}
	return mn;
}

