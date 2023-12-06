#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int edad;

int main(int argc, char** argv) {
	
	cout <<"Ingrese edad"<<endl;
	cin>>edad;
	
	if (edad>=18){
		cout<<"Mayor de edad"<<endl;
	}else{
		cout<<"Menos de edad"<<endl;
	}
	
	system("pause");
	return 0;
}
