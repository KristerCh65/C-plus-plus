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
	if(x<1){
		return 1;
	}else{
		cout<<x<<endl;
		return numeros(x-1)*x;
	}
}

