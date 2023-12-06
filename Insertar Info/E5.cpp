#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Digite su edad: "<<endl;
	cin>>edad;
	cout<<"Digite su sexo: "<<endl;
	cin>>sexo;
	cout<<"Digite su altura: "<<endl;
	cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura en metros: "<<altura<<endl;
	
	return 0;
}
