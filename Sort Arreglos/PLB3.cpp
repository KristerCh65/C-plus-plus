#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int numeros(int);

int main(int argc, char** argv) {
	int nm;
	
	cout<<"Ingrese Numero"<<endl;
	cin>>nm;
	cout<<"Resultado: "<<numeros(nm);
	
	return 0;
}

int numeros(int x){
	if(x<0){
		return 0;
	}else{
		return numeros(x-1)+x;
	}
}

