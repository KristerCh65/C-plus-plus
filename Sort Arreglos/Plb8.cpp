#include <iostream>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int numeros[10];
int temp;

int main(int argc, char** argv) {
	srand(time(NULL));
	
	for(int i= 0;i<9;i++){
		numeros[i]=rand()%11;
		cout<<i+1<<"-> "<<numeros[i]<<endl;
	}
	
	cout<<"Ordenados: "<<endl;

	for(int i = 0; i < 9; i++){
		for(int x = 0; x < 9; x++){
			if(numeros[i]>numeros[x]){
				temp=numeros[i]; 
            	numeros[i]=numeros[x]; 
            	numeros[x]=temp; 
			}
		}
	}
	
	for(int i=0;i<9;i++){
		cout<<i+1<<"-> "<<numeros[i]<<endl;
	}
	
	return 0;
}

