#include <iostream>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int arreglo[10];
int maxi();
int mini();

int main(int argc, char** argv) {
	srand(time(NULL));
	
	//llenar
	for(int i=0;i<10;i++){
		arreglo[i]=(rand()%11)+10;
	}	
	
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
		for(int i= 0;i<10;i++){
		if(arreglo[i]>my){
			my = arreglo[i];
		}
	}
	return my;
}

int mini(){
	int mn = arreglo[0];
	for(int i = 0 ;i<10;i++){
		if(arreglo[i]<mn){
			mn = arreglo[i];
		}
	}
	return mn;
}


