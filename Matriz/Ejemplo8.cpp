#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
char op='s';

int main(int argc, char** argv) {

	do{
		cout<<"Desea Continuar"<<endl;
		cin>>op;
		
	}while(op!='n');
	
	cout<<"Hasta luego..."<<endl;
	system("pause");
	return 0;
}
