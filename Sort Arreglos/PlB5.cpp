#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int numeros(int,int);

int main(int argc, char** argv) {
	int nm, exp;
	
	cout<<"Ingrese Numero"<<endl;
	cin>>nm;
	cout<<"Ingrese Expoencial"<<endl;
	cin>>exp;
	cout<<"Resultado: "<<numeros(nm,exp);
	
	return 0;
}

int numeros(int x, int y){
	if(y<1){
		return 1;
	}else{
		return numeros(x, y-1)*x;
	}
}
